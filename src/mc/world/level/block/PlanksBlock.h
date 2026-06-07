#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/WoodType.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class PlanksBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::WoodType> mWoodType;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanksBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $buildDescriptionId(::Block const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
