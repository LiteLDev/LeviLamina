#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct ErrorBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk883b12;
    ::ll::UntypedStorage<8, 16> mUnkd85588;
    ::ll::UntypedStorage<8, 24> mUnkea44c7;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorBinding& operator=(ErrorBinding const&);
    ErrorBinding(ErrorBinding const&);
    ErrorBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ErrorBinding(::std::string name_, ::entt::meta_type type_, ::std::vector<::Scripting::PropertyBinding> properties_);

    MCNAPI ~ErrorBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string name_, ::entt::meta_type type_, ::std::vector<::Scripting::PropertyBinding> properties_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
