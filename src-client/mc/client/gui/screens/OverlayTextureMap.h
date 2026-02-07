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
    enum class TextureId : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroupBase>> mTextureGroup;
    ::ll::TypedStorage<4, 4, ::OverlayTextureMap::TextureId>              mCachedOverlayTextureId;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                          mCachedOverlayTexture;
    ::ll::TypedStorage<8, 64, ::std::array<::std::string, 2>>             mTextureNames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::mce::TexturePtr _getTextureHandle(::std::string effectTextureName) const;

    MCAPI ::mce::TexturePtr get(::OverlayTextureMap::TextureId textureId) const;

    MCAPI ~OverlayTextureMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
