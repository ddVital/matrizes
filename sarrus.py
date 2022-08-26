a = [[0,0,0],[0,0,0],[0,0,0]]
x = 0
y = 0

print("Digite os elementos da matriz 3x3: ")
for i in range(0, 3):
    for j in range(0, 3):
        current_number = int(input(f"A[{i}][{j}]: "))
        a[i][j] = current_number

for i in range(0, 3):
    x = x + a[0][i] * a[1][(i+1)%3] * a[2][(i+2)%3]
    y = y + a[2][i] * a[1][(i+1)%3] * a[0][(i+2)%3]

print(f"{x} - {y} = {x-y}")