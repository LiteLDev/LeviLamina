#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/ModuleDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct TypeMapData; }
// clang-format on

namespace Scripting {

struct ModuleBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::Scripting::ModuleDescriptor>               descriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ModuleDependency>> moduleDependencies;
    ::ll::TypedStorage<8, 32, ::std::string>                                javaScript;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ClassBinding>>     classBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::InterfaceBinding>> interfaceBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ErrorBinding>>     errorBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::EnumBinding>>      enumBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::FunctionBinding>>  functionBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ObjectFactory>>    objectFactories;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ConstantFactory>>  constants;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::TypeMapData>>      typeMaps;
    ::ll::TypedStorage<1, 1, bool>                                          importRestricted;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleBinding& operator=(ModuleBinding const&);
    ModuleBinding(ModuleBinding const&);
    ModuleBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModuleBinding(::Scripting::ModuleBinding&&);

    MCNAPI ModuleBinding(
        ::Scripting::ModuleDescriptor                descriptor_,
        ::std::vector<::Scripting::ModuleDependency> dependencies_,
        ::std::string&&                              javaScript_
    );

    MCNAPI ModuleBinding(
        ::Scripting::ModuleDescriptor                descriptor_,
        ::std::vector<::Scripting::ModuleDependency> dependencies_,
        ::std::vector<::Scripting::ClassBinding>     classBindings_,
        ::std::vector<::Scripting::InterfaceBinding> interfaceBindings_,
        ::std::vector<::Scripting::ErrorBinding>     errorBindings_,
        ::std::vector<::Scripting::EnumBinding>      enumBindings_,
        ::std::vector<::Scripting::FunctionBinding>  functionBindings_,
        ::std::vector<::Scripting::ObjectFactory>    objectFactories_,
        ::std::vector<::Scripting::ConstantFactory>  constants_,
        ::std::vector<::Scripting::TypeMapData>      typeMaps_,
        bool                                         importRestricted_
    );

    MCNAPI ~ModuleBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ModuleBinding&&);

    MCNAPI void* $ctor(
        ::Scripting::ModuleDescriptor                descriptor_,
        ::std::vector<::Scripting::ModuleDependency> dependencies_,
        ::std::string&&                              javaScript_
    );

    MCNAPI void* $ctor(
        ::Scripting::ModuleDescriptor                descriptor_,
        ::std::vector<::Scripting::ModuleDependency> dependencies_,
        ::std::vector<::Scripting::ClassBinding>     classBindings_,
        ::std::vector<::Scripting::InterfaceBinding> interfaceBindings_,
        ::std::vector<::Scripting::ErrorBinding>     errorBindings_,
        ::std::vector<::Scripting::EnumBinding>      enumBindings_,
        ::std::vector<::Scripting::FunctionBinding>  functionBindings_,
        ::std::vector<::Scripting::ObjectFactory>    objectFactories_,
        ::std::vector<::Scripting::ConstantFactory>  constants_,
        ::std::vector<::Scripting::TypeMapData>      typeMaps_,
        bool                                         importRestricted_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
