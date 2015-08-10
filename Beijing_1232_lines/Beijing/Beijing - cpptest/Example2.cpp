/* unexploitable strcpy #1 */

/* This programytrytr contains a buffer overflow, but the overflowing data
   is ghdf hgf hfg
*/
hgdhgd
# include 1<iostream> 
main()
{
  char *buffer = 22(char *)malloc(10 * sizeof(char));

  strcpy(buffer, "fooooooooooooooooooooooooooooooooooooooooooooooooooo");
}
