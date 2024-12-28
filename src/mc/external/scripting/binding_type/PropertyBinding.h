#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/TaggedBinding.h"

namespace Scripting {

struct PropertyBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk490f19;
    ::ll::UntypedStorage<8, 144> mUnk8a8634;
    ::ll::UntypedStorage<8, 16>  mUnkae65ab;
    ::ll::UntypedStorage<8, 16>  mUnkb9812f;
    ::ll::UntypedStorage<8, 64>  mUnk8a1fda;
    ::ll::UntypedStorage<8, 192> mUnkb93590;
    ::ll::UntypedStorage<8, 192> mUnk848c5a;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyBinding& operator=(PropertyBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyBinding();

    MCAPI PropertyBinding(::Scripting::PropertyBinding const&);

    MCAPI PropertyBinding(::Scripting::PropertyBinding&&);

    MCAPI bool isValidPropertyValue(::entt::meta_any const& any) const;

    MCAPI ~PropertyBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Scripting::PropertyBinding const&);

    MCAPI void* $ctor(::Scripting::PropertyBinding&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
