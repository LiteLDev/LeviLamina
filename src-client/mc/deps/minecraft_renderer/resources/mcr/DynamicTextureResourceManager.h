#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ResourceManager.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct ClientTexture; }
// clang-format on

namespace mcr {

struct DynamicTextureResourceManager
: public ::cg::ResourceManager<::std::shared_ptr<::mce::ClientTexture>, ::mce::DynamicTexture, ::std::map> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DynamicTextureResourceManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mcr
