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
    LoadingScreenPacketSenderComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoadingScreenPacketSenderComponent(::LoadingScreenPacketSenderComponent const&);

    MCNAPI ~LoadingScreenPacketSenderComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LoadingScreenPacketSenderComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
