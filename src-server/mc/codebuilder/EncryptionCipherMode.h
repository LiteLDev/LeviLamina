#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

enum class EncryptionCipherMode : uchar {
    Cfb8   = 0,
    Cfb128 = 1,
};

}
