#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/scripting/modules/minecraft_ui/ddui/CppObservableSubscription.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
namespace ScriptModuleMinecraftServerUI { class ScriptObservableBoolean; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableString; }
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
        ::ll::UntypedStorage<8, 40>  mUnk9c8f6d;
        ::ll::UntypedStorage<8, 16>  mUnk60eb08;
        ::ll::UntypedStorage<8, 128> mUnkbe1e3d;
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
    ::ll::UntypedStorage<8, 64> mUnkde1cf9;
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
