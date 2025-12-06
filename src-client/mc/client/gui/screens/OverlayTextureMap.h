#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TexturePtr; }
// clang-format on

class OverlayTextureMap {
public:
    // OverlayTextureMap inner types define
    enum class TextureId : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4aaa99;
    ::ll::UntypedStorage<4, 4>  mUnk91e259;
    ::ll::UntypedStorage<8, 32> mUnkd70734;
    ::ll::UntypedStorage<8, 64> mUnkb15eaa;
    // NOLINTEND

public:
    // prevent constructor by default
    OverlayTextureMap& operator=(OverlayTextureMap const&);
    OverlayTextureMap(OverlayTextureMap const&);
    OverlayTextureMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::TexturePtr _getTextureHandle(::std::string effectTextureName) const;

    MCNAPI ::mce::TexturePtr get(::OverlayTextureMap::TextureId textureId) const;

    MCNAPI ~OverlayTextureMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
