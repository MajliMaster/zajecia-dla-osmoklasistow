N = int(input())
heart = [
    " @@@   @@@ ",
    "@   @ @   @",
    "@    @    @",
    "@         @",
    " @       @ ",
    "  @     @  ",
    "   @   @   ",
    "    @ @    ",
    "     @     "]
for line in heart:
    for i in range(N):
        if i == N-1:
            print(line, end='')
        else:
            print(line, end=' ')
    print()
