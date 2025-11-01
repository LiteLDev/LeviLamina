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
    struct MERSTexturePtr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk87ce72;
        ::ll::UntypedStorage<1, 1>  mUnkc513c2;
        // NOLINTEND

    public:
        // prevent constructor by default
        MERSTexturePtr& operator=(MERSTexturePtr const&);
        MERSTexturePtr(MERSTexturePtr const&);
        MERSTexturePtr();
    };

    struct NormalTexturePtr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk2a9111;
        ::ll::UntypedStorage<1, 1>  mUnk763426;
        // NOLINTEND

    public:
        // prevent constructor by default
        NormalTexturePtr& operator=(NormalTexturePtr const&);
        NormalTexturePtr(NormalTexturePtr const&);
        NormalTexturePtr();
    };

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
    PBRTexturePtrs(PBRTexturePtrs const&);
    PBRTexturePtrs();
};
