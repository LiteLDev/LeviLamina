#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class EntityContext;
class Experiments;
struct UpdateEntityAfterFallOnInterface;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class SlimeBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 134
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    // vIndex: 68
    virtual void updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const
        /*override*/;

    // vIndex: 69
    virtual bool isBounceBlock() const /*override*/;

    // vIndex: 140
    virtual int getExtraRenderLayers() const /*override*/;

    // vIndex: 0
    virtual ~SlimeBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCNAPI void $updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    MCNAPI bool $isBounceBlock() const;

    MCNAPI int $getExtraRenderLayers() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
