#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class GameEvent;
struct GameEventContext;
namespace GameEvents { class PositionSource; }
// clang-format on

class GameEventListener {
public:
    // GameEventListener inner types define
    enum class DeliveryMode : int {
        Unspecified = 0,
        ByDistance  = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameEventListener() = default;

    // vIndex: 1
    virtual void handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&) = 0;

    // vIndex: 2
    virtual ::GameEvents::PositionSource const& getPositionSource() const = 0;

    // vIndex: 3
    virtual uint getRange() const = 0;

    // vIndex: 4
    virtual ::GameEventListener::DeliveryMode getDeliveryMode() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::GameEventListener::DeliveryMode $getDeliveryMode() const;
    // NOLINTEND
};
