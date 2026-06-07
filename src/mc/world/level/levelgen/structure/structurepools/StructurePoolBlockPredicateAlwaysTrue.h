#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateAlwaysTrue : public ::IStructurePoolBlockPredicate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const&, ::IRandom&) const /*override*/;

    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const /*override*/;

    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolBlockPredicateAlwaysTrue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $test(::Block const&, ::IRandom&) const;

    MCFOLD bool $test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;

    MCFOLD ::StructurePoolBlockPredicateType $getType() const;

    MCFOLD void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
