import time,threading,queue

class Producer(threading.Thread):
  def __init__(self, queue):
     threading.Thread.__init__(self)
     self._queue = queue
  def run(self):
    while True:
      self._queue.put('hello world')
      print('*' * 20)
      print('Producer:')
      print('the size of queue is ', self._queue.qsize())
      time.sleep(1.5)

class Consumer(threading.Thread):
  def __init__(self, queue):
     threading.Thread.__init__(self)
     self._queue = queue

  def run(self):
     while True:
       item = self._queue.get()
       print('@' * 20)
       print('Consumer:')
       print("the value of item is ", item)
       print("the value of queue is ", self._queue.qsize())
       time.sleep(0.8)
if __name__ == "__main__":
  q = queue.Queue(maxsize=10)
  Producer(q).start()
  Producer(q).start()
  Consumer(q).start()
    

