#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Random;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class SaplingBlock : public ::FoliageBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mQuadrupleSaplingTree;
    // NOLINTEND

public:
    // prevent constructor by default
    SaplingBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 78
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 73
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 75
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~SaplingBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SaplingBlock(
        ::std::string const&           nameId,
        int                            id,
        ::std::optional<::std::string> singleSaplingTree,
        ::std::optional<::std::string> singleSaplingTreeWithBeehive,
        ::std::optional<::std::string> quadrupleSaplingTree
    );

    MCAPI bool _age(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::std::optional<::BlockPos>
    _getQuadrupleSaplingOffset(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool _placeFeature(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        ::std::optional<::BlockPos> quadrupleSaplingOffset,
        ::std::string const&        featureName,
        ::Random&                   random
    ) const;

    MCAPI bool _placeTree(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void _setBlockNoUpdate(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        ::std::optional<::BlockPos> quadrupleSaplingOffset,
        ::Block const&              block
    ) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&           nameId,
        int                            id,
        ::std::optional<::std::string> singleSaplingTree,
        ::std::optional<::std::string> singleSaplingTreeWithBeehive,
        ::std::optional<::std::string> quadrupleSaplingTree
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
