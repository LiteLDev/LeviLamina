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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::Block const& block, ::CompoundTag const& tag) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
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
