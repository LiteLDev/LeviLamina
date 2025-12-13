#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RewindSimulation {

class ExternalDataSwapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk715c15;
    ::ll::UntypedStorage<8, 8> mUnk3fc000;
    ::ll::UntypedStorage<8, 8> mUnkbe32a4;
    ::ll::UntypedStorage<8, 8> mUnk6bac2b;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataSwapper& operator=(ExternalDataSwapper const&);
    ExternalDataSwapper(ExternalDataSwapper const&);
    ExternalDataSwapper();
};

} // namespace RewindSimulation
