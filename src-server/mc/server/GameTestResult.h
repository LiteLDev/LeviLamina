#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk204eba;
    ::ll::UntypedStorage<4, 4>  mUnkb55a6f;
    ::ll::UntypedStorage<8, 32> mUnk19282e;
    ::ll::UntypedStorage<8, 32> mUnkcfa1f2;
    ::ll::UntypedStorage<8, 32> mUnke85467;
    ::ll::UntypedStorage<8, 32> mUnk37d3dd;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestResult& operator=(GameTestResult const&);
    GameTestResult(GameTestResult const&);
    GameTestResult();
};
