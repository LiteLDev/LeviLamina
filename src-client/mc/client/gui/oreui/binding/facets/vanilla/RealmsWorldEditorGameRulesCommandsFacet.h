#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorGameRulesCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldEditorGameRulesCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditorGameRulesCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorGameRulesCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWorldEditorGameRulesCommandsFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor
    );

    MCAPI void setCommandBlocksEnabled(bool commandsBlockEnabled);

    MCAPI void setEntitiesDropLoot(bool entitiesDropLoot);

    MCAPI void setFireSpreads(bool shouldFireSpread);

    MCAPI void setFriendlyFireEnabled(bool friendlyFireEnabled);

    MCAPI void setImmediateRespawn(bool shouldImmediateRespawn);

    MCAPI void setKeepInventory(bool keepInventory);

    MCAPI void setMobGriefing(bool mobGriefing);

    MCAPI void setMobSpawn(bool mobSpawn);

    MCAPI void setMobsDropLoot(bool shouldMobsDropLoot);

    MCAPI void setNaturalRegeneration(bool shouldHaveNaturalRegeneration);

    MCAPI void setPlayerWaypointsMode(int playerWaypointsMode);

    MCAPI void setRandomTickSpeed(int randomTickSpeed);

    MCAPI void setRecipesUnlock(bool shouldRecipesUnlock);

    MCAPI void setRespawnBlocksExplode(bool shouldRespawnBlocksExplode);

    MCAPI void setRespawnRadius(int respawnRadius);

    MCAPI void setShowCoordinates(bool shouldshowCoordinates);

    MCAPI void setShowDaysPlayed(bool shouldShowDaysPlayed);

    MCAPI void setSleepSkipNight(bool shouldSleepSkipNight);

    MCAPI void setSleepSkipNightPercent(int sleepSkipNightValue);

    MCAPI void setTNTExplodes(bool shouldTNTExplode);

    MCAPI void setTileDrops(bool shouldTilesDrop);

    MCAPI void setWeatherCycle(bool weatherCycle);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
