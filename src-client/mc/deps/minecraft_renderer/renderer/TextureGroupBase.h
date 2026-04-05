#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace mce { class TexturePtr; }
// clang-format on

namespace mce {

class TextureGroupBase : public ::std::enable_shared_from_this<::mce::TextureGroupBase> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureGroupBase();

    virtual ::mce::TexturePtr getTexture(
        ::ResourceLocation const&       resourceLocation,
        bool                            forceReload,
        ::std::optional<uint>           optLoadOrder,
        ::cg::TextureSetLayerType const textureType
    ) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace mce
