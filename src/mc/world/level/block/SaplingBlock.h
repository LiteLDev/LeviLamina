#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class SaplingBlock : public ::BushBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTree;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSingleSaplingTreeWithBeehive;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mQuadrupleSaplingTree;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
