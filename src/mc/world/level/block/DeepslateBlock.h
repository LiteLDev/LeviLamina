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
    DeepslateBlock& operator=(DeepslateBlock const&);
    DeepslateBlock(DeepslateBlock const&);
    DeepslateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 46
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 129
    virtual ::Block const* tryGetInfested(::Block const& block) const /*override*/;

    // vIndex: 0
    virtual ~DeepslateBlock() /*override*/ = default;
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canBeOriginalSurface() const;

    MCAPI ::Block const* $tryGetInfested(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
