#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
                                     public ::std::enable_shared_from_this<::LevelRendererCamera> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelRendererCameraListeners() /*override*/;

    // vIndex: 1
    virtual void onWillChangeDimension(::Player& player) /*override*/;

    // vIndex: 2
    virtual void onDimensionChanged(::Player& player) /*override*/;

    // vIndex: 21
    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk& lc) /*override*/;

    // vIndex: 26
    virtual void updateLevelCullerType(::LevelCullerType const newLevelCullerType) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onWillChangeDimension(::Player& player);

    MCNAPI void $onDimensionChanged(::Player& player);

    MCNAPI void $onChunkReloaded(::ChunkSource&, ::LevelChunk& lc);

    MCNAPI void $updateLevelCullerType(::LevelCullerType const newLevelCullerType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPlayerListener();

    MCNAPI static void** $vftableForLevelRendererCamera();

    MCNAPI static void** $vftableForLevelListener();
    // NOLINTEND
};
