#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class RepositoryPacks;
namespace mce { class UUID; }
// clang-format on

namespace PackDependencyManager {
// functions
// NOLINTBEGIN
MCNAPI bool hasMissingDependencies(::RepositoryPacks const& source, ::PackManifest const& manifest);

MCNAPI bool isNativeModule(::mce::UUID const& uuid);
// NOLINTEND

}
