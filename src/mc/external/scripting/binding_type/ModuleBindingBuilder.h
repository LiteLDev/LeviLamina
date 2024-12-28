#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
namespace Scripting { class RuntimeConditions; }
namespace Scripting { class TypeMapBuilder; }
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
namespace Scripting { struct TypeMapData; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class ModuleBindingBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 352> mUnk19651f;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleBindingBuilder& operator=(ModuleBindingBuilder const&);
    ModuleBindingBuilder(ModuleBindingBuilder const&);
    ModuleBindingBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ModuleBindingBuilder(::Scripting::UUID const& id, ::std::string const& name, ::Scripting::Version const& version);

    MCAPI bool _allowed(
        ::std::vector<::Scripting::Release> const& releases,
        bool                                       allowUntagged,
        ::std::vector<::std::string> const&        additionalTags
    ) const;

    MCAPI ::std::vector<::Scripting::ClassBinding> _filterClassBindings(
        ::std::vector<::Scripting::ClassBinding> const& classBindings,
        bool                                            allowUntagged,
        ::std::vector<::std::string> const&             additionalTags
    ) const;

    MCAPI ::std::vector<::Scripting::EnumBinding> _filterEnumBindings(
        ::std::vector<::Scripting::EnumBinding> const& enumBindings,
        bool                                           allowUntagged,
        ::std::vector<::std::string> const&            additionalTags
    ) const;

    MCAPI ::std::vector<::Scripting::EnumBinding::EnumValue> _filterEnumValueMap(
        ::std::vector<::Scripting::ConstantFactory> const&        filteredConstants,
        ::std::vector<::Scripting::EnumBinding::EnumValue> const& valueMap
    ) const;

    MCAPI ::std::vector<::Scripting::ErrorBinding> _filterErrorBindings(
        ::std::vector<::Scripting::ErrorBinding> const& errorBindings,
        bool                                            allowUnreleased,
        ::std::vector<::std::string> const&             allowedTags
    ) const;

    MCAPI ::std::vector<::Scripting::InterfaceBinding> _filterInterfaceBindings(
        ::std::vector<::Scripting::InterfaceBinding> const& interfaceBindings,
        bool                                                allowUntagged,
        ::std::vector<::std::string> const&                 additionalTags
    ) const;

    MCAPI ::std::vector<::Scripting::TypeMapData> _filterTypeMaps(
        ::std::vector<::Scripting::TypeMapData> const& typeMaps,
        bool                                           allowUntagged,
        ::std::vector<::std::string> const&            additionalTags
    ) const;

    MCAPI bool
    _isClassTypeInList(::entt::meta_type type, ::std::vector<::Scripting::ClassBinding> const& classBindings) const;

    MCAPI ::std::vector<::Scripting::ClassBinding>
    _orderClassBindingsByDependency(::std::vector<::Scripting::ClassBinding>& unorderedBindings) const;

    MCAPI ::Scripting::ModuleBinding build(
        bool                                  allowUntagged,
        ::std::vector<::std::string> const&   additionalTags,
        ::Scripting::RuntimeConditions const& currentRuntimeConditions
    );

    MCAPI ::Scripting::ModuleBindingBuilder& classBinding(::Scripting::ClassBinding&& classBinding);

    MCAPI ::Scripting::ModuleBindingBuilder& createTypeMap(::Scripting::TypeMapBuilder& typeMapBuilder);

    MCAPI ::Scripting::ModuleBindingBuilder& enumBinding(::Scripting::EnumBinding&& enumBinding);

    MCAPI ::Scripting::ModuleBindingBuilder& errorBinding(::Scripting::ErrorBinding&& errorBinding);

    MCAPI ::Scripting::ModuleDescriptor getModuleDescriptor() const;

    MCAPI ::Scripting::ModuleBindingBuilder& interfaceBinding(::Scripting::InterfaceBinding&& interfaceBinding);

    MCAPI ::Scripting::ModuleBindingBuilder& scriptModuleCode(::std::string&& scriptModuleCode);

    MCAPI ~ModuleBindingBuilder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _assertClassMemberSymbolDoesntExist(
        ::Scripting::ClassBinding const&  classBinding,
        ::std::string const&              name,
        ::Scripting::TaggedBinding const& binding
    );

    MCAPI static bool _assertEnumMemberSymbolDoesntExist(
        ::Scripting::EnumBinding const&   enumBinding,
        ::std::string const&              name,
        ::Scripting::TaggedBinding const& binding
    );

    MCAPI static bool _assertModuleMemberSymbolDoesntExist(
        ::Scripting::ModuleBinding const& moduleBinding,
        ::std::string const&              name,
        ::Scripting::TaggedBinding const& binding
    );

    MCAPI static void _validateClassConstructors(::Scripting::ModuleBinding const& moduleBinding);

    MCAPI static void _validateModuleNames(::Scripting::ModuleBinding const& moduleBinding);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Scripting::ConstantFactory& mEmptyConstantFactory();

    MCAPI static ::Scripting::FunctionBinding& mEmptyFunctionBinding();

    MCAPI static ::Scripting::ObjectFactory& mEmptyObjectFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::UUID const& id, ::std::string const& name, ::Scripting::Version const& version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
