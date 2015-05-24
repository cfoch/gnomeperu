#include <glib.h>

int
main (int arg, char ** argv)
{
  GList *list = NULL, *l;

  list = g_list_append (list, "mango");
  list = g_list_append (list, "papaya");
  list = g_list_prepend (list, "watermelon");
  list = g_list_append (list, "almond");
  list = g_list_prepend (list, "apple");

  for (l = list; l != NULL; l = l->next)
    g_print ("%s\n", l->data);

  g_list_free (list);

  return 0;
}
