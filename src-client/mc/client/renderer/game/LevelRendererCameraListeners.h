#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/player/LocalPlayer.h"
#include "mc/client/renderer/game/LevelRendererCamera.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"
#include "mc/world/actor/player/PlayerListener.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
class Player;
// clang-format on

class LevelRendererCameraListeners : public ::LevelRendererCamera,
                                     public ::LevelListener,
                                     public ::PlayerListener,
                                     public ::LocalPlayer::RegionListener,
                                     public ::std::enable_shared_from_this<::LevelRendererCamera> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRendererCameraListeners() /*override*/ = default;

    virtual void onWillChangeDimension(::Player&) /*override*/;

    virtual void onDimensionChanged(::Player&) /*override*/;

    virtual void onRegionDestroyed() /*override*/;

    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&) /*override*/;

    virtual void updateLevelCullerType(::LevelCullerType const newLevelCullerType) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
