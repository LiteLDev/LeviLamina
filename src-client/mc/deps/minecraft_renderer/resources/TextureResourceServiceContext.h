#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/resources/ResourceServiceRenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class RenderContext; }
// clang-format on

namespace mce {

class TextureResourceServiceContext : public ::mce::ResourceServiceRenderContext {
public:
    // prevent constructor by default
    TextureResourceServiceContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TextureResourceServiceContext(::mce::RenderContext& renderContext);

    MCNAPI ::mce::CheckedResourceService<::dragon::ResolvedTextureResource>* getDragonTextureResourceService();

    MCNAPI ~TextureResourceServiceContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderContext& renderContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
