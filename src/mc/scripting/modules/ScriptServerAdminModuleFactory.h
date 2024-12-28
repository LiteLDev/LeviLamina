#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptServerAdminModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk81b286;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerAdminModuleFactory& operator=(ScriptServerAdminModuleFactory const&);
    ScriptServerAdminModuleFactory(ScriptServerAdminModuleFactory const&);
    ScriptServerAdminModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptServerAdminModuleFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptServerAdminModuleFactory(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager
    );

    MCAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&          moduleBuilder,
        ::std::optional<::Scripting::ContextConfig> contextConfig,
        bool                                        allowUntagged,
        ::std::vector<::std::string> const&         allowedTags
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getModuleUUIDAsString();

    MCAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor(::Scripting::Version version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ModuleName();

    MCAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
