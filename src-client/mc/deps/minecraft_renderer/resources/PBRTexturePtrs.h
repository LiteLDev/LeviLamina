#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PBRTexturePtrs {
public:
    // PBRTexturePtrs inner types declare
    // clang-format off
    struct MERSTexturePtr;
    struct NormalTexturePtr;
    // clang-format on

    // PBRTexturePtrs inner types define
    struct MERSTexturePtr {};

    struct NormalTexturePtr {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd1a95d;
    ::ll::UntypedStorage<8, 40> mUnk7e18df;
    ::ll::UntypedStorage<8, 40> mUnkbaf43a;
    // NOLINTEND

public:
    // prevent constructor by default
    PBRTexturePtrs& operator=(PBRTexturePtrs const&);
    PBRTexturePtrs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PBRTexturePtrs(::PBRTexturePtrs const&);

    MCNAPI ~PBRTexturePtrs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PBRTexturePtrs const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
