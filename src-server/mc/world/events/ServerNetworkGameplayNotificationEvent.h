#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
// clang-format on

struct ServerNetworkGameplayNotificationEvent : public ::EventVariantImpl<::ChatEvent const, ::IncomingPacketEvent const, ::OutgoingPacketEvent const> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ServerNetworkGameplayNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
