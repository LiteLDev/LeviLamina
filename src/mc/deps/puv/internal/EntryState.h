#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal::SliceSequence {

enum class EntryState : uchar {
    Closed = 0,
    Open   = 1,
};

}
