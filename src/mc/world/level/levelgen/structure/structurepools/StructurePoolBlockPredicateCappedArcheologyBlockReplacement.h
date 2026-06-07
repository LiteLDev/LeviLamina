#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BrushableBlockActor.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateCappedRandomBlockReplacement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class HashedString;
class IRandom;
// clang-format on

class StructurePoolBlockPredicateCappedArcheologyBlockReplacement
: public ::StructurePoolBlockPredicateCappedRandomBlockReplacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mLootTable;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool finalize(::BlockSource& region, ::IRandom& random) /*override*/;

    virtual ::std::string validate() const /*override*/;

    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    virtual bool operator==(::StructurePoolBlockPredicateCappedArcheologyBlockReplacement const& other) const;

    virtual bool operator!=(::StructurePoolBlockPredicateCappedArcheologyBlockReplacement const& other) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolBlockPredicateCappedArcheologyBlockReplacement(
        ::std::map<::HashedString, ::HashedString> const& blockMappings,
        uint                                              maximumAmount,
        ::BrushableBlockActor::Placement                  placement
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::map<::HashedString, ::HashedString> const& blockMappings,
        uint                                              maximumAmount,
        ::BrushableBlockActor::Placement                  placement
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $finalize(::BlockSource& region, ::IRandom& random);

    MCAPI ::std::string $validate() const;

    MCFOLD ::StructurePoolBlockPredicateType $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
