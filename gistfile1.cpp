//ln -s XXX.cpp XXX.cu
//
//

__global__ void cuda_kernel(int *v){
  *v = -1;
}
void main(void){
  int cpu_mem=-774;
  int *cuda_mem;
  int N = sizeof(int);
  
  cuda_kernel<<<1,1>>>(cuda_mem);
}
