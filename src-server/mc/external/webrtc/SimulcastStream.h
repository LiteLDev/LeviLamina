#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SimulcastStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf9680a;
    ::ll::UntypedStorage<4, 4> mUnk68428f;
    ::ll::UntypedStorage<4, 4> mUnk877b77;
    ::ll::UntypedStorage<1, 1> mUnk3ddde6;
    ::ll::UntypedStorage<4, 4> mUnk1acfcc;
    ::ll::UntypedStorage<4, 4> mUnk1e46e9;
    ::ll::UntypedStorage<4, 4> mUnk3c810a;
    ::ll::UntypedStorage<4, 4> mUnk905b98;
    ::ll::UntypedStorage<1, 1> mUnk59f1e9;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulcastStream& operator=(SimulcastStream const&);
    SimulcastStream(SimulcastStream const&);
    SimulcastStream();

};

}
