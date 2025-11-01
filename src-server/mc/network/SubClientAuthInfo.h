#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubClientAuthInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd91c50;
    ::ll::UntypedStorage<4, 4> mUnk87f20b;
    ::ll::UntypedStorage<8, 8> mUnke4add1;
    ::ll::UntypedStorage<8, 32> mUnk2630a3;
    // NOLINTEND

public:
    // prevent constructor by default
    SubClientAuthInfo& operator=(SubClientAuthInfo const&);
    SubClientAuthInfo(SubClientAuthInfo const&);
    SubClientAuthInfo();

};
