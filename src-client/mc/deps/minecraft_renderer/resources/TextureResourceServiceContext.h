#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/resources/ResourceServiceRenderContext.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce {

class TextureResourceServiceContext : public ::mce::ResourceServiceRenderContext {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::CheckedResourceService<::dragon::ResolvedTextureResource>* getDragonTextureResourceService();
    // NOLINTEND
};

} // namespace mce
