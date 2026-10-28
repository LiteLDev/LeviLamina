#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Detail {
// functions
// NOLINTBEGIN
MCNAPI void defaultDataStoreDelete(::Core::Path const& path);

MCNAPI ::std::optional<::std::string> defaultDataStoreLoad(::Core::Path const& path);

MCNAPI void defaultDataStoreSave(::Core::Path const& path, ::std::string_view data);
// NOLINTEND

} // namespace Bedrock::Detail
