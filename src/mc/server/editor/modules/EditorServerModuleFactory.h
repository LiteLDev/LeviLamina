#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
// clang-format on

namespace Editor::API {

class EditorServerModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorServerModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorServerModuleFactory(::Editor::ServiceProviderCollection& managerServices);

    MCAPI ::Scripting::ModuleBinding _generateBindings(
        ::Editor::ServiceProviderCollection& managerServices,
        ::Scripting::ModuleBindingBuilder&   builder,
        bool                                 additionalTags,
        ::std::vector<::std::string> const&  allowUntagged
    );

    MCAPI ::Scripting::Result_deprecated<::std::string>
    _loadScriptFromResourcePack(::Editor::ServiceProviderCollection& serviceProviders, ::ResourceLocation const& loc);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ModuleName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& managerServices);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::API
