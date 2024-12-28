#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class SourceType : int {
    SourceTypeAdmin      = 0,
    SourceTypeBackEnd    = 1,
    SourceTypeGameClient = 2,
    SourceTypeGameServer = 3,
    SourceTypePartner    = 4,
    SourceTypeCustom     = 5,
    SourceTypeAPI        = 6,
};

}
