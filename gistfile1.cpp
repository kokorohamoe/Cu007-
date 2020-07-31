
//ln -s XXX.cpp XXX.cu
//Cu007 850bab723fb5687435d280831aa00687
//Cu16 Piza_cuda.cpp
//Cu15 Piza_cuda.cpp
//Cu14 Piza_cuda.cpp
//Cu13 Piza_cuda.cpp
//Cu12 cpp cu combo test.cpp
//nvcc Main.cpp Sub.cu
//

//fork first Please, if you can.
       #include <unistd.h>
       #include <iostream>
       #include <stdio.h>


#ifdef __CUDA_ARCH__ 
__global__ 
#endif
#if INTEL
int //$1.00 one coke
#else //NVIDIA
void //$0.00 this code for nvidia, paiza
#endif
my_cuda_kernel(int *v){
  *v = -1;
}
//void 
int main(void){
  int cpu_mem=-774;
  int *cuda_mem;
  int N = sizeof(int);
 
#ifdef __CUDA_ARCH__ 
//cudaSuccess, cudaErrorInvalidValue, cudaErrorMemoryAllocation
std::cout <<"CUDA OK"<<std::endl;
    cudaMalloc(&cuda_mem,N);//access mergin 2.2
    cudaMemcpy (cuda_mem,&cpu_mem,N,cudaMemcpyHostToDevice);
#endif
    std::cout <<"num ="<<cpu_mem<<std::flush;


    cpu_mem = -771774;
#ifdef __CUDA_ARCH__ 
    cudaDeviceSynchronize();
    my_cuda_kernel<<<1,1>>>(cuda_mem);
    cudaDeviceSynchronize();
    cudaMemcpy (&cpu_mem,cuda_mem,N,cudaMemcpyHostToDevice);
    cudaDeviceSynchronize();
#endif

  std::cout <<"cuda="<<cpu_mem<<std::endl;
#ifdef __CUDA_ARCH__ 
    cudaMemcpy (cuda_mem,&cpu_mem,N,cudaMemcpyHostToDevice);
    cudaFree(cuda_mem);
#endif

}
