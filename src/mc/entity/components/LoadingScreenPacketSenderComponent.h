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
    // member functions
    // NOLINTBEGIN
    MCAPI LoadingScreenPacketSenderComponent();

    MCAPI ~LoadingScreenPacketSenderComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
