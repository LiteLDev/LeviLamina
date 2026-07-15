#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
namespace ScriptModuleMinecraftServerUI { class ScriptObservableBoolean; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableString; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableUIRawMessage; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptObservableDataStoreBinding {
public:
    // ScriptObservableDataStoreBinding inner types declare
    // clang-format off
    struct Subscription;
    // clang-format on

    // ScriptObservableDataStoreBinding inner types define
    struct Subscription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk97f907;
        ::ll::UntypedStorage<8, 16> mUnk60eb08;
        ::ll::UntypedStorage<8, 16> mUnkd60d31;
        // NOLINTEND

    public:
        // prevent constructor by default
        Subscription& operator=(Subscription const&);
        Subscription(Subscription const&);
        Subscription();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6ef883;
    ::ll::UntypedStorage<8, 64> mUnkccf317;
    ::ll::UntypedStorage<8, 16> mUnk344dd9;
    ::ll::UntypedStorage<8, 32> mUnkd3cf3a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObservableDataStoreBinding& operator=(ScriptObservableDataStoreBinding const&);
    ScriptObservableDataStoreBinding(ScriptObservableDataStoreBinding const&);
    ScriptObservableDataStoreBinding();
};

} // namespace ScriptModuleMinecraftServerUI
