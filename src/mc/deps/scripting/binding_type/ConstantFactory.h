#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

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
    ::ll::UntypedStorage<8, 160> mUnk2f1d92;
    ::ll::UntypedStorage<1, 1>   mUnk35e387;
    ::ll::UntypedStorage<8, 64>  mUnk88f6ea;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantFactory& operator=(ConstantFactory const&);
    ConstantFactory(ConstantFactory const&);
    ConstantFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConstantFactory(::Scripting::ConstantFactory&&);

    MCNAPI ConstantFactory(
        ::std::string                                                      name_,
        ::entt::meta_type                                                  type_,
        bool                                                               primitive_,
        ::std::function<::entt::meta_any(::Scripting::WeakLifetimeScope&)> func_
    );

    MCNAPI ~ConstantFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ConstantFactory&&);

    MCNAPI void* $ctor(
        ::std::string                                                      name_,
        ::entt::meta_type                                                  type_,
        bool                                                               primitive_,
        ::std::function<::entt::meta_any(::Scripting::WeakLifetimeScope&)> func_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
