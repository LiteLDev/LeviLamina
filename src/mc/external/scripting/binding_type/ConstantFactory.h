#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

struct ConstantFactory : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk56382c;
    ::ll::UntypedStorage<8, 144> mUnk2f1d92;
    ::ll::UntypedStorage<1, 1>   mUnk35e387;
    ::ll::UntypedStorage<8, 64>  mUnk88f6ea;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantFactory& operator=(ConstantFactory const&);
    ConstantFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConstantFactory(::Scripting::ConstantFactory&&);

    MCAPI ConstantFactory(::Scripting::ConstantFactory const&);

    MCAPI ConstantFactory(
        ::std::string                                                      name_,
        ::entt::meta_type                                                  type_,
        bool                                                               primitive_,
        ::std::function<::entt::meta_any(::Scripting::WeakLifetimeScope&)> func_
    );

    MCAPI ~ConstantFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::ConstantFactory&&);

    MCAPI void* $ctor(::Scripting::ConstantFactory const&);

    MCAPI void* $ctor(
        ::std::string                                                      name_,
        ::entt::meta_type                                                  type_,
        bool                                                               primitive_,
        ::std::function<::entt::meta_any(::Scripting::WeakLifetimeScope&)> func_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
