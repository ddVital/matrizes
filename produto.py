A = [[0, 0, 0], 
    [0, 0, 0], 
    [0, 0, 0]] 
B = [[0, 0, 0], 
    [0, 0, 0], 
    [0, 0, 0]] 

for i in range(0, 3):
    for j in range(0, 3):
        current_number = int(input(f"A[{i}][{j}]: "))
        A[i][j] = current_number

for i in range(0, 3):
    for j in range(0, 3):
        current_number = int(input(f"B[{i}][{j}]: "))
        B[i][j] = current_number

result = [[0, 0, 0], 
        [0, 0, 0], 
        [0, 0, 0]] 
        
for i in range(len(A)): 
    for j in range(len(B[0])): 
        for k in range(len(B)): 
            result[i][j] += A[i][k] * B[k][j] 
  
for r in result: 
    print(r) 