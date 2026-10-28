#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
// clang-format on

namespace ResourcePackPaths {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::Core::PathBuffer<::std::string> getCachedBehaviorPacksPath(::AppPlatform& platform);

MCAPI ::Core::PathBuffer<::std::string> getCachedResourcePacksPath(::AppPlatform& platform);

MCAPI ::Core::PathBuffer<::std::string> getGlobalResourcePacksPath();

MCAPI ::Core::PathBuffer<::std::string> getPremiumBehaviorPackPath(::AppPlatform const& platform);
#endif

MCAPI ::Core::PathBuffer<::std::string> getPremiumPackPath(::AppPlatform const& platform);

#ifdef LL_PLAT_C
MCAPI ::Core::PathBuffer<::std::string> getPremiumPersonaPackDevPath(::AppPlatform const& platform);

MCAPI ::Core::PathBuffer<::std::string> getPremiumPersonaPackPath(::AppPlatform const& platform);

MCAPI ::Core::PathBuffer<::std::string> getPremiumResourcePackPath(::AppPlatform const& platform);

MCAPI ::Core::PathBuffer<::std::string> getPremiumSkinPackPath(::AppPlatform const& platform);
#endif

MCAPI ::Core::PathBuffer<::std::string> getPremiumWorldTemplatePath(::AppPlatform const& platform);

#ifdef LL_PLAT_C
MCAPI ::Core::PathBuffer<::std::string> getTemporaryPremiumBehaviorPacksPath(::AppPlatform& platform);

MCAPI ::Core::PathBuffer<::std::string> getTemporaryPremiumResourcePacksPath(::AppPlatform& platform);

MCAPI ::Core::PathBuffer<::std::string> getZippedPackDownloadPath(::AppPlatform& platform);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& BEHAVIOR_PACK_PATH();

MCAPI ::std::string const& CUSTOM_SKIN_CACHE_PATH();

MCAPI ::std::string const& DEVELOPMENT_BEHAVIOR_PACKS_PATH();

MCAPI ::std::string const& DEVELOPMENT_PERSONA_PACKS_PATH();

MCAPI ::std::string const& DEVELOPMENT_RESOURCE_PACKS_PATH();

MCAPI ::std::string const& DEVELOPMENT_SKIN_PACKS_PATH();

MCAPI ::std::vector<::std::string> const& EXPECTED_EXTENSIONS();

MCAPI ::Core::PathBuffer<::std::string> const& GLOBAL_RESOURCE_PACKS_FILENAME();

MCAPI ::Core::Path const& MANIFEST_PATH();

MCAPI ::Core::Path const& MANIFEST_PATH_OLD();

#ifdef LL_PLAT_C
MCAPI ::std::string const& PERSONA_PACKS_DEV_PATH();

MCAPI ::std::string const& PERSONA_PACKS_PATH();
#endif

MCAPI ::std::string const& RESOURCE_PACKS_PATH();

MCAPI ::std::string const& SKIN_PACKS_PATH();

MCAPI ::std::string const& SYSTEM_BEHAVIOR_PACKS_PATH();

MCAPI ::std::string const& SYSTEM_RESOURCE_PACKS_PATH();

MCAPI ::Core::PathBuffer<::std::string> const& TEXTURES_LIST_PATH();

MCAPI ::std::string const& TREATMENT_PACK_PATH();
// NOLINTEND

} // namespace ResourcePackPaths
