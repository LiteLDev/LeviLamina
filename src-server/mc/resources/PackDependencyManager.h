#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class RepositoryPacks;
struct PackIdVersion;
// clang-format on

namespace PackDependencyManager {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::PackIdVersion>
getMissingDependencyIdentities(::RepositoryPacks const& source, ::PackManifest const& manifest);

MCNAPI bool isNativeModule(::std::string const& uuid);
// NOLINTEND

} // namespace PackDependencyManager
