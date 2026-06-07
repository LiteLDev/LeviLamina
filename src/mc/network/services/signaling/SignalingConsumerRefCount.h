#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SignalingService;
// clang-format on

class SignalingConsumerRefCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7ef818;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingConsumerRefCount& operator=(SignalingConsumerRefCount const&);
    SignalingConsumerRefCount(SignalingConsumerRefCount const&);
    SignalingConsumerRefCount();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SignalingConsumerRefCount(::Bedrock::NotNullNonOwnerPtr<::SignalingService> signalingService);

    MCNAPI ~SignalingConsumerRefCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::SignalingService> signalingService);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
