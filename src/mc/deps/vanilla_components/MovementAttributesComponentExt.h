#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct AttributeData;
struct MovementAttributeEntry;
struct MovementAttributesComponent;
struct SlimMovementAttributeEntry;
// clang-format on

namespace MovementAttributesComponentExt {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::MovementAttributesComponent create(::std::vector<::AttributeData> const& attributeData);
#endif

MCAPI ::brstd::flat_map<
    ::HashedString,
    ::MovementAttributeEntry,
    ::std::less<::HashedString>,
    ::std::vector<::HashedString>,
    ::std::vector<::MovementAttributeEntry>> const& getAttributeMap();

MCAPI ::gsl::span<::SlimMovementAttributeEntry const> getSlimAttributesFromMap();
// NOLINTEND

} // namespace MovementAttributesComponentExt
