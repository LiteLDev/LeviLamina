#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarInfestedBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class Material;
// clang-format on

class InfestedDeepslateBlock : public ::RotatedPillarInfestedBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 130
    virtual ::Block const* tryGetUninfested(::Block const& block) const /*override*/;

    // vIndex: 0
    virtual ~InfestedDeepslateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InfestedDeepslateBlock(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $tryGetUninfested(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
