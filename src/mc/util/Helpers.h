#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
struct ComponentItemDataAll_Latest;
namespace SharedTypes::v1_21_90 { struct KineticEffectConditions; }
// clang-format on

namespace Helpers {
// functions
// NOLINTBEGIN
MCNAPI ::HashedString const& getUseDurationComponentForVersion(::SemVersion const& version);

MCNAPI void validateKineticEffectConditions(
    ::Puv::LoadResult<::ComponentItemDataAll_Latest>&       loadResult,
    ::SharedTypes::v1_21_90::KineticEffectConditions const& kineticEffectConditions,
    ::std::string_view                                      fieldName
);
// NOLINTEND

} // namespace Helpers
