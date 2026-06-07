#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSelectionContainer
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptSelectionContainer> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk59bf9f;
    ::ll::UntypedStorage<8, 8>  mUnk581b01;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionContainer& operator=(ScriptSelectionContainer const&);
    ScriptSelectionContainer(ScriptSelectionContainer const&);
    ScriptSelectionContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptSelectionContainer() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ScriptSelectionContainer(
        ::Editor::ServiceProviderCollection&  services,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ::Scripting::WeakLifetimeScope _getScope() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
