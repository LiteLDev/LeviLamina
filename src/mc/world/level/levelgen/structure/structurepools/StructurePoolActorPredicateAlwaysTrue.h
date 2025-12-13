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
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::std::string const&) const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;

    virtual ~StructurePoolActorPredicateAlwaysTrue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
