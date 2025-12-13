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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::Block const&, ::CompoundTag const&) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;

    // vIndex: 0
    virtual ~StructurePoolBlockTagPredicateAlwaysTrue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
