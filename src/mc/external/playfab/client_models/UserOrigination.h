#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class UserOrigination : int {
    UserOriginationOrganic                = 0,
    UserOriginationSteam                  = 1,
    UserOriginationGoogle                 = 2,
    UserOriginationAmazon                 = 3,
    UserOriginationFacebook               = 4,
    UserOriginationKongregate             = 5,
    UserOriginationGamersFirst            = 6,
    UserOriginationUnknown                = 7,
    UserOriginationIOS                    = 8,
    UserOriginationLoadTest               = 9,
    UserOriginationAndroid                = 10,
    UserOriginationPSN                    = 11,
    UserOriginationGameCenter             = 12,
    UserOriginationCustomId               = 13,
    UserOriginationXboxLive               = 14,
    UserOriginationParse                  = 15,
    UserOriginationTwitch                 = 16,
    UserOriginationWindowsHello           = 17,
    UserOriginationServerCustomId         = 18,
    UserOriginationNintendoSwitchDeviceId = 19,
    UserOriginationFacebookInstantGamesId = 20,
    UserOriginationOpenIdConnect          = 21,
};

}
