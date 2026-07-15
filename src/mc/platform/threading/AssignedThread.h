#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/AssignedThreadDefaultId.h"

namespace Bedrock::Threading {

class AssignedThread {
public:
    // AssignedThread inner types declare
    // clang-format off
    struct ThreadIdInitializer;
    // clang-format on

    // AssignedThread inner types define
    struct ThreadIdInitializer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Bedrock::Threading::AssignedThread*>         mParent;
        ::ll::TypedStorage<4, 4, ::Bedrock::Threading::AssignedThreadDefaultId> mDefaultId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::thread::id>                          mThreadId;
    ::ll::TypedStorage<8, 64, ::Bedrock::Threading::AssignedThread* [8]> mChildren;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                      mChildCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void assign(::std::thread::id const& thread);
    // NOLINTEND
};

} // namespace Bedrock::Threading
