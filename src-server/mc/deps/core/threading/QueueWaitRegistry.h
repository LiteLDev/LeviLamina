#pragma once

#include "mc/_HeaderOutputPredefine.h"

class QueueWaitRegistry {
public:
    // QueueWaitRegistry inner types declare
    // clang-format off
    struct WaitRegistration;
    // clang-format on
    
    // QueueWaitRegistry inner types define
    struct WaitRegistration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk7bc9a6;
        ::ll::UntypedStorage<8, 8> mUnkc437a6;
        ::ll::UntypedStorage<4, 4> mUnk2ade96;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        WaitRegistration& operator=(WaitRegistration const&);
        WaitRegistration(WaitRegistration const&);
        WaitRegistration();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd5edd3;
    ::ll::UntypedStorage<8, 2888> mUnka526c1;
    ::ll::UntypedStorage<8, 80> mUnk8f3a6b;
    // NOLINTEND

public:
    // prevent constructor by default
    QueueWaitRegistry& operator=(QueueWaitRegistry const&);
    QueueWaitRegistry(QueueWaitRegistry const&);
    QueueWaitRegistry();

};
