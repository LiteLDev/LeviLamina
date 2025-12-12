#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal::SliceSequence {

class EmptyEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkded0b0;
    // NOLINTEND

public:
    // prevent constructor by default
    EmptyEntry& operator=(EmptyEntry const&);
    EmptyEntry(EmptyEntry const&);
    EmptyEntry();
};

} // namespace Puv::internal::SliceSequence
