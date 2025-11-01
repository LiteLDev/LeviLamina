#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActiveDirectoryAuthenticationState : uchar {
    Unauthenticated = 0,
    AuthenticationChoicePresentation = 1,
    AuthenticatingDemoWithService = 2,
    AuthenticatedDemoWithService = 3,
    ShowingAuthenticationPage = 4,
    AuthenticatedWithADAL = 5,
    AuthenticatingWithService = 6,
    AuthenticatedWithService = 7,
    AuthenticationPendingPresentation = 8,
    AuthenticationComplete = 9,
    AuthenticationNoEULA = 10,
    AuthenticationOfferPurchase = 11,
    AuthenticationInvalid = 12,
    AuthenticationInvalidClient = 13,
    AuthenticationInvalidAccountType = 14,
    AuthenticationMUTSNetworkError = 15,
    AuthenticationADALException = 16,
    AuthenticationDemoInvalid = 17,
    RefreshingSignInToken = 18,
    RefreshingGraphToken = 19,
    AuthenticationADALCanceled = 20,
    AuthenticatingWithGraphService = 21,
    AuthenticatedWithGraphService = 22,
};
