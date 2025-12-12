#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class CommonModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommonModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&  moduleBuilder,
        bool                                allowUntagged,
        ::std::vector<::std::string> const& allowedTags
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
