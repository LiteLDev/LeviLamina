#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBinding.h"

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
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct TaggedBinding; }
namespace Scripting { struct TypeMapData; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

namespace Scripting {

class ModuleBindingBuilder {
public:
    // ModuleBindingBuilder inner types declare
    // clang-format off
    struct BuilderData;
    // clang-format on
    
    // ModuleBindingBuilder inner types define
    struct BuilderData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk791e57;
        ::ll::UntypedStorage<8, 96> mUnk7003d2;
        ::ll::UntypedStorage<8, 24> mUnk4eacd6;
        ::ll::UntypedStorage<8, 24> mUnk79fcda;
        ::ll::UntypedStorage<8, 24> mUnka08202;
        ::ll::UntypedStorage<8, 24> mUnk12ae0a;
        ::ll::UntypedStorage<8, 24> mUnk904f94;
        ::ll::UntypedStorage<8, 24> mUnkb1808e;
        ::ll::UntypedStorage<8, 24> mUnk7703db;
        ::ll::UntypedStorage<8, 24> mUnk6bcb57;
        ::ll::UntypedStorage<8, 24> mUnk8fa1fb;
        ::ll::UntypedStorage<8, 32> mUnk2ebd1a;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        BuilderData& operator=(BuilderData const&);
        BuilderData(BuilderData const&);
        BuilderData();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Scripting::ModuleBindingBuilder::BuilderData& operator=(::Scripting::ModuleBindingBuilder::BuilderData&&);
    
        MCNAPI ~BuilderData();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 352> mUnkd4febe;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleBindingBuilder& operator=(ModuleBindingBuilder const&);
    ModuleBindingBuilder(ModuleBindingBuilder const&);
    ModuleBindingBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModuleBindingBuilder(::mce::UUID uuid, ::std::string const& name, ::Scripting::Version const& version, bool importRestricted);

    MCNAPI bool _allowed(::std::vector<::Scripting::Release> const& releases, bool allowUntagged, ::std::vector<::std::string> const& additionalTags) const;

    MCNAPI ::std::vector<::Scripting::ClassBinding> _filterClassBindings(::std::vector<::Scripting::ClassBinding> const& classBindings, bool allowUntagged, ::std::vector<::std::string> const& additionalTags) const;

    MCNAPI ::std::vector<::Scripting::EnumBinding> _filterEnumBindings(::std::vector<::Scripting::EnumBinding> const& enumBindings, bool allowUntagged, ::std::vector<::std::string> const& additionalTags) const;

    MCNAPI ::std::vector<::Scripting::EnumBinding::EnumValue> _filterEnumValueMap(::std::vector<::Scripting::ConstantFactory> const& filteredConstants, ::std::vector<::Scripting::EnumBinding::EnumValue> const& valueMap) const;

    MCNAPI ::std::vector<::Scripting::ErrorBinding> _filterErrorBindings(::std::vector<::Scripting::ErrorBinding> const& errorBindings, bool allowUnreleased, ::std::vector<::std::string> const& allowedTags) const;

    MCNAPI ::std::vector<::Scripting::InterfaceBinding> _filterInterfaceBindings(::std::vector<::Scripting::InterfaceBinding> const& interfaceBindings, bool allowUntagged, ::std::vector<::std::string> const& additionalTags) const;

    MCNAPI ::std::vector<::Scripting::TypeMapData> _filterTypeMaps(::std::vector<::Scripting::TypeMapData> const& typeMaps, bool allowUntagged, ::std::vector<::std::string> const& additionalTags) const;

    MCNAPI ::std::vector<::Scripting::ClassBinding> _orderClassBindingsByDependency(::std::vector<::Scripting::ClassBinding>& unorderedBindings) const;

    MCNAPI ::Scripting::ModuleBinding build(bool allowUntagged, ::std::vector<::std::string> const& additionalTags, ::Scripting::RuntimeConditions const& currentRuntimeConditions);

    MCNAPI ::Scripting::ModuleBindingBuilder& classBinding(::Scripting::ClassBinding&& classBinding);

    MCNAPI ::Scripting::ModuleBindingBuilder& createTypeMap(::Scripting::TypeMapBuilder& typeMapBuilder);

    MCNAPI ::Scripting::ModuleBindingBuilder& enumBinding(::Scripting::EnumBinding&& enumBinding);

    MCNAPI ::Scripting::ModuleBindingBuilder& errorBinding(::Scripting::ErrorBinding&& errorBinding);

    MCNAPI ::Scripting::ModuleBindingBuilder& interfaceBinding(::Scripting::InterfaceBinding&& interfaceBinding);

    MCNAPI ~ModuleBindingBuilder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _assertClassMemberSymbolDoNotExist(::Scripting::ClassBinding const& classBinding, ::std::string const& name, ::Scripting::TaggedBinding const& binding);

    MCNAPI static bool _assertEnumMemberSymbolDoNotExist(::Scripting::EnumBinding const& enumBinding, ::std::string const& name, ::Scripting::TaggedBinding const& binding);

    MCNAPI static bool _assertModuleMemberSymbolDoNotExist(::Scripting::ModuleBinding const& moduleBinding, ::std::string const& name, ::Scripting::TaggedBinding const& binding);

    MCNAPI static void _validateClassConstructors(::Scripting::ModuleBinding const& moduleBinding);

    MCNAPI static void _validateModuleNames(::Scripting::ModuleBinding const& moduleBinding);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ConstantFactory& mEmptyConstantFactory();

    MCNAPI static ::Scripting::FunctionBinding& mEmptyFunctionBinding();

    MCNAPI static ::Scripting::ObjectFactory& mEmptyObjectFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID uuid, ::std::string const& name, ::Scripting::Version const& version, bool importRestricted);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
