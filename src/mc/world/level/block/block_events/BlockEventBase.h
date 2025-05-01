#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
// clang-format on

namespace BlockEvents {

class BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkd82caf;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEventBase& operator=(BlockEventBase const&);
    BlockEventBase(BlockEventBase const&);
    BlockEventBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventBase() = default;

    // vIndex: 1
    virtual ::Block const& getBlock() const;

    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
