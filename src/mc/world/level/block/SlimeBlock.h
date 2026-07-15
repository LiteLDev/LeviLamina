#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class EntityContext;
class IConstBlockSource;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class SlimeBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    virtual int getExtraRenderLayers() const /*override*/;

    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCFOLD int $getExtraRenderLayers() const;

    MCFOLD float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
