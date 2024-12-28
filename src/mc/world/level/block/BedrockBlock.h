#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

class BedrockBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BedrockBlock& operator=(BedrockBlock const&);
    BedrockBlock(BedrockBlock const&);
    BedrockBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 46
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 0
    virtual ~BedrockBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BedrockBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canBeOriginalSurface() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
