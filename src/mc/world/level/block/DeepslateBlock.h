#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class DeepslateBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    DeepslateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBeOriginalSurface(bool) const /*override*/;

    virtual ::Block const* tryGetInfested(::Block const& block) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeepslateBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canBeOriginalSurface(bool) const;

    MCAPI ::Block const* $tryGetInfested(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
