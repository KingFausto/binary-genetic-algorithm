// #include <stdio.h>
// #include <math.h>
// #include <time.h>
// #include <stdlib.h>

// Binary Genetic Algorithm
// 
// minimizes the objective function designated in ff
// Before beginning, set all the parameters in parts
// I, II, and III
// Haupt & Haupt
// 2003

int main()
{
    // __________________________________________________________________
    // I. Setup the GA

    char *ff = "testfunction";  // objective function
    int npar = 2;   // number of optimization variables

    // __________________________________________________________________
    // II. Stopping criteria

    int maxit = 100;    // max number of iterations
    int mincost = -9999999; // minimum cost

    // __________________________________________________________________
    // III. GA parameters

    int popsize = 16;   // set population size
    float mutrate = 0.15;   // set mutation rate
    float selection = 0.5;  // fraction of population kept

    int nbits = 8;  // number of bits in each parameter
    int Nt = npar * nbits;  // total number of bits in a chromosome

    int keep = floor(selection * popsize);  // population members that survive

    // __________________________________________________________________
    // Create the initial population

    int iga = 0;    // generation counter initialized

    // TODO: IMPLEMENT ROUND AND RAND FUNCTIONS
    int pop = round(random(popsize, Nt));  // random population of 1s and 0s
    
    // TODO: IMPLEMENT GADECODE
    float *par = gadecode(pop, 0, 10, nbits);   // convert binary to continuous values
    
    // __________________________________________________________________
    // De aqui en adelante, nada esta implementado

    // [cost, ind] = sort(cost);    // min cost in element 1

    // par = par(ind,:);    // sorts population with lowest cost first
    // pop=pop(ind,:);

    // minc(1) = min(cost);     // minc contains min of population

    // meanc(1) = mean(cost);   // meanc contains mean of population
    
    // __________________________________________________________________
    // Iterate through generations

    while (iga < maxit)
    {
        iga =  iga + 1;     // increments generation counter
    }

    return 0;
}



float *round(float arr[])
{
    // TODO: return the same matrix but with every value rounded to the nearest integer
    return arr;
}

float *random(int rows, int cols)
{
    // TODO: generate a rows by cols matrix with random integers
    float r[cols][rows];
    srand((unsigned) time(&t));

    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            r[j][i] = (float)rand() % 1000 / 1000;
        }
    }
    return r;
}

float *gadecode(int chrom[], int lo, int hi, int bits)
{
    // TODO: genetic algorithm decode function
    float *r;

    // [M,N]=size(chrom);

    // npar=N/bits;    // number of variables

    // quant=(0.5.^[1:bits]’);     // quantization levels

    // quant=quant/sum(quant);     // quantization levels normalized

    // ct=reshape(chrom’,bits,npar*M)’;    // each column contains one variable

    // par=((ct*quant)*(hi-lo)+lo);    // DA conversion and unnormalize varaibles

    // f=reshape(par,npar,M)’;     // reassemble population
    return r;

}