void swap(int *a,int *b);                             //* hoán vị 2 số
void interchangeSort(List *L);                        //* Sắp xếp trực tiếp
void selectionSort(List *L);                          //* Sắp xếp chọn
void bubbleSort(List *L);                             //* Sắp xếp nổi bọt
void insertionSort(List *L);                          //* Sắp xếp chèn
void heaplify(int i,int n,List *L);                   //* Biến mảng thành cây nhị phân heap
void heapSort(List *L);                               //* Sắp xếp cây nhị phân
void shellSort(List *L);                              //* Sắp xếp shell (cải tiến sắp xếp chèn)
void quickSort(List *L,int start,int end);            //* Sắp xếp nhanh
void merge(List *L,int left,int mid,int right);       //* gộp mảng cho sắp xếp gộp
void mergeSort(List *L,int start,int end);            //* Sắp xếp gộp

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void interchangeSort(List *L){
    Node *temp1  = L->Head;
    Node *temp2 = NULL;
    while (temp1 != NULL){
        temp2 = temp1->Next;
        while (temp2 != NULL){
            if(temp1->data > temp2->data){
                swap(&temp1->data,&temp2->data);
            }
            else{
                temp2 = temp2->Next;
            }
        }
        temp1 = temp1->Next;
    }
}