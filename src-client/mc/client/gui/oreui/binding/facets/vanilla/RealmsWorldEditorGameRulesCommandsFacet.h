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
    MCNAPI explicit RealmsWorldEditorGameRulesCommandsFacet(
        ::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor
    );

    MCNAPI void setCommandBlocksEnabled(bool commandsBlockEnabled);

    MCNAPI void setEntitiesDropLoot(bool entitiesDropLoot);

    MCNAPI void setFireSpreads(bool shouldFireSpread);

    MCNAPI void setFriendlyFireEnabled(bool friendlyFireEnabled);

    MCNAPI void setImmediateRespawn(bool shouldImmediateRespawn);

    MCNAPI void setKeepInventory(bool keepInventory);

    MCNAPI void setMobGriefing(bool mobGriefing);

    MCNAPI void setMobSpawn(bool mobSpawn);

    MCNAPI void setMobsDropLoot(bool shouldMobsDropLoot);

    MCNAPI void setNaturalRegeneration(bool shouldHaveNaturalRegeneration);

    MCNAPI void setPlayerWaypointsMode(int playerWaypointsMode);

    MCNAPI void setRandomTickSpeed(int randomTickSpeed);

    MCNAPI void setRecipesUnlock(bool shouldRecipesUnlock);

    MCNAPI void setRespawnBlocksExplode(bool shouldRespawnBlocksExplode);

    MCNAPI void setRespawnRadius(int respawnRadius);

    MCNAPI void setShowCoordinates(bool shouldshowCoordinates);

    MCNAPI void setShowDaysPlayed(bool shouldShowDaysPlayed);

    MCNAPI void setSleepSkipNight(bool shouldSleepSkipNight);

    MCNAPI void setSleepSkipNightPercent(int sleepSkipNightValue);

    MCNAPI void setTNTExplodes(bool shouldTNTExplode);

    MCNAPI void setTileDrops(bool shouldTilesDrop);

    MCNAPI void setWeatherCycle(bool weatherCycle);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldEditor> realmsWorldEditor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
