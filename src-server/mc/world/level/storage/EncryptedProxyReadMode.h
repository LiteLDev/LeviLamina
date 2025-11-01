#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EncryptedProxyReadMode : uchar {
    AllowUnencryptedReads = 0,
    RejectUnencryptedReads = 1,
};
