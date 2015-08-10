/* unexploitable strcpy #1 */

/* This programytrytr contains a buffer overflow, but the overflowing data
   is ghdf hgf hfg
*/
hgdhgd
# include <iostream> 
main()
{
  char *buffer = (char *)malloc(10 * sizeof(char));

  strcpy(buffer, "fooooooooooooooooooooooooooooooooooooooooooooooooooo");
}
