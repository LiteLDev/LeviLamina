#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptPropertyComponents {

struct PropertyComponentRegistration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            void(::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>>&)>>
        factoryRegistration;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            void(::Scripting::ModuleBindingBuilder&, ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&)>>
        bindingRegistration;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyComponentRegistration& operator=(PropertyComponentRegistration const&);
    PropertyComponentRegistration(PropertyComponentRegistration const&);
    PropertyComponentRegistration();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PropertyComponentRegistration(::ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration&&);

    MCAPI ~PropertyComponentRegistration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::ScriptPropertyComponents
