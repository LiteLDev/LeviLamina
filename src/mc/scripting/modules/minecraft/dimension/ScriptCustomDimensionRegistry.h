#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionReloadNewDimensionError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomDimensionRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // ScriptCustomDimensionRegistry inner types declare
    // clang-format off
    struct ScriptCustomDimensionData;
    // clang-format on

    // ScriptCustomDimensionRegistry inner types define
    struct ScriptCustomDimensionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mInitalized;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnReadyForCustomDimensionRegistrationSubscription;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::ScriptModuleMinecraft::ScriptCustomDimensionRegistry::ScriptCustomDimensionData>>
        mDimensions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomDimensionRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _onReload() /*override*/;

    virtual void _onScriptModuleStartupComplete() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCustomDimensionRegistry(::ServerScriptManagerEvents& events, ::DimensionManager& dimensionManager);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomDimensionAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptCustomDimensionInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptCustomDimensionReloadNewDimensionError>
    _dimensionRegistrationValidators(
        ::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::std::pair<
            ::HashedString const,
            ::ScriptModuleMinecraft::ScriptCustomDimensionRegistry::ScriptCustomDimensionData>>>> const& dimIt,
        ::HashedString const&                                                                            name
    ) const;

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomDimensionAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptCustomDimensionInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptCustomDimensionReloadNewDimensionError>
    _dimensionReloadRegistrationValidators(
        ::std::_List_iterator<::std::_List_val<::std::_List_simple_types<::std::pair<
            ::HashedString const,
            ::ScriptModuleMinecraft::ScriptCustomDimensionRegistry::ScriptCustomDimensionData>>>> const& dimIt,
        ::HashedString const&                                                                            name
    ) const;

    MCAPI void _onReadyForCustomDimensionRegistration(::DimensionManager& dimensionManager);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomDimensionAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptCustomDimensionInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptCustomDimensionReloadNewDimensionError>
    tryRegisterCustomDimension(::HashedString const& name, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerScriptManagerEvents& events, ::DimensionManager& dimensionManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_onReload();

    MCAPI void $_onScriptModuleStartupComplete();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
