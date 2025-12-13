#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TextureGroupBase; }
namespace mce { class TexturePtr; }
namespace mcr { struct DynamicTextureResourceManager; }
// clang-format on

class TerrainTextures {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkde8cfe;
    ::ll::UntypedStorage<8, 32> mUnk6e9af9;
    ::ll::UntypedStorage<8, 32> mUnkfe837b;
    ::ll::UntypedStorage<8, 16> mUnk9c5a00;
    ::ll::UntypedStorage<8, 24> mUnk2a01da;
    // NOLINTEND

public:
    // prevent constructor by default
    TerrainTextures& operator=(TerrainTextures const&);
    TerrainTextures(TerrainTextures const&);
    TerrainTextures();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deinitTextures();

    MCNAPI void initTextures(
        ::mcr::DynamicTextureResourceManager&      dynamicTextureResourceManager,
        ::std::shared_ptr<::mce::TextureGroupBase> textureGroup,
        ::std::vector<::mce::TexturePtr>&&         atlasTextures
    );

    MCNAPI ~TerrainTextures();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
