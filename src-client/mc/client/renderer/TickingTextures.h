#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class FlipbookTexture;
// clang-format on

class TickingTextures {
public:
    // TickingTextures inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // TickingTextures inner types define
    struct Impl {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbacc42;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingTextures& operator=(TickingTextures const&);
    TickingTextures(TickingTextures const&);
    TickingTextures();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TickingTextures();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
