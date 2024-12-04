---

### **Geometric Shape Calculator**

This C program calculates the surface area and volume of various geometric shapes. It uses a menu-driven approach to allow the user to select the desired calculation, input the required dimensions, and display the results.

---

#### **Code Overview**

1. **Constants**:
   - The value of π (PI) is defined as `3.14` for volume and area calculations.

2. **Menu System**:
   - The program repeatedly displays a menu where the user can choose one of the following:
     1. Calculate the surface area and volume of a cube.
     2. Calculate the surface area and volume of a right circular cylinder.
     3. Calculate the surface area and volume of a sphere.
     4. Exit the program.

3. **Input Validation**:
   - The program ensures valid inputs for dimensions (e.g., positive values for radius, height, or edge length).

4. **Execution Flow**:
   - The user selects an option from the menu.
   - The dimensions are requested based on the selected option.
   - Calculations for the surface area and volume are performed using the appropriate formulas.
   - Results are displayed.
   - The process repeats until the user selects "Exit".

---

#### **Formulas Used**

1. **Cube**:
   - Surface Area: \( A = 6 \cdot a^2 \)  
   - Volume: \( V = a^3 \)  

2. **Right Circular Cylinder**:
   - Surface Area: \( A = 2 \cdot \pi \cdot r \cdot h + 2 \cdot \pi \cdot r^2 \)  
   - Volume: \( V = \pi \cdot r^2 \cdot h \)  

3. **Sphere**:
   - Surface Area: \( A = 4 \cdot \pi \cdot r^2 \)  
   - Volume: \( V = \frac{4}{3} \cdot \pi \cdot r^3 \)  

---

#### **Usage**
1. Compile the program:
   ```bash
   gcc -o ShapeCalculator main.c -lm
   ```
   (Use `-lm` to link the math library for `pow` function.)

2. Run the executable:
   ```bash
   ./ShapeCalculator
   ```

3. Select an operation from the menu and input dimensions as prompted.

---

#### **Sample Output**
```plaintext
Merhaba

Islemler:

1: Kup'un Alani ve Hacmi
2: Dik Silindir'in Alani ve Hacmi
3: Kure'nin Alani ve Hacmi
4: Cikis

Islemi seciniz: 1
Kup'un kenarini giriniz: 3
Kup'un alani: 54.0'dır.
Kup'un hacmi: 27.0'dır.

Islemi seciniz: 4
Cikis yapildi.
```

---

This program provides a simple and interactive way to calculate basic geometric properties of shapes, serving as a foundational example of menu-driven programming in C.
