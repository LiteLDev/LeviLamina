#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSource;
struct PackIdVersion;
// clang-format on

namespace PackDependencyManager {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::PackIdVersion>
getMissingDependencyIdentities(::gsl::not_null<::PackSource const*> source, ::PackManifest const& manifest);

MCAPI bool isNativeModule(::std::string const& uuid);
// NOLINTEND

} // namespace PackDependencyManager
