#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class EntityContext;
class IConstBlockSource;
class Material;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class SlimeBlock : public ::BlockType {
public:
    // prevent constructor by default
    SlimeBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const&) const /*override*/;

    virtual int getExtraRenderLayers() const /*override*/;

    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SlimeBlock(::std::string const& nameId, int id, ::Material const& material);

    MCFOLD void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onStandOn(::EntityContext& entity, ::BlockPos const&) const;

    MCFOLD int $getExtraRenderLayers() const;

    MCFOLD float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
