#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GuiData {
public:
    // prevent constructor by default
    GuiData& operator=(GuiData const&);
    GuiData(GuiData const&);
    GuiData();
};
