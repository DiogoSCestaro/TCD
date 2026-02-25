void troca(int a[], int x,int y)
{
     int w;
    w=a[x];
    a[x]=a[y];
    a[y]=w;
}
void bobbleSort(int a[],int n)
{
     int contador = 1;
    int m=n;
    for(int j=0;j<n;j++)
    {
        if(contador==0)
        {
            break;
        }
        contador = 0;
        for(int i=0;i<m;i++)
        {
            if(a[i]>a[i+1])
            {
                troca(a,i,i+1);
                contador++;
            }
        
        }
        m--;
    }
}
void insertSort(int vetor[],int size)
{
    int aux,j;
    for(int i=1;i<size-1;i++)
    {
        if(vetor[i]<vetor[i-1])
        {
            aux = vetor[i];
            vetor[i] = vetor[i-1];
            j = i - 1;
            while(j>=0)
            {
                if(aux<vetor[j])
                {
                    vetor[j+1] = vetor[j];
                    vetor[j] = aux;
                }
                else
                {
                    break;
                }
                j = j - 1;
            }
        }
    }
}