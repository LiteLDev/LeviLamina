#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MovementAttributeEntry;
// clang-format on

namespace MovementAttributesComponentExt {
// functions
// NOLINTBEGIN
MCAPI ::brstd::flat_map<::HashedString, ::MovementAttributeEntry, ::std::less<::HashedString>, ::std::vector<::HashedString>, ::std::vector<::MovementAttributeEntry>> const& getAttributeMap();
// NOLINTEND

}
