#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50::BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk22b0fa;
    ::ll::UntypedStorage<8, 16> mUnk7bd66e;
    ::ll::UntypedStorage<8, 32> mUnk599968;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&);
    BlockDescriptorProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDescriptorProxy(::SharedTypes::v1_20_50::BlockDescriptorSerializer::BlockDescriptorProxy const&);

    MCAPI ~BlockDescriptorProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_20_50::BlockDescriptorSerializer::BlockDescriptorProxy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50::BlockDescriptorSerializer
