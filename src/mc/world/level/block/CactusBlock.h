#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
struct BlockGraphicsModeChangeContext;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class CactusBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mGrowCactusFlowers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 115
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 48
    virtual bool isValidAuxValue(int value) const /*override*/;

    // vIndex: 128
    virtual bool dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~CactusBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI ::AABB const&
    $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $isValidAuxValue(int value) const;

    MCNAPI bool $dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
