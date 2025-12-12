#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Randomize;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateLinearPosition : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> mMinChance;
    ::ll::TypedStorage<4, 4, float const> mMaxChance;
    ::ll::TypedStorage<4, 4, int const>   mMinDist;
    ::ll::TypedStorage<4, 4, int const>   mMaxDist;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const&, ::Randomize&) const /*override*/;

    virtual bool test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const /*override*/;

    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;

    virtual ~StructurePoolBlockPredicateLinearPosition() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
