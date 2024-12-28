#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolActorPredicate.h"

// auto generated forward declare list
// clang-format off
namespace Util { class XXHash; }
// clang-format on

class StructurePoolActorPredicateAlwaysTrue : public ::IStructurePoolActorPredicate {
public:
    // prevent constructor by default
    StructurePoolActorPredicateAlwaysTrue& operator=(StructurePoolActorPredicateAlwaysTrue const&);
    StructurePoolActorPredicateAlwaysTrue(StructurePoolActorPredicateAlwaysTrue const&);
    StructurePoolActorPredicateAlwaysTrue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::std::string const&) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;

    // vIndex: 0
    virtual ~StructurePoolActorPredicateAlwaysTrue() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::std::string const&) const;

    MCAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND
};
