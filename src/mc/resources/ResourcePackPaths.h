#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace ResourcePackPaths {
// NOLINTBEGIN
MCAPI class Core::PathBuffer<std::string> getCachedBehaviorPacksPath();

MCAPI class Core::PathBuffer<std::string> getCachedResourcePacksPath();

MCAPI class Core::PathBuffer<std::string> getPremiumPackPath();

MCAPI class Core::PathBuffer<std::string> getPremiumWorldTemplatePath();

MCAPI class Core::PathBuffer<std::string> getTemporaryPremiumBehaviorPacksPath();

MCAPI class Core::PathBuffer<std::string> getTemporaryPremiumResourcePacksPath();
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI std::string const& BEHAVIOR_PACK_PATH();

MCAPI std::string const& DEVELOPMENT_BEHAVIOR_PACKS_PATH();

MCAPI std::string const& DEVELOPMENT_RESOURCE_PACKS_PATH();

MCAPI std::string const& DEVELOPMENT_SKIN_PACKS_PATH();

MCAPI class Core::PathBuffer<std::string> const& GLOBAL_RESOURCE_PACKS_FILENAME();

MCAPI class Core::PathBuffer<std::string> const& KNOWN_INVALID_PACKS_FILE_NAME();

MCAPI class Core::PathBuffer<std::string> const& KNOWN_VALID_PACKS_FILE_NAME();

MCAPI std::string const& RESOURCE_PACKS_PATH();

MCAPI std::string const& SKIN_PACKS_PATH();

MCAPI std::string const& SYSTEM_SERVICE_PACK_PATH();

MCAPI std::string const& TREATMENT_PACK_PATH();
// NOLINTEND

}; // namespace ResourcePackPaths
