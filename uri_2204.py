def mdc(a,b):
	if(b==0):
		return a
	return mdc(b,a%b)

n = int(input())
for i in range(n):
	l = input().split()
	a = int(l[0])
	b = int(l[1])
	md = a
	for j in range(a,b+1):
		md = mdc(md,j)
		if md==1:
			break
	print(md)
