#include "types.h"
#include "console.h"
#include "debug.h"

int kern_entry()
{
    init_debug();
    console_clear();
    printk_color(rc_black, rc_green, "Hello, OS kernel!\n");
    panic("It causes non-stop.");

    return 0;
}
