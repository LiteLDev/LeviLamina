#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/WoodType.h"

// auto generated forward declare list
// clang-format off
class Block;
class Experiments;
// clang-format on

class PlanksBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk504336;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanksBlock& operator=(PlanksBlock const&);
    PlanksBlock(PlanksBlock const&);
    PlanksBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 0
    virtual ~PlanksBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlanksBlock(::std::string const& nameId, int id, ::WoodType woodType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<::std::string, 10> const& WOOD_NAMES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::WoodType woodType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $buildDescriptionId(::Block const&) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
