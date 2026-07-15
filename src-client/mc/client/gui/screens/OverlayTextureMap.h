#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TextureGroupBase; }
// clang-format on

class OverlayTextureMap {
public:
    // OverlayTextureMap inner types define
    enum class TextureId : int {
        None   = 0,
        Frozen = 1,
        Count  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroupBase>> mTextureGroup;
    ::ll::TypedStorage<4, 4, ::OverlayTextureMap::TextureId>              mCachedOverlayTextureId;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                          mCachedOverlayTexture;
    ::ll::TypedStorage<8, 64, ::std::array<::std::string, 2>>             mTextureNames;
    // NOLINTEND

public:
    // prevent constructor by default
    OverlayTextureMap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OverlayTextureMap(::std::shared_ptr<::mce::TextureGroupBase> textureGroup);

    MCAPI ::mce::TexturePtr _getTextureHandle(::std::string effectTextureName) const;

    MCAPI ::mce::TexturePtr get(::OverlayTextureMap::TextureId textureId) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroupBase> textureGroup);
    // NOLINTEND
};
