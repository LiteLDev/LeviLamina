#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockRedstoneComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk81a0bd;
    ::ll::UntypedStorage<1, 1> mUnk6f4fc5;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRedstoneComponent& operator=(BlockRedstoneComponent const&);
    BlockRedstoneComponent(BlockRedstoneComponent const&);
    BlockRedstoneComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool const allowsWireToStepDown(::Block const& block);

    MCAPI static bool const isRedstoneConductor(::Block const& block);
    // NOLINTEND
};
