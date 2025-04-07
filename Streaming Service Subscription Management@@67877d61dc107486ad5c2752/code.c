#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char type[10];
    float cost;
} Subscription;

int main() {
    int n;
    scanf("%d", &n);
    
    Subscription subs[n];
    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", subs[i].name, subs[i].type, &subs[i].cost);

        if (strcmp(subs[i].type, "Basic") == 0) {
            basicCount++;
            basicRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Standard") == 0) {
            standardCount++;
            standardRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += subs[i].cost;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; ", basicCount, basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standardCount, standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premiumCount, premiumRevenue);

    return 0;
}