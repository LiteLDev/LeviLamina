#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackDependencyManager {
// NOLINTBEGIN
MCAPI std::vector<struct PackIdVersion>
      getMissingDependencyIdentities(gsl::not_null<class PackSource const*> source, class PackManifest const& manifest);

MCAPI bool hasMissingDependencies(gsl::not_null<class PackSource const*> source, class PackManifest const& manifest);

MCAPI bool isNativeModule(std::string const& uuid);
// NOLINTEND

}; // namespace PackDependencyManager
