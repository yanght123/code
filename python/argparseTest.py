import argparse
parser =argparse.ArgumentParser()
parser.add_argument('echo',help='echo the string you use here')
data = parser.parse_args()
print(data.echo)
