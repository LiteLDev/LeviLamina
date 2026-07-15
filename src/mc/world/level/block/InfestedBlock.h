#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct ResourceDropsContext;
// clang-format on

class InfestedBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const> mUninfestedBlockId;
    // NOLINTEND

public:
    // prevent constructor by default
    InfestedBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* tryGetUninfested(::Block const& block) const /*override*/;

    virtual void spawnAfterBreak(
        ::BlockSource& region,
        ::Block const&,
        ::BlockPos const&             pos,
        ::ResourceDropsContext const& resourceDropsContext
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InfestedBlock(::std::string const& nameId, int id, ::HashedString const& uninfestedBlockId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void spawnSilverfish(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::HashedString const& uninfestedBlockId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const* $tryGetUninfested(::Block const& block) const;

    MCAPI void $spawnAfterBreak(
        ::BlockSource& region,
        ::Block const&,
        ::BlockPos const&             pos,
        ::ResourceDropsContext const& resourceDropsContext
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
