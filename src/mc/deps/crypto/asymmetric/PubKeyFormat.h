#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class PubKeyFormat : int {
    X509Pubkey      = 0,
    MsPublickeyblob = 1,
};

}
