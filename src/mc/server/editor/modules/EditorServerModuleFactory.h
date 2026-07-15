#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::API {

class EditorServerModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    EditorServerModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorServerModuleFactory(::Editor::ServiceProviderCollection& managerServices);

    MCNAPI void _addVersions(::Editor::ServiceProviderCollection& managerServices);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& managerServices);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::API
