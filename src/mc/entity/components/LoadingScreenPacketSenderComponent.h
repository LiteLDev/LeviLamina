#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Packet;
// clang-format on

struct LoadingScreenPacketSenderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Packet>>> mPackets;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadingScreenPacketSenderComponent& operator=(LoadingScreenPacketSenderComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoadingScreenPacketSenderComponent(::LoadingScreenPacketSenderComponent const&);

    MCAPI ~LoadingScreenPacketSenderComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LoadingScreenPacketSenderComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
