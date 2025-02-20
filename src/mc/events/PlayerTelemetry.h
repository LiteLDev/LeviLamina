#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
class Vec3;
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class PlayerTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke4d354;
    ::ll::UntypedStorage<8, 64> mUnk7e3e95;
    ::ll::UntypedStorage<8, 64> mUnk2ce966;
    ::ll::UntypedStorage<8, 64> mUnk336934;
    ::ll::UntypedStorage<8, 64> mUnk59eb29;
    ::ll::UntypedStorage<8, 64> mUnk1d8a92;
    ::ll::UntypedStorage<8, 64> mUnk41d737;
    ::ll::UntypedStorage<8, 64> mUnkc5742f;
    ::ll::UntypedStorage<8, 64> mUnka12c39;
    ::ll::UntypedStorage<8, 64> mUnk3523c6;
    ::ll::UntypedStorage<8, 24> mUnk8db829;
    ::ll::UntypedStorage<8, 64> mUnk344341;
    ::ll::UntypedStorage<8, 16> mUnkfa52ad;
    ::ll::UntypedStorage<8, 8>  mUnk7ed562;
    ::ll::UntypedStorage<8, 8>  mUnk2c6cf6;
    ::ll::UntypedStorage<8, 64> mUnkbc1121;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTelemetry& operator=(PlayerTelemetry const&);
    PlayerTelemetry(PlayerTelemetry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ItemUsed(::std::string const& itemName, ::std::string const& useMethod);

    MCAPI PlayerTelemetry();

    MCAPI void PopulateEvent(::Social::Events::Event& event) const;

    MCAPI void SetPosition(::std::string dimension, ::Vec3 pos, double metersTravelled);

    MCAPI void UpdatePlayerLoadout(::Player& player);

    MCAPI ~PlayerTelemetry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
