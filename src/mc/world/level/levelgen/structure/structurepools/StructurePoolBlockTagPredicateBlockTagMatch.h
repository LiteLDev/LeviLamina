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
    ::ll::UntypedStorage<8, 8> mUnkc773f8;
    ::ll::UntypedStorage<8, 8> mUnk3b60c0;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockTagPredicateBlockTagMatch& operator=(StructurePoolBlockTagPredicateBlockTagMatch const&);
    StructurePoolBlockTagPredicateBlockTagMatch(StructurePoolBlockTagPredicateBlockTagMatch const&);
    StructurePoolBlockTagPredicateBlockTagMatch();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::Block const&, ::CompoundTag const&) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;

    // vIndex: 0
    virtual ~StructurePoolBlockTagPredicateBlockTagMatch() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
