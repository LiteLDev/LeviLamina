#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class EntityContext;
class Experiments;
class Material;
struct UpdateEntityAfterFallOnInterface;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class SlimeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SlimeBlock& operator=(SlimeBlock const&);
    SlimeBlock(SlimeBlock const&);
    SlimeBlock();

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

    // vIndex: 145
    virtual int getExtraRenderLayers() const /*override*/;

    // vIndex: 0
    virtual ~SlimeBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SlimeBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI void $updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    MCAPI bool $isBounceBlock() const;

    MCAPI int $getExtraRenderLayers() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
