#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

namespace BaseGameVersioning {
// NOLINTBEGIN
// symbol: ?PATCH_UPGRADE_VERSION@BaseGameVersioning@@3VBaseGameVersion@@B
MCAPI extern class BaseGameVersion const PATCH_UPGRADE_VERSION;

// symbol: ?REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT@BaseGameVersioning@@3VBaseGameVersion@@B
MCAPI extern class BaseGameVersion const REQUIRED_BASE_GAME_VERSION_FOR_OLD_CONTENT;

// symbol:
// ?getAvailableChemistryBehaviorPackGameVersions@BaseGameVersioning@@YAAEBV?$vector@VBaseGameVersion@@V?$allocator@VBaseGameVersion@@@std@@@std@@XZ
MCAPI std::vector<class BaseGameVersion> const& getAvailableChemistryBehaviorPackGameVersions();

// symbol:
// ?getAvailableChemistryResourcePackGameVersions@BaseGameVersioning@@YAAEBV?$vector@VBaseGameVersion@@V?$allocator@VBaseGameVersion@@@std@@@std@@XZ
MCAPI std::vector<class BaseGameVersion> const& getAvailableChemistryResourcePackGameVersions();

// symbol:
// ?getAvailableVanillaBehaviorPackGameVersions@BaseGameVersioning@@YAAEBV?$vector@VBaseGameVersion@@V?$allocator@VBaseGameVersion@@@std@@@std@@XZ
MCAPI std::vector<class BaseGameVersion> const& getAvailableVanillaBehaviorPackGameVersions();

// symbol:
// ?getAvailableVanillaResourcePackGameVersions@BaseGameVersioning@@YAAEBV?$vector@VBaseGameVersion@@V?$allocator@VBaseGameVersion@@@std@@@std@@XZ
MCAPI std::vector<class BaseGameVersion> const& getAvailableVanillaResourcePackGameVersions();

// symbol:
// ?upgradeBaseGameVersionFromWorldTemplate@BaseGameVersioning@@YA_NAEBV?$not_null@V?$NonOwnerPointer@$$CBVWorldTemplateManager@@@Bedrock@@@gsl@@AEAVLevelData@@@Z
MCAPI bool upgradeBaseGameVersionFromWorldTemplate(
    Bedrock::NotNullNonOwnerPtr<class WorldTemplateManager const> const& worldTemplateManager,
    class LevelData&                                                     levelData
);
// NOLINTEND

}; // namespace BaseGameVersioning
