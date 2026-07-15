#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/deps/script_core/script_engine/scripting/Future.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerAdmin { struct ScriptAsyncPlayerJoinBeforeEvent; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptAsyncJoinEventSignal {
public:
    // ScriptAsyncJoinEventSignal inner types declare
    // clang-format off
    struct Subscriber;
    // clang-format on

    // ScriptAsyncJoinEventSignal inner types define
    struct Subscriber {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 72>  mUnkef0809;
        ::ll::UntypedStorage<8, 112> mUnk7e080c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Subscriber& operator=(Subscriber const&);
        Subscriber(Subscriber const&);
        Subscriber();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2799a2;
    ::ll::UntypedStorage<8, 16> mUnk6aa83e;
    ::ll::UntypedStorage<8, 24> mUnka4e0c0;
    ::ll::UntypedStorage<8, 24> mUnkd55acd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncJoinEventSignal& operator=(ScriptAsyncJoinEventSignal const&);
    ScriptAsyncJoinEventSignal(ScriptAsyncJoinEventSignal const&);
    ScriptAsyncJoinEventSignal();
};

} // namespace ScriptModuleServerAdmin
