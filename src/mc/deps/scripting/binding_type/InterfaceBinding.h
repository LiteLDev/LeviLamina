#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RuntimeConditions; }
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct InterfaceBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk181714;
    ::ll::UntypedStorage<8, 16> mUnk96316b;
    ::ll::UntypedStorage<8, 16> mUnke35bb1;
    ::ll::UntypedStorage<8, 24> mUnk32c523;
    ::ll::UntypedStorage<8, 24> mUnk5db97e;
    ::ll::UntypedStorage<8, 24> mUnkbb4feb;
    // NOLINTEND

public:
    // prevent constructor by default
    InterfaceBinding& operator=(InterfaceBinding const&);
    InterfaceBinding(InterfaceBinding const&);
    InterfaceBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InterfaceBinding(::Scripting::InterfaceBinding&&);

    MCNAPI InterfaceBinding(
        ::std::string                               name_,
        ::entt::meta_type                           type_,
        ::entt::meta_type                           baseType_,
        ::std::vector<::Scripting::PropertyBinding> properties_,
        ::Scripting::RuntimeConditions              requiredRuntimeConditions_,
        ::Scripting::RuntimeConditions              missingRuntimeConditions_
    );

    MCNAPI ~InterfaceBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::InterfaceBinding&&);

    MCNAPI void* $ctor(
        ::std::string                               name_,
        ::entt::meta_type                           type_,
        ::entt::meta_type                           baseType_,
        ::std::vector<::Scripting::PropertyBinding> properties_,
        ::Scripting::RuntimeConditions              requiredRuntimeConditions_,
        ::Scripting::RuntimeConditions              missingRuntimeConditions_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
