#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockStepOffEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6ef124;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStepOffEvent& operator=(BlockStepOffEvent const&);
    BlockStepOffEvent(BlockStepOffEvent const&);
    BlockStepOffEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockStepOffEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void configureRenderParamsForTrigger(::RenderParams& params) const;

    MCAPI ::Actor const& getEntity() const;

    MCAPI bool isClientSide() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
