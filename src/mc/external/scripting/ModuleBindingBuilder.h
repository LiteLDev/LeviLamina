#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct TaggedBinding; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class ModuleBindingBuilder {
public:
    // prevent constructor by default
    ModuleBindingBuilder& operator=(ModuleBindingBuilder const&);
    ModuleBindingBuilder(ModuleBindingBuilder const&);
    ModuleBindingBuilder();

public:
    // NOLINTBEGIN
    MCAPI ModuleBindingBuilder(
        struct Scripting::UUID const&    id,
        std::string const&               name,
        struct Scripting::Version const& version
    );

    MCAPI struct Scripting::ModuleBinding build(bool, std::vector<std::string> const&);

    MCAPI class Scripting::ModuleBindingBuilder& classBinding(struct Scripting::ClassBinding&&);

    MCAPI class Scripting::ModuleBindingBuilder&
    dependency(std::vector<struct Scripting::ModuleDescriptor> const& modules);

    MCAPI class Scripting::ModuleBindingBuilder& enumBinding(struct Scripting::EnumBinding&&);

    MCAPI class Scripting::ModuleBindingBuilder& errorBinding(struct Scripting::ErrorBinding&&);

    MCAPI struct Scripting::ModuleDescriptor getModuleDescriptor() const;

    MCAPI class Scripting::ModuleBindingBuilder& interfaceBinding(struct Scripting::InterfaceBinding&&);

    MCAPI ~ModuleBindingBuilder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _allowed(std::vector<class Scripting::Release> const&, bool, std::vector<std::string> const&) const;

    MCAPI std::vector<struct Scripting::ClassBinding>
    _filterClassBindings(std::vector<struct Scripting::ClassBinding> const&, bool, std::vector<std::string> const&)
        const;

    MCAPI std::vector<struct Scripting::EnumBinding>
    _filterEnumBindings(std::vector<struct Scripting::EnumBinding> const&, bool, std::vector<std::string> const&) const;

    MCAPI std::vector<struct Scripting::EnumBinding::EnumValue>
    _filterEnumValueMap(std::vector<struct Scripting::ConstantFactory> const&, std::vector<struct Scripting::EnumBinding::EnumValue> const&)
        const;

    MCAPI std::vector<struct Scripting::ErrorBinding>
    _filterErrorBindings(std::vector<struct Scripting::ErrorBinding> const&, bool, std::vector<std::string> const&)
        const;

    MCAPI std::vector<struct Scripting::InterfaceBinding>
    _filterInterfaceBindings(std::vector<struct Scripting::InterfaceBinding> const&, bool, std::vector<std::string> const&)
        const;

    MCAPI bool _isClassTypeInList(entt::meta_type type, std::vector<struct Scripting::ClassBinding> const&) const;

    MCAPI std::vector<struct Scripting::ClassBinding>
          _orderClassBindingsByDependency(std::vector<struct Scripting::ClassBinding>&) const;

    MCAPI static bool _assertClassMemberSymbolDoesntExist(
        struct Scripting::ClassBinding const&,
        std::string const&                     name,
        struct Scripting::TaggedBinding const& binding
    );

    MCAPI static bool _assertEnumMemberSymbolDoesntExist(
        struct Scripting::EnumBinding const&,
        std::string const&                     name,
        struct Scripting::TaggedBinding const& binding
    );

    MCAPI static bool _assertModuleMemberSymbolDoesntExist(
        struct Scripting::ModuleBinding const&,
        std::string const&                     name,
        struct Scripting::TaggedBinding const& binding
    );

    MCAPI static void _validateClassConstructors(struct Scripting::ModuleBinding const&);

    MCAPI static void _validateModuleNames(struct Scripting::ModuleBinding const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static struct Scripting::ConstantFactory mEmptyConstantFactory;

    MCAPI static struct Scripting::FunctionBinding mEmptyFunctionBinding;

    MCAPI static struct Scripting::ObjectFactory mEmptyObjectFactory;

    // NOLINTEND
};

}; // namespace Scripting
