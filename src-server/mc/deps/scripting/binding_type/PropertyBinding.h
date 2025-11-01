#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

namespace Scripting {

struct PropertyBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk490f19;
    ::ll::UntypedStorage<8, 160> mUnk8a8634;
    ::ll::UntypedStorage<8, 16> mUnkae65ab;
    ::ll::UntypedStorage<8, 16> mUnkb9812f;
    ::ll::UntypedStorage<8, 64> mUnk8a1fda;
    ::ll::UntypedStorage<8, 208> mUnkb93590;
    ::ll::UntypedStorage<8, 208> mUnk848c5a;
    ::ll::UntypedStorage<8, 208> mUnkc5b748;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyBinding& operator=(PropertyBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyBinding();

    MCNAPI PropertyBinding(::Scripting::PropertyBinding const&);

    MCNAPI PropertyBinding(::Scripting::PropertyBinding&&);

    MCNAPI ~PropertyBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::PropertyBinding const&);

    MCNAPI void* $ctor(::Scripting::PropertyBinding&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
