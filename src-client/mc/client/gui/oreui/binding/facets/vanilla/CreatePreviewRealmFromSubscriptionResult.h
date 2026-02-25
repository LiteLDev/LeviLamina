#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class CreatePreviewRealmFromSubscriptionResult : uchar {
    CreatingPreviewRealm            = 0,
    SuccessfullyCreatedPreviewRealm = 1,
    RetrievingCreatedPreviewRealm   = 2,
    FailedToCreatePreviewRealm      = 3,
};

}
