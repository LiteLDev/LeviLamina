#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/UniqueLock.h"

namespace Bedrock::Http {

class LibHttpClientInstance {
public:
    // LibHttpClientInstance inner types declare
    // clang-format off
    class TaskQueueBinding;
    // clang-format on

    // LibHttpClientInstance inner types define
    class TaskQueueBinding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb0d48e;
        // NOLINTEND

    public:
        // prevent constructor by default
        TaskQueueBinding& operator=(TaskQueueBinding const&);
        TaskQueueBinding(TaskQueueBinding const&);
        TaskQueueBinding();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaefb5e;
    ::ll::UntypedStorage<8, 8> mUnk42bd1b;
    ::ll::UntypedStorage<8, 8> mUnkf15df7;
    ::ll::UntypedStorage<8, 8> mUnkce99b3;
    ::ll::UntypedStorage<4, 4> mUnk2786af;
    // NOLINTEND

public:
    // prevent constructor by default
    LibHttpClientInstance& operator=(LibHttpClientInstance const&);
    LibHttpClientInstance(LibHttpClientInstance const&);
    LibHttpClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibHttpClientInstance() = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::mutex& sMutex();
    // NOLINTEND
};

} // namespace Bedrock::Http
