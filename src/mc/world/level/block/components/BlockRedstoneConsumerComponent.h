#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class BlockRedstoneConsumerComponent : public ::IBlockComponent {
public:
    // BlockRedstoneConsumerComponent inner types define
    using OnSetupRedstoneComponentCallback = void(::BlockSource&, ::BlockPos const&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar>                                       mMinPower;
    ::ll::TypedStorage<1, 1, bool>                                        mPropagatePower;
    ::ll::TypedStorage<1, 1, bool>                                        mConsumePowerAnyDirection;
    ::ll::TypedStorage<1, 1, bool>                                        mAcceptSameDirection;
    ::ll::TypedStorage<1, 1, bool>                                        mAcceptHalfPulse;
    ::ll::TypedStorage<1, 1, bool>                                        mIgnoreFirstUpdate;
    ::ll::TypedStorage<8, 8, void (*)(::BlockSource&, ::BlockPos const&)> mOnSetupRedstoneComponentCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onEvent(::BlockEvents::BlockPlaceEvent const& ev) const;

    MCFOLD void setOnSetupRedstoneComponentCallback(void (*callback)(::BlockSource&, ::BlockPos const&));
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setupRedstoneComponent(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND
};
