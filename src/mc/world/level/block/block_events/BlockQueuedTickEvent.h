#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockQueuedTickEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk418fe2;
    ::ll::UntypedStorage<8, 8> mUnkfd915d;
    ::ll::UntypedStorage<1, 1> mUnk578d5e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueuedTickEvent& operator=(BlockQueuedTickEvent const&);
    BlockQueuedTickEvent(BlockQueuedTickEvent const&);
    BlockQueuedTickEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockQueuedTickEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void configureRenderParamsForTrigger(::RenderParams& params) const;

    MCFOLD bool isClientSide() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
