#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class ProfileCategory; }
// clang-format on

namespace Bedrock::Profile {

class ProfileCategoryManager {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Profile::ProfileCategory* findMutable(::std::string_view categoryName);

    MCNAPI static void
    forEachCategoryMutable(::brstd::function_ref<void(::Core::Profile::ProfileCategory&)> const& func);

    MCNAPI static uchar getAnnotationFlagsFromString(::std::string_view str);
    // NOLINTEND
};

} // namespace Bedrock::Profile
