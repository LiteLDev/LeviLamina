#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UDPProxyMessages : int {
    ForwardingSucceeded                      = 0,
    ForwardingNotification                   = 1,
    NoServersOnline                          = 2,
    RecipientGuidNotConnectedToCoordinator   = 3,
    AllServersBusy                           = 4,
    InProgress                               = 5,
    ForwardingRequestFromClientToCoordinator = 6,
    PingServersFromCoordinatorToClient       = 7,
    PingServersReplyFromClientToCoordinator  = 8,
    ForwardingRequestFromCoordinatorToServer = 9,
    ForwardingReplyFromServerToCoordinator   = 10,
    LoginRequestFromServerToCoordinator      = 11,
    LoginSuccessFromCoordinatorToServer      = 12,
    AlreadyLoggedInFromCoordinatorToServer   = 13,
    NoPasswordSetFromCoordinatorToServer     = 14,
    WrongPasswordFromCoordinatorToServer     = 15,
};
