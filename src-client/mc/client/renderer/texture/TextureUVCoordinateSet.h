#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/IsotropicFaceData.h"
#include "mc/deps/core/resource/ResourceLocation.h"

struct TextureUVCoordinateSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               weight;
    ::ll::TypedStorage<4, 4, float>               _u0;
    ::ll::TypedStorage<4, 4, float>               _v0;
    ::ll::TypedStorage<4, 4, float>               _u1;
    ::ll::TypedStorage<4, 4, float>               _v1;
    ::ll::TypedStorage<2, 2, ushort>              _texSizeW;
    ::ll::TypedStorage<2, 2, ushort>              _texSizeH;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> sourceFileLocation;
    ::ll::TypedStorage<1, 1, ::IsotropicFaceData> mIsotropicFaceData;
    ::ll::TypedStorage<2, 2, short>               textureSetTranslationIndex;
    ::ll::TypedStorage<2, 2, ushort>              mPBRTextureDataHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureUVCoordinateSet(TextureUVCoordinateSet const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureUVCoordinateSet();

    MCAPI TextureUVCoordinateSet(
        float              u0,
        float              v0,
        float              u1,
        float              v1,
        ushort             texWidth,
        ushort             texHeight,
        ::ResourceLocation file,
        float              w,
        ushort             pbrTextureDataHandle
    );

    MCAPI ::TextureUVCoordinateSet& operator=(::TextureUVCoordinateSet const&);

    MCAPI ::TextureUVCoordinateSet subTexture(float u0ffset, float v0ffset, int sizeW, int sizeH) const;

    MCAPI ~TextureUVCoordinateSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        float              u0,
        float              v0,
        float              u1,
        float              v1,
        ushort             texWidth,
        ushort             texHeight,
        ::ResourceLocation file,
        float              w,
        ushort             pbrTextureDataHandle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
