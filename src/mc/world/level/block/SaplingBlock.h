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
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;
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

    // NOLINTEND
};
