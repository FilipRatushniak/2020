float power2(float a, float b)
{
   int x=1;
   int i;
   int j;
   int step;
    if((a+b)>=0);
    {
       step=a+b;

      for(j=0; j<step; j++)
      {
        x=x*2;
      }
     return x;
    }
    if(a+b<0)
    {
       step=-1*(a+b);
      for(j=0; j<step; j++)
      {
        x=x*2;
      }
      x=1/x;
      return x;
    }
}
float  d(float A, float B, float C)
{

  if(100-B-C!=0)
  {
    float x=(A+B+C)/(100-B-C);
    return x;
  }
    else
    {

     printf("error:you cannot divide by zero");
     return 0;
  }


}
float s(float A,float B, float C, float D)
{
float s=0;
int i;
int j;

float x;
  for(i=0; i<=A; i++)
  {

    x=1;
    x = power2(i, D);
    s=s+x;
  }
  return s;
}
float q(float d, float s)
{
  return d+s;
}
float inputVariables(float B)
{
  float x;
  scanf("%f", &x);

  B=x;

  return B;

}







