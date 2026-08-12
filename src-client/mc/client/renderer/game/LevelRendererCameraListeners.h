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
class IClientInstance;
class Level;
class LevelChunk;
class LevelRenderer;
class Player;
// clang-format on

class LevelRendererCameraListeners : public ::LevelRendererCamera,
                                     public ::LevelListener,
                                     public ::PlayerListener,
                                     public ::LocalPlayer::RegionListener,
                                     public ::std::enable_shared_from_this<::LevelRendererCamera> {
public:
    // prevent constructor by default
    LevelRendererCameraListeners();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRendererCameraListeners() /*override*/ = default;

    virtual void onWillChangeDimension(::Player& player) /*override*/;

    virtual void onDimensionChanged(::Player& player) /*override*/;

    virtual void onRegionDestroyed() /*override*/;

    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk& lc) /*override*/;

    virtual void updateLevelCullerType(::LevelCullerType const newLevelCullerType) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    LevelRendererCameraListeners(::IClientInstance& clientInstance, ::Level& level, ::LevelRenderer& levelRenderer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onWillChangeDimension(::Player& player);

    MCNAPI void $onDimensionChanged(::Player& player);

    MCNAPI void $onRegionDestroyed();

    MCNAPI void $onChunkReloaded(::ChunkSource&, ::LevelChunk& lc);

    MCNAPI void $updateLevelCullerType(::LevelCullerType const newLevelCullerType);
    // NOLINTEND
};
