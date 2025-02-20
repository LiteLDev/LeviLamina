#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldInfo.h"

struct NetworkWorldInfo : public ::WorldInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkef32d1;
    ::ll::UntypedStorage<8, 32>  mUnk4d4b46;
    ::ll::UntypedStorage<8, 32>  mUnkb6c8ee;
    ::ll::UntypedStorage<8, 32>  mUnk8f942f;
    ::ll::UntypedStorage<8, 32>  mUnkcbcd3e;
    ::ll::UntypedStorage<8, 32>  mUnk445081;
    ::ll::UntypedStorage<1, 1>   mUnk53c673;
    ::ll::UntypedStorage<1, 1>   mUnk20776d;
    ::ll::UntypedStorage<8, 208> mUnkeb64bc;
    ::ll::UntypedStorage<8, 344> mUnkdf2237;
    ::ll::UntypedStorage<8, 488> mUnk8e77cc;
    ::ll::UntypedStorage<8, 16>  mUnka73aaa;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldInfo& operator=(NetworkWorldInfo const&);
    NetworkWorldInfo(NetworkWorldInfo const&);
    NetworkWorldInfo();
};
