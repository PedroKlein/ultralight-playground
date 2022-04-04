#include <iostream>
#include "UI/ui.h"
#include "DataExample/dataExample.h"

int main()
{

  DataExample<int> data(123214, 0);
  UI app(data);

  app.Run();
  return 0;
}
