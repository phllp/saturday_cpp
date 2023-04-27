import time

start_time = time.time()

mtx1 = [
    [49, 19, 25, 48, 12, 47, 32, 11, 22, 33],
    [27, 15, 41, 50, 48, 17, 47, 30, 48, 10],
    [10, 28, 37, 15, 45, 50, 22, 45, 21, 31],
    [35, 11, 38, 12, 27, 17, 22, 23, 2, 47],
    [5, 9, 6, 7, 28, 8, 10, 12, 46, 34],
    [29, 41, 4, 38, 44, 36, 10, 20, 46, 50],
    [31, 18, 9, 18, 7, 10, 37, 24, 18, 13],
    [16, 8, 5, 12, 6, 31, 31, 36, 41, 45],
    [18, 34, 35, 38, 31, 16, 27, 47, 3, 30],
    [25, 11, 15, 9, 33, 1, 45, 20, 34, 17]
]

mtx2 = [
    [16, 38, 45, 30, 8, 27, 48, 26, 23, 34],
    [20, 48, 31, 13, 33, 19, 36, 18, 10, 8],
    [26, 50, 22, 16, 8, 29, 6, 35, 23, 27],
    [19, 48, 2, 25, 19, 6, 47, 28, 21, 20],
    [43, 28, 7, 43, 4, 41, 24, 12, 14, 31],
    [9, 31, 24, 3, 15, 43, 32, 12, 34, 46],
    [28, 33, 34, 3, 10, 26, 50, 18, 2, 25],
    [18, 25, 29, 35, 16, 50, 7, 34, 30, 44],
    [27, 5, 43, 48, 49, 23, 36, 6, 43, 3],
    [46, 2, 49, 22, 33, 13, 43, 28, 24, 50]
]


len_cols_mtx1 = len(mtx1[0])
len_rows_mtx2 = len(mtx2)

if (len_cols_mtx1 != len_rows_mtx2):
    raise Exception("Invalid operation")

itter_count = 0

pointer_m1 = 0
pointer_m2 = 0

output_matrix = []

for m1 in mtx1:
    sum_of_products = []
    line_products = []

    while itter_count < len(m1): 

        for m2 in mtx2:
            el_1 = m1[pointer_m1]
            el_2 = m2[pointer_m2]

            product = el_1 * el_2
            sum_of_products.append(product)

            pointer_m1 += 1

        line_products.append(sum(sum_of_products))
        sum_of_products = []
        pointer_m2 += 1
        pointer_m1 = 0
        itter_count += 1
    
    output_matrix.append(line_products)
    line_products = []
    pointer_m2 = 0
    itter_count = 0



print(output_matrix)

end_time = time.time()

execution_time = end_time - start_time
print(f"Execution time: {execution_time:.6f} seconds")