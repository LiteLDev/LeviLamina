#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockTagPredicate.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockTagPredicateAlwaysTrue : public ::IStructurePoolBlockTagPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockTagPredicateAlwaysTrue& operator=(StructurePoolBlockTagPredicateAlwaysTrue const&);
    StructurePoolBlockTagPredicateAlwaysTrue(StructurePoolBlockTagPredicateAlwaysTrue const&);
    StructurePoolBlockTagPredicateAlwaysTrue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::Block const&, ::CompoundTag const&) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;

    // vIndex: 0
    virtual ~StructurePoolBlockTagPredicateAlwaysTrue() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::Block const&, ::CompoundTag const&) const;

    MCAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND
};
