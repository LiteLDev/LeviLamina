#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UpdateBoundingBox {

struct SetSizeArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb54dc2;
    ::ll::UntypedStorage<8, 8> mUnke1c94f;
    ::ll::UntypedStorage<8, 8> mUnk4101e7;
    ::ll::UntypedStorage<8, 8> mUnk86bfe0;
    ::ll::UntypedStorage<8, 8> mUnk8b924c;
    ::ll::UntypedStorage<8, 8> mUnk4dbf80;
    ::ll::UntypedStorage<8, 8> mUnk53a058;
    ::ll::UntypedStorage<8, 8> mUnk2dde74;
    // NOLINTEND

public:
    // prevent constructor by default
    SetSizeArgs& operator=(SetSizeArgs const&);
    SetSizeArgs(SetSizeArgs const&);
    SetSizeArgs();
};

} // namespace UpdateBoundingBox
