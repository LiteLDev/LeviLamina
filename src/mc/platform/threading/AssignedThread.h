#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 8> mUnkfa216a;
        ::ll::UntypedStorage<4, 4> mUnk5c0c7e;
        // NOLINTEND

    public:
        // prevent constructor by default
        ThreadIdInitializer& operator=(ThreadIdInitializer const&);
        ThreadIdInitializer(ThreadIdInitializer const&);
        ThreadIdInitializer();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1d2bd8;
    ::ll::UntypedStorage<8, 64> mUnke4e11d;
    ::ll::UntypedStorage<8, 8>  mUnkd5581a;
    // NOLINTEND

public:
    // prevent constructor by default
    AssignedThread& operator=(AssignedThread const&);
    AssignedThread(AssignedThread const&);
    AssignedThread();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void assign(::std::thread::id const& thread);

    MCAPI bool isOnThread() const;

    MCAPI bool operator==(::std::thread::id const& id) const;
    // NOLINTEND
};

} // namespace Bedrock::Threading
