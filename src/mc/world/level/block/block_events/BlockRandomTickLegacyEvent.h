#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockRandomTickLegacyEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    ::ll::TypedStorage<8, 8, ::Random&>      mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRandomTickLegacyEvent& operator=(BlockRandomTickLegacyEvent const&);
    BlockRandomTickLegacyEvent(BlockRandomTickLegacyEvent const&);
    BlockRandomTickLegacyEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockRandomTickLegacyEvent(::BlockSource& region, ::BlockPos pos, ::Random& random);

    MCAPI void configureRenderParamsForTrigger(::RenderParams& params) const;

    MCFOLD bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BlockSource& region, ::BlockPos pos, ::Random& random);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockSource const& $getBlockSource() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
