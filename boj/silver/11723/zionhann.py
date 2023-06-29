import sys

box = set()
cnt = int(sys.stdin.readline().rstrip())

for _ in range(cnt):
    parts = sys.stdin.readline().rstrip().split()

    if len(parts) == 1:
        op = parts[0]   
    else:
        op, val = parts
        val = int(val)

    if op == "add":
        box.add(val)
    elif op == "remove":
        box.discard(val)
    elif op == "check":
        print(1 if val in box else 0)
    elif op == "toggle":
        if val in box:
            box.discard(val)
        else:
            box.add(val)
    elif op == "all":
        box = set(range(1, 21))
    elif op == "empty":
        box.clear()
