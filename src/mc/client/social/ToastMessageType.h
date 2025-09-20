#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ToastMessageType : int {
    Unknown                     = 0,
    Achievement                 = 1,
    Invite                      = 2,
    RawInvite                   = 3,
    FocusLost                   = 4,
    ImportResourcePack          = 5,
    ImportExportWorld           = 6,
    GlobalResourceCrashRecovery = 7,
    Message                     = 8,
    PlayerMessaging             = 9,
    DialogMessage               = 10,
    ChatScreenNotification      = 11,
    Debug                       = 12,
    RecipeUnlocked              = 13,
    Snackbar                    = 14,
    ProgressPopup               = 15,
    ReturnToGame                = 16,
};
