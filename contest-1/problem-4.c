#include <stdio.h>
int main() {
  int n;
  int arr[100];
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }

  int im=arr[0];
  for (int i = 1; i < n; ++i)
  {
    if (arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }


  printf("%d ",(arr[0]-im));

  for(int i=1;i<n;i++)
  {
      int sub=(arr[0]-arr[i]);
      printf("%d ",sub);
  }


  return 0;
}
