#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorInfo;
// clang-format on

struct AvailableActorIdentifiersPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorInfo>> mIdentifierList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AvailableActorIdentifiersPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
