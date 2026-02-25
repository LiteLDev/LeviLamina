#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsWorldEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldEditorGameRulesCommandsFacet
: public ::OreUI::FacetBase<::OreUI::RealmsWorldEditorGameRulesCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldEditorGameRulesCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setFireSpreads(bool shouldFireSpread);

    MCAPI void setImmediateRespawn(bool shouldImmediateRespawn);

    MCAPI void setMobsDropLoot(bool shouldMobsDropLoot);

    MCAPI void setNaturalRegeneration(bool shouldHaveNaturalRegeneration);

    MCAPI void setRecipesUnlock(bool shouldRecipesUnlock);

    MCAPI void setRespawnBlocksExplode(bool shouldRespawnBlocksExplode);

    MCAPI void setRespawnRadius(int respawnRadius);

    MCAPI void setShowCoordinates(bool shouldshowCoordinates);

    MCAPI void setShowDaysPlayed(bool shouldShowDaysPlayed);

    MCAPI void setSleepSkipNight(bool shouldSleepSkipNight);

    MCAPI void setSleepSkipNightPercent(int sleepSkipNightValue);

    MCAPI void setTNTExplodes(bool shouldTNTExplode);

    MCAPI void setTileDrops(bool shouldTilesDrop);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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
