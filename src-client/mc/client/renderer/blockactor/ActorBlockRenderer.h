#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class ChestBlockActor;
class ShulkerBoxBlockActor;
namespace dragon { struct RenderMetadata; }
// clang-format on

class ActorBlockRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChestBlockActor>>      mChest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChestBlockActor>>      mEnderChest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ShulkerBoxBlockActor>> mShulkerBox;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorBlockRenderer();

    MCAPI void render(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::BlockSource&                  renderSource,
        ::Block const*                  block,
        ::BlockPos const&               worldPos,
        float                           brightness
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
