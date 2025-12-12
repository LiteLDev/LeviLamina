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
class Randomize;
namespace Util { class XXHash; }
// clang-format on

class IStructurePoolBlockPredicate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructurePoolBlockPredicate() = default;

    virtual bool test(::Block const&, ::Randomize&) const = 0;

    virtual bool test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const = 0;

    virtual bool finalize(::BlockSource&, ::IRandom&);

    virtual ::std::string validate() const;

    virtual ::StructurePoolBlockPredicateType getType() const = 0;

    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $finalize(::BlockSource&, ::IRandom&);

    MCFOLD ::std::string $validate() const;


    // NOLINTEND
};
