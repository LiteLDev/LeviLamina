#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

struct ClassBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd7d7d1;
    ::ll::UntypedStorage<8, 16> mUnk73d31d;
    ::ll::UntypedStorage<8, 16> mUnk14e611;
    ::ll::UntypedStorage<8, 24> mUnka427d8;
    ::ll::UntypedStorage<8, 16> mUnk7411e3;
    ::ll::UntypedStorage<8, 24> mUnk5a5946;
    ::ll::UntypedStorage<8, 24> mUnkdca5e0;
    ::ll::UntypedStorage<8, 24> mUnke39415;
    ::ll::UntypedStorage<8, 24> mUnk706766;
    ::ll::UntypedStorage<8, 24> mUnk77c25d;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClassBinding(::Scripting::ClassBinding&&);

    MCNAPI ClassBinding(::Scripting::ClassBinding const&);

    MCNAPI ::Scripting::ClassBinding& operator=(::Scripting::ClassBinding&&);

    MCNAPI ::Scripting::ClassBinding& operator=(::Scripting::ClassBinding const&);

    MCNAPI ~ClassBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ClassBinding&&);

    MCNAPI void* $ctor(::Scripting::ClassBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
