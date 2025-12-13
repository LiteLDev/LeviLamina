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
    // virtual functions
    // NOLINTBEGIN
    virtual ~VibrationListenerConfig() = default;

    virtual void
    onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*) = 0;

    virtual bool isValidVibration(::GameEvent const& gameEvent);

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&) = 0;

    virtual void onSerializableDataChanged(::BlockSource&);

    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValidVibration(::GameEvent const& gameEvent);

    MCNAPI void $onSerializableDataChanged(::BlockSource&);

    MCNAPI bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;


    // NOLINTEND
};
