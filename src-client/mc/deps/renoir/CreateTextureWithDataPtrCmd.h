#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CreateTextureWithDataPtrCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk221a0e;
    ::ll::UntypedStorage<4, 52> mUnk9e67a4;
    ::ll::UntypedStorage<8, 8>  mUnk75c408;
    ::ll::UntypedStorage<4, 4>  mUnkb9c918;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateTextureWithDataPtrCmd& operator=(CreateTextureWithDataPtrCmd const&);
    CreateTextureWithDataPtrCmd(CreateTextureWithDataPtrCmd const&);
    CreateTextureWithDataPtrCmd();
};

} // namespace renoir
