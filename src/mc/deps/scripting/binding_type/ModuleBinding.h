#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct TypeMapData; }
// clang-format on

namespace Scripting {

struct ModuleBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk10164d;
    ::ll::UntypedStorage<8, 24>  mUnk90f6b8;
    ::ll::UntypedStorage<8, 32>  mUnk1192ef;
    ::ll::UntypedStorage<8, 24>  mUnka3446e;
    ::ll::UntypedStorage<8, 24>  mUnke60f93;
    ::ll::UntypedStorage<8, 24>  mUnka8aee8;
    ::ll::UntypedStorage<8, 24>  mUnkd9c53a;
    ::ll::UntypedStorage<8, 24>  mUnkd347f3;
    ::ll::UntypedStorage<8, 24>  mUnk6b2416;
    ::ll::UntypedStorage<8, 24>  mUnk911301;
    ::ll::UntypedStorage<8, 24>  mUnk7a469a;
    ::ll::UntypedStorage<1, 1>   mUnk13eb3d;
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
