#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class Level;
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
    virtual ~ScriptServerAdminModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptServerAdminModuleFactory(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Level*                                                     level
    );

    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&          moduleBuilder,
        ::std::optional<::Scripting::ContextConfig> contextConfig,
        bool                                        allowUntagged,
        ::std::vector<::std::string> const&         allowedTags,
        ::Level*                                    level
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor(::Scripting::Version version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager, ::Level* level);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
