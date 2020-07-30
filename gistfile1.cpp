//ln -s XXX.cpp XXX.cu
//
//

__global__ kernel(int *v){
  *v = -1;
}
void main(void){
  int cpu_mem=-1;
  int *cuda_mem;
  int N = sizeof(int);
  
  kernel<<<1,1>>>(cuda_mem);
}
