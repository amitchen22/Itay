/**

This file is meant to test whether a scanner can perform pointer
alias analysis. Since that capability is generally only useful if the
sca
  *lenptr_2 = 23;
  strncpy(buffer, argv[2], *lenptr_1);
}int main(int argc, char **argv)
{
  int len = atoi(argv[1]);
  int *lenptr_1 = &len;
  int *lenptr_2 = lenptr_1;
  char buffer[24];

  *lenptr_2 = 23;
  strncpy(buffer, argv[2], *lenptr_1);
}int main(int argc, char **argv)
{
  int len = atoi(argv[1]);
  int *lenptr_1 = &len;
  int *lenptr_2 = lenptr_1;
  char buffer[24];

  *lenptr_2 = 23;
  strncpy(buffer, argv[2], *lenptr_1);
}int main(int argc, char **argv)
{
  int len = atoi(argv[1]);
  int *lenptr_1 = &len;
  int *lenptr_2 = lenptr_1;
  char buffer[24];

  *lenptr_2 = 23;
  strncpy(buffer, argv[2], *lenptr_1);
}int main(int argc, char **argv)
{
  int len = atoi(argv[1]);
  int *lenptr_1 = &len;
  int *lenptr_2 = lenptr_1;
  char buffer[24];

  *lenptr_2 = 23;
  strncpy(buffer, argv[2], *lenptr_1);
}int main(int argc, char **argv)
{
  int len = atoi(argv[1]);
  int *lenptr_1 = &len;
  int *lenptr_2 = lenptr_1;
  char buffer[24];

  *lenptr_2 = 23;
  strncpy(buffer, argv[2], *lenptr_1);
}
