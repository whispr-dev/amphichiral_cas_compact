import numpy as np 
import matplotlib.pyplot as plt

# Data points
X = np.array([[1,1], [2,2], [3,1], [8,8], [8, 9], [9, 9]])
Y = ['red', 'red', 'red', 'blue', 'blue', 'blue']

# Create figure
plt.figure(figsize=(10, 8))

# Scatter plot of points
plt.scatter(X[:, 0], X[:, 1], s=170, color=Y[:], alpha=0.6)

# Create polygons
red_triangle = plt.Polygon(X[:3,:], color='red', alpha=0.3)
blue_triangle = plt.Polygon(X[3:6,:], color='blue', alpha=0.3)

# Add polygons to plot
plt.gca().add_patch(red_triangle)
plt.gca().add_patch(blue_triangle)

# Add labels and title
plt.xlabel('X coordinate')
plt.ylabel('Y coordinate')
plt.title('Two Colored Triangle Groups')

# Show grid
plt.grid(True, linestyle='--', alpha=0.7)

plt.show()