#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class VibrationListenerConfig {
public:
    // prevent constructor by default
    VibrationListenerConfig& operator=(VibrationListenerConfig const&);
    VibrationListenerConfig(VibrationListenerConfig const&);
    VibrationListenerConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VibrationListenerConfig() = default;

    // vIndex: 1
    virtual void
    onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*) = 0;

    // vIndex: 2
    virtual bool isValidVibration(::GameEvent const& gameEvent);

    // vIndex: 3
    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&) = 0;

    // vIndex: 4
    virtual void onSerializableDataChanged(::BlockSource&);

    // vIndex: 5
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidVibration(::GameEvent const& gameEvent);

    MCAPI void $onSerializableDataChanged(::BlockSource&);

    MCAPI bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;
    // NOLINTEND
};
