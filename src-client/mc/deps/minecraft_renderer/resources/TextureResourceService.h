#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/interface/Texture.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce {

struct TextureResourceService
: public ::mce::CheckedResourceService<
      ::std::
          variant<::std::monostate, ::mce::Texture, ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> {
};

} // namespace mce
