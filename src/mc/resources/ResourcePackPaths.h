#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

namespace ResourcePackPaths {
// functions
// NOLINTBEGIN
MCNAPI ::Core::PathBuffer<::std::string> addServiceLocator(::Core::PathBuffer<::std::string> (*fn)(::AppPlatform const&)
);

MCNAPI ::Core::PathBuffer<::std::string> getCachedBehaviorPacksPath(::AppPlatform& platform);

MCNAPI ::Core::PathBuffer<::std::string> getCachedResourcePacksPath(::AppPlatform& platform);

MCNAPI ::Core::PathBuffer<::std::string> getPremiumBehaviorPackPath(::AppPlatform const& platform);

MCNAPI ::Core::PathBuffer<::std::string> getPremiumPackPath();

MCNAPI ::Core::PathBuffer<::std::string> getPremiumPackPath(::AppPlatform const& platform);

MCNAPI ::Core::PathBuffer<::std::string> getPremiumResourcePackPath(::AppPlatform const& platform);

MCNAPI ::Core::PathBuffer<::std::string> getPremiumWorldTemplatePath(::AppPlatform const& platform);

MCNAPI ::Core::PathBuffer<::std::string> getSystemServicePackPath(::AppPlatform const& platform);

MCNAPI ::Core::PathBuffer<::std::string> getTemporaryPremiumBehaviorPacksPath(::AppPlatform& platform);

MCNAPI ::Core::PathBuffer<::std::string> getTemporaryPremiumResourcePacksPath(::AppPlatform& platform);
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
