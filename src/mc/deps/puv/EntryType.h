#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal::SliceSequence {

enum class EntryType : int {
    Legacy = 0,
    Cereal = 1,
};

}
