#5. Compute the Matrix Multiplication between a matrix A and B. Don’t use any library.#

Amatrix = [[2,7,4,6],#Defining A matrix (3x4)
    [5,3,0,1],
    [4,2,8,3]]

Bmatrix = [[2,7],#Bmatrix (4x2)
    [0 ,4],
    [8 ,7],
	[3,8]]

multiplication = [[0,0],#result should be 3x2 (rows of A, columns of B), so:
         [0,0],
         [0,0]]

#multiplication
for x in range(len(Amatrix)):#moving through rows of A
   for y in range(len(Bmatrix[0])):#moving through columns of B
       for z in range(len(Bmatrix)):#moving through rows of B
           multiplication[x][y] += Amatrix[x][z] * Bmatrix[z][y]#filling the matrix with the result

for m in multiplication: #printing the result
   print(m)