#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldInfo.h"

struct LocalWorldInfo : public ::WorldInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkb8ea3d;
    ::ll::UntypedStorage<8, 8>   mUnkb48992;
    ::ll::UntypedStorage<8, 32>  mUnk81ce4e;
    ::ll::UntypedStorage<8, 32>  mUnk499cc3;
    ::ll::UntypedStorage<8, 32>  mUnk1ade36;
    ::ll::UntypedStorage<4, 4>   mUnkefefa9;
    ::ll::UntypedStorage<8, 32>  mUnk97606b;
    ::ll::UntypedStorage<1, 1>   mUnkbfc42e;
    ::ll::UntypedStorage<1, 1>   mUnkfd36ca;
    ::ll::UntypedStorage<1, 1>   mUnk210077;
    ::ll::UntypedStorage<8, 776> mUnkea2ad0;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldInfo& operator=(LocalWorldInfo const&);
    LocalWorldInfo(LocalWorldInfo const&);
    LocalWorldInfo();
};
