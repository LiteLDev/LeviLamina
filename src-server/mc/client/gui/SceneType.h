#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

enum class SceneType : uint {
    // bitfield representation
    None = 0,
    DefaultScene = 1u << 0,
    StoreScene = 1u << 1,
    StoreHomeScene = 1u << 2,
    StoreInventoryScene = 1u << 3,
    StartMenuScene = 1u << 4,
    SettingsScene = 1u << 5,
    LibraryItemScene = 1u << 6,
    LibraryModalScene = 1u << 7,
    ProfileScene = 1u << 8,
    DressingRoomScene = 1u << 9,
    AchievementScene = 1u << 10,
    NoInterrupt = 1u << 11,
    OreUi = 1u << 12,
    PlayScreen = 1u << 13,
    ProgressScene = 1u << 14,
    PauseScene = 1u << 15,
    RealmsPlusPdpScene = 1u << 16,
    MultiControllerInputScene = 1u << 17,
    HudScene = 1u << 18,
    MarketplacePlusPdpScene = 1u << 19,
    DisplayErrorLogScene = 1u << 20,
};

}
