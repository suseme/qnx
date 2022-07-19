

double dadd(double a,double b){
    return a+b;
}

double dsub(double a,double b){
    return a-b;
}

double dmul(double a,double b){
    return a*b;
}

double ddiv(double a,double b){
    return a/b;
}

float SumSquareError_C(const float* src_a, const float* src_b, int count)
{

  float sse = 0u;

  int i;

  for (i = 0; i < count; ++i) {

    float diff = src_a[i] - src_b[i];

    sse += (float)(diff * diff);

  }

  return sse;

}

void init(int flag, double dst[], double a, double b)
{
    if( flag )
    {

        for (int x = 0; x < 10; x++)
        {
            dst[x * 4]     = a;
            dst[x * 4 + 1] = a;
            dst[x * 4 + 2] = a;
            dst[x * 4 + 3] = a;
        }
    }
    else
    {
        for (int x = 0; x < 10; x++)
        {
            dst[x * 4]     = b;
            dst[x * 4 + 1] = b;
            dst[x * 4 + 2] = b;
            dst[x * 4 + 3] = b;
        }
    }
}

int main(void)
{
    return 0;
}

