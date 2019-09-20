my_a = input().split('[')[1].split(']')[0]
my_a = my_a.split(',')
l = []
for i in my_a:
    l.append(int(i))
_sum = 0
_max = l[0]
for i in l:
    _sum += i
    if _sum < 0:
        _sum = 0
    if _sum > _max:
        _max = _sum
print(_max)

input_ = input().split('[')[1].split(']')[0]
input_ = input_.split(',')
l = []
for i in input_:
    l.append(int(i))

sum = 0
max = l[0]
for i in l:
    sum += i
    if sum < 0:
        sum = 0
    if sum > max:
        max = sum

print(max)

