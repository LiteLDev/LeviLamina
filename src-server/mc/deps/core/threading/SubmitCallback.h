#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct XTaskQueueObject;
struct XTaskQueueRegistrationToken;
// clang-format on

class SubmitCallback {
public:
    // SubmitCallback inner types declare
    // clang-format off
    struct CallbackRegistration;
    // clang-format on
    
    // SubmitCallback inner types define
    struct CallbackRegistration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka8fc39;
        ::ll::UntypedStorage<8, 8> mUnka911f4;
        ::ll::UntypedStorage<8, 8> mUnk2ff6ae;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        CallbackRegistration& operator=(CallbackRegistration const&);
        CallbackRegistration(CallbackRegistration const&);
        CallbackRegistration();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkba02c8;
    ::ll::UntypedStorage<8, 80> mUnk474fe3;
    ::ll::UntypedStorage<8, 768> mUnk1f5ad9;
    ::ll::UntypedStorage<8, 768> mUnk3f34af;
    ::ll::UntypedStorage<8, 16> mUnk664b47;
    ::ll::UntypedStorage<4, 4> mUnk6361e9;
    ::ll::UntypedStorage<8, 8> mUnk6d7d9a;
    // NOLINTEND

public:
    // prevent constructor by default
    SubmitCallback& operator=(SubmitCallback const&);
    SubmitCallback(SubmitCallback const&);
    SubmitCallback();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Register(void* context, void(*callback) (void*, ::XTaskQueueObject*, ::XTaskQueuePort), ::XTaskQueueRegistrationToken* token);

    MCNAPI void Unregister(::XTaskQueueRegistrationToken token);
    // NOLINTEND

};
