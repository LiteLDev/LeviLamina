#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class IStructurePoolBlockPredicate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructurePoolBlockPredicate() = default;

    virtual bool test(::Block const& block, ::IRandom& random) const = 0;

    virtual bool test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::IRandom& random) const = 0;

    virtual bool finalize(::BlockSource& region, ::IRandom& random);

    virtual ::std::string validate() const;

    virtual ::StructurePoolBlockPredicateType getType() const = 0;

    virtual void appendMetadataKey(::Util::XXHash& hash) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $finalize(::BlockSource& region, ::IRandom& random);

    MCFOLD ::std::string $validate() const;


    // NOLINTEND
};
