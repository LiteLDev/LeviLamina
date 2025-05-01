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
    // vIndex: 0
    virtual ~IStructurePoolBlockPredicate() = default;

    // vIndex: 2
    virtual bool test(::Block const&, ::Randomize&) const = 0;

    // vIndex: 1
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const = 0;

    // vIndex: 3
    virtual bool finalize(::BlockSource&, ::IRandom&);

    // vIndex: 4
    virtual ::std::string validate() const;

    // vIndex: 5
    virtual ::StructurePoolBlockPredicateType getType() const = 0;

    // vIndex: 6
    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $finalize(::BlockSource&, ::IRandom&);

    MCNAPI ::std::string $validate() const;
    // NOLINTEND
};
