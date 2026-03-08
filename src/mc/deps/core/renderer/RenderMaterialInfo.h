#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderMaterial; }
// clang-format on

namespace mce {

class RenderMaterialInfo : public ::std::enable_shared_from_this<::mce::RenderMaterialInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                          mHashedName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::RenderMaterial>> mPtr;
    // NOLINTEND
};

} // namespace mce
