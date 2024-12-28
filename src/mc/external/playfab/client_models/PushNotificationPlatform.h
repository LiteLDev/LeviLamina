#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class PushNotificationPlatform : int {
    PushNotificationPlatformApplePushNotificationService = 0,
    PushNotificationPlatformGoogleCloudMessaging         = 1,
};

}
