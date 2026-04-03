#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/GameVersionBindings.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/world/level/GameType.h"

namespace OreUI {

struct LocalWorldData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                id;
    ::ll::TypedStorage<8, 32, ::std::string>                name;
    ::ll::TypedStorage<8, 8, int64>                         lastSaved;
    ::ll::TypedStorage<4, 4, ::GameType>                    gameMode;
    ::ll::TypedStorage<8, 32, ::std::string>                fileSize;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>       previewImg;
    ::ll::TypedStorage<1, 1, bool>                          isExperimental;
    ::ll::TypedStorage<1, 1, bool>                          isHardcore;
    ::ll::TypedStorage<1, 1, bool>                          playerHasDied;
    ::ll::TypedStorage<4, 4, int>                           daysPlayed;
    ::ll::TypedStorage<1, 1, bool>                          showDaysPlayed;
    ::ll::TypedStorage<4, 20, ::OreUI::GameVersionBindings> gameVersion;
    ::ll::TypedStorage<4, 20, ::OreUI::GameVersionBindings> templateVersion;
    ::ll::TypedStorage<1, 1, bool>                          isTemplateCompatibleWithAnyVersion;
    ::ll::TypedStorage<1, 1, bool>                          allContentOwned;
    ::ll::TypedStorage<1, 1, bool>                          requiresCloudSync;
    ::ll::TypedStorage<1, 1, bool>                          isMultiplayerEnabled;
    ::ll::TypedStorage<8, 8, uint64>                        sizeOnDiskMB;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>  xblBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool>                          isEditorWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldData& operator=(LocalWorldData const&);
    LocalWorldData(LocalWorldData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldData();

    MCAPI LocalWorldData(::OreUI::LocalWorldData&&);

    MCAPI ~LocalWorldData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::OreUI::LocalWorldData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
