#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSModuleDef {
public:
    // prevent constructor by default
    JSModuleDef& operator=(JSModuleDef const&);
    JSModuleDef(JSModuleDef const&);
    JSModuleDef();
};
