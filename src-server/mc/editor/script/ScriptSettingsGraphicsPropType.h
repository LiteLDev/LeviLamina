#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

enum class ScriptSettingsGraphicsPropType : int {
    GraphicsMode = 0,
    ShowInvisibleBlocks = 1,
    ShowChunkBoundaries = 2,
    ShowCompass = 3,
    NightVision = 4,
    ShowToastNotifications = 5,
    DisableTerrainRendering = 6,
    DisableEntityRendering = 7,
    DisableBlockEntityRendering = 8,
    DisableParticleRendering = 9,
    DisableWeatherRendering = 10,
};

}
