#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ProcessingConfig {
public:
    // ProcessingConfig inner types define
    enum class StreamName : int {
        KInputStream = 0,
        KOutputStream = 1,
        KReverseInputStream = 2,
        KReverseOutputStream = 3,
        KNumStreamNames = 4,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk80df07;
    // NOLINTEND

public:
    // prevent constructor by default
    ProcessingConfig& operator=(ProcessingConfig const&);
    ProcessingConfig(ProcessingConfig const&);
    ProcessingConfig();

};

}
