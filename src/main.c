#include "Application/Application.h"
#include <stdio.h>

int main()
{
    Application * const application = Application_instance();
    Application_init(application, null);
    printf("application.size() = %d\n", Cbject_size((Cbject *) application));
    Application_start(application);
    Application_terminate(application);
    return 0;
}
