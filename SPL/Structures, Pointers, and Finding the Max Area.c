#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

// Function using a pointer to calculate structure area
int calculateArea(struct Rectangle *r) {
    return r->length * r->breadth;
}

int main() {
    struct Rectangle rects[3];
    int max_area = 0;

    // Read details for 3 rectangles
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &rects[i].length, &rects[i].breadth);

        // Calculate area using pointer to the current structure element
        int area = calculateArea(&rects[i]);
        if (area > max_area) {
            max_area = area;
        }
    }

    printf("Largest Area: %d\n", max_area);

    return 0;
}
