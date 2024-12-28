#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace ResourcePackPaths {
// functions
// NOLINTBEGIN
MCAPI ::Core::PathBuffer<::std::string> getCachedBehaviorPacksPath();

MCAPI ::Core::PathBuffer<::std::string> getCachedResourcePacksPath();

MCAPI ::std::vector<::std::string> const& getExpectedFileExtensions();

MCAPI ::Core::PathBuffer<::std::string> getPremiumBehaviorPackPath();

MCAPI ::Core::PathBuffer<::std::string> getPremiumPackPath();

MCAPI ::Core::PathBuffer<::std::string> getPremiumResourcePackPath();

MCAPI ::Core::PathBuffer<::std::string> getPremiumWorldTemplatePath();

MCAPI ::Core::PathBuffer<::std::string> getSystemServicePackPath();

MCAPI ::Core::PathBuffer<::std::string> getTemporaryPremiumBehaviorPacksPath();

MCAPI ::Core::PathBuffer<::std::string> getTemporaryPremiumResourcePacksPath();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& BEHAVIOR_PACK_PATH();

MCAPI ::std::string const& DEVELOPMENT_BEHAVIOR_PACKS_PATH();

MCAPI ::std::string const& DEVELOPMENT_RESOURCE_PACKS_PATH();

MCAPI ::std::string const& DEVELOPMENT_SKIN_PACKS_PATH();

MCAPI ::Core::PathBuffer<::std::string> const& GLOBAL_RESOURCE_PACKS_FILENAME();

MCAPI ::Core::PathBuffer<::std::string> const& KNOWN_INVALID_PACKS_FILE_NAME();

MCAPI ::Core::PathBuffer<::std::string> const& KNOWN_VALID_PACKS_FILE_NAME();

MCAPI ::std::string const& RESOURCE_PACKS_PATH();

MCAPI ::std::string const& SKIN_PACKS_PATH();

MCAPI ::std::string const& SYSTEM_SERVICE_PACK_PATH();

MCAPI ::std::string const& TREATMENT_PACK_PATH();
// NOLINTEND

} // namespace ResourcePackPaths
