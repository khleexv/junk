#RASCAR TEST
line = [1,0,0,0,0]
degree = [-20 if line[1] else -35, -5 if line[2] else -10, 0, 5 if line[2] else 10, 20 if line[3] else 35]
degree = [x*y for x, y in zip(line, degree)]
print(degree)