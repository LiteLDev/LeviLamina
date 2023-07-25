#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitherBossFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERBOSSFLAG
public:
    WitherBossFlag& operator=(WitherBossFlag const&) = delete;
    WitherBossFlag(WitherBossFlag const&)            = delete;
    WitherBossFlag()                                 = delete;
#endif

public:
};
