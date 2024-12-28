#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class LoginIdentityProvider : int {
    LoginIdentityProviderUnknown              = 0,
    LoginIdentityProviderPlayFab              = 1,
    LoginIdentityProviderCustom               = 2,
    LoginIdentityProviderGameCenter           = 3,
    LoginIdentityProviderGooglePlay           = 4,
    LoginIdentityProviderSteam                = 5,
    LoginIdentityProviderXBoxLive             = 6,
    LoginIdentityProviderPSN                  = 7,
    LoginIdentityProviderKongregate           = 8,
    LoginIdentityProviderFacebook             = 9,
    LoginIdentityProviderIOSDevice            = 10,
    LoginIdentityProviderAndroidDevice        = 11,
    LoginIdentityProviderTwitch               = 12,
    LoginIdentityProviderWindowsHello         = 13,
    LoginIdentityProviderGameServer           = 14,
    LoginIdentityProviderCustomServer         = 15,
    LoginIdentityProviderNintendoSwitch       = 16,
    LoginIdentityProviderFacebookInstantGames = 17,
    LoginIdentityProviderOpenIdConnect        = 18,
};

}
