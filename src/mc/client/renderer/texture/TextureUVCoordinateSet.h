#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

struct TextureUVCoordinateSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk59c033;
    ::ll::UntypedStorage<4, 4>  mUnk65ef8d;
    ::ll::UntypedStorage<4, 4>  mUnkee5924;
    ::ll::UntypedStorage<4, 4>  mUnkf09c68;
    ::ll::UntypedStorage<4, 4>  mUnk89d2f1;
    ::ll::UntypedStorage<2, 2>  mUnke9e052;
    ::ll::UntypedStorage<2, 2>  mUnkff1029;
    ::ll::UntypedStorage<8, 56> mUnkf46eac;
    ::ll::UntypedStorage<1, 1>  mUnkfb1c21;
    ::ll::UntypedStorage<2, 2>  mUnkf4f7b1;
    ::ll::UntypedStorage<2, 2>  mUnk5269c9;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C TextureUVCoordinateSet();

    MCNAPI_C TextureUVCoordinateSet(::TextureUVCoordinateSet const&);

    MCNAPI_C TextureUVCoordinateSet(
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

    MCNAPI_C ::TextureUVCoordinateSet getFlippedHorizontal() const;

    MCNAPI_C ::TextureUVCoordinateSet getFlippedVertically() const;

    MCNAPI_C float offsetHeightPixel(float pixels, float startHeight) const;

    MCNAPI_C float offsetWidthPixel(float pixels, float startWidth) const;

    MCNAPI_C ::TextureUVCoordinateSet& operator=(::TextureUVCoordinateSet&&);

    MCNAPI_C ::TextureUVCoordinateSet& operator=(::TextureUVCoordinateSet const&);

    MCNAPI_C bool operator==(::TextureUVCoordinateSet const& other) const;

    MCNAPI_C ushort pixelWidth() const;

    MCNAPI_C ::TextureUVCoordinateSet subTexture(float u0ffset, float v0ffset, int sizeW, int sizeH) const;

    MCNAPI_C ~TextureUVCoordinateSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::TextureUVCoordinateSet fromOldSystem(int tex);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::TextureUVCoordinateSet const&);

    MCNAPI_C void* $ctor(
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
    MCNAPI_C void $dtor();
    // NOLINTEND
};
