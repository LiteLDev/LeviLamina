#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::layout::model {

enum class BadgeType : int {
    Unknown         = 0,
    New             = 1,
    Updated         = 2,
    MarketplacePass = 3,
};

}
