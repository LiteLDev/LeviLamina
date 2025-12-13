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

class StructurePoolBlockTagPredicateBlockTagStringMatches : public ::IStructurePoolBlockTagPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>       mBlock;
    ::ll::TypedStorage<8, 32, ::std::string const> mTagKey;
    ::ll::TypedStorage<8, 32, ::std::string const> mTagValue;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockTagPredicateBlockTagStringMatches&
    operator=(StructurePoolBlockTagPredicateBlockTagStringMatches const&);
    StructurePoolBlockTagPredicateBlockTagStringMatches(StructurePoolBlockTagPredicateBlockTagStringMatches const&);
    StructurePoolBlockTagPredicateBlockTagStringMatches();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const& block, ::CompoundTag const& tag) const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    StructurePoolBlockTagPredicateBlockTagStringMatches(::Block const& block, ::std::string tag, ::std::string value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Block const& block, ::std::string tag, ::std::string value);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::Block const& block, ::CompoundTag const& tag) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
