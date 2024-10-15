#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockTagPredicate.h"

class StructurePoolBlockTagPredicateBlockTagStringMatches : public ::IStructurePoolBlockTagPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockTagPredicateBlockTagStringMatches&
    operator=(StructurePoolBlockTagPredicateBlockTagStringMatches const&);
    StructurePoolBlockTagPredicateBlockTagStringMatches(StructurePoolBlockTagPredicateBlockTagStringMatches const&);
    StructurePoolBlockTagPredicateBlockTagStringMatches();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches() = default;

    // vIndex: 1
    virtual bool test(class Block const& block, class CompoundTag const& tag) const;

    MCAPI
    StructurePoolBlockTagPredicateBlockTagStringMatches(class Block const& block, std::string tag, std::string value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Block const& block, std::string tag, std::string value);

    MCAPI bool test$(class Block const& block, class CompoundTag const& tag) const;

    // NOLINTEND
};
