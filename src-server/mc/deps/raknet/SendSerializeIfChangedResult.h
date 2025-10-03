#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class SendSerializeIfChangedResult : int {
    SentData       = 0,
    DidNotSendData = 1,
    NeverSerialize = 2,
};

}
