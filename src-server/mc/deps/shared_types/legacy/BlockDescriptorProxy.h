#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4f9562;
    ::ll::UntypedStorage<8, 16> mUnkbaf084;
    ::ll::UntypedStorage<8, 32> mUnka33556;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&);
    BlockDescriptorProxy(BlockDescriptorProxy const&);
    BlockDescriptorProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockDescriptorProxy();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
