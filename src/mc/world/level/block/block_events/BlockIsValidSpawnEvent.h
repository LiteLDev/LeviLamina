#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
// clang-format on

namespace BlockEvents {

class BlockIsValidSpawnEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnka4f3ee;
    ::ll::UntypedStorage<8, 8> mUnkb56cbe;
    ::ll::UntypedStorage<8, 8> mUnk2a207f;
    ::ll::UntypedStorage<8, 8> mUnkb779fd;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockIsValidSpawnEvent& operator=(BlockIsValidSpawnEvent const&);
    BlockIsValidSpawnEvent(BlockIsValidSpawnEvent const&);
    BlockIsValidSpawnEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Block const& getBlock() const /*override*/;

    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockIsValidSpawnEvent() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BlockEvents
