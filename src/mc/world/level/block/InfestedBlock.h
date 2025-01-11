#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
struct ResourceDropsContext;
// clang-format on

class InfestedBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const> mUninfestedBlockId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 130
    virtual ::Block const* tryGetUninfested(::Block const& block) const /*override*/;

    // vIndex: 91
    virtual void spawnAfterBreak(
        ::BlockSource& region,
        ::Block const&,
        ::BlockPos const&             pos,
        ::ResourceDropsContext const& resourceDropsContext
    ) const /*override*/;

    // vIndex: 0
    virtual ~InfestedBlock() /*override*/ = default;
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
    // destructor thunk
    // NOLINTBEGIN

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
