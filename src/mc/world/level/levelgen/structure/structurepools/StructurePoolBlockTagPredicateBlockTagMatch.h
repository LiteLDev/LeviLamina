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

class StructurePoolBlockTagPredicateBlockTagMatch : public ::IStructurePoolBlockTagPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>       mBlock;
    ::ll::TypedStorage<8, 8, ::CompoundTag const&> mTag;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockTagPredicateBlockTagMatch& operator=(StructurePoolBlockTagPredicateBlockTagMatch const&);
    StructurePoolBlockTagPredicateBlockTagMatch(StructurePoolBlockTagPredicateBlockTagMatch const&);
    StructurePoolBlockTagPredicateBlockTagMatch();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const&, ::CompoundTag const&) const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;

    virtual ~StructurePoolBlockTagPredicateBlockTagMatch() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
