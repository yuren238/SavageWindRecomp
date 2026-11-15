#pragma once
#include "cpu.h"

void rt_quick_drop_begin(Cpu *c);
void rt_quick_drop_menu(Cpu *c);
int quick_drop_hint_state(void);
bool quick_wear_active(void);                 // the pouch's weapon page is showing
int quick_wear_page(uint32_t *hits, int max);  // remaining hits per slot, 0 when not shown
