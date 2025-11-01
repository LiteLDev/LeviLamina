#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class BweNames : int {
    KReceiverNoExtension = 0,
    KReceiverTOffset = 1,
    KReceiverAbsSendTime = 2,
    KSendSideTransportSeqNum = 3,
    KBweNamesMax = 4,
};

}
