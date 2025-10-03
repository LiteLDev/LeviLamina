#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"

struct BlockDestructionParticlesComponent {
public:
    // BlockDestructionParticlesComponent inner types declare
    // clang-format off
    struct TextureInfo;
    // clang-format on

    // BlockDestructionParticlesComponent inner types define
    struct TextureInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::string const&> mTexture;
        ::ll::TypedStorage<2, 2, ushort const>         mPreFlatteningAux;
        ::ll::TypedStorage<1, 1, ::TintMethod const>   mTintMethod;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureInfo& operator=(TextureInfo const&);
        TextureInfo(TextureInfo const&);
        TextureInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTexture;
    ::ll::TypedStorage<2, 2, ushort>         mPreFlatteningAux;
    ::ll::TypedStorage<1, 1, ::TintMethod>   mTintMethod;
    ::ll::TypedStorage<1, 1, uchar>          mParticleCount;
    // NOLINTEND
};
