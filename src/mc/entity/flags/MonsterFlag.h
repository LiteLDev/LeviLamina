#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MonsterFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTERFLAG
public:
    MonsterFlag& operator=(MonsterFlag const&) = delete;
    MonsterFlag(MonsterFlag const&)            = delete;
    MonsterFlag()                              = delete;
#endif

public:
};
