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
    virtual ~GameEventListener() = default;

    virtual void handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&) = 0;

    virtual ::GameEvents::PositionSource const& getPositionSource() const = 0;

    virtual uint getRange() const = 0;

    virtual ::GameEventListener::DeliveryMode getDeliveryMode() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::GameEventListener::DeliveryMode $getDeliveryMode() const;


    // NOLINTEND
};
