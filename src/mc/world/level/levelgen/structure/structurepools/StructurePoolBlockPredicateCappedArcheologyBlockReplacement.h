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
    ::ll::UntypedStorage<8, 32> mUnkf26a55;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement&
    operator=(StructurePoolBlockPredicateCappedArcheologyBlockReplacement const&);
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement(StructurePoolBlockPredicateCappedArcheologyBlockReplacement const&);
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool finalize(::BlockSource& region, ::IRandom& random) /*override*/;

    // vIndex: 4
    virtual ::std::string validate() const /*override*/;

    // vIndex: 5
    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    // vIndex: 9
    virtual bool operator==(::StructurePoolBlockPredicateCappedArcheologyBlockReplacement const& other) const;

    // vIndex: 10
    virtual bool operator!=(::StructurePoolBlockPredicateCappedArcheologyBlockReplacement const& other) const;

    // vIndex: 0
    virtual ~StructurePoolBlockPredicateCappedArcheologyBlockReplacement() /*override*/;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $finalize(::BlockSource& region, ::IRandom& random);

    MCAPI ::std::string $validate() const;

    MCAPI ::StructurePoolBlockPredicateType $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
