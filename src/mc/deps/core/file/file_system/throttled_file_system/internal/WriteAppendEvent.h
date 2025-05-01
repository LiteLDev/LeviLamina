#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Internal {

class WriteAppendEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc8beac;
    ::ll::UntypedStorage<8, 16> mUnk638fc6;
    ::ll::UntypedStorage<8, 8>  mUnkcae018;
    ::ll::UntypedStorage<8, 64> mUnkce2d98;
    // NOLINTEND

public:
    // prevent constructor by default
    WriteAppendEvent& operator=(WriteAppendEvent const&);
    WriteAppendEvent(WriteAppendEvent const&);
    WriteAppendEvent();
};

} // namespace Core::Internal
