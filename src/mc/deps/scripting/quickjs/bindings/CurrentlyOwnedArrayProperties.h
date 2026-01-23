#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct CurrentlyOwnedArrayProperties {
public:
    // CurrentlyOwnedArrayProperties inner types declare
    // clang-format off
    struct Prop;
    // clang-format on

    // CurrentlyOwnedArrayProperties inner types define
    struct Prop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk8478ce;
        ::ll::UntypedStorage<8, 32> mUnk32882d;
        // NOLINTEND

    public:
        // prevent constructor by default
        Prop& operator=(Prop const&);
        Prop(Prop const&);
        Prop();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Prop();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9a4599;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentlyOwnedArrayProperties& operator=(CurrentlyOwnedArrayProperties const&);
    CurrentlyOwnedArrayProperties(CurrentlyOwnedArrayProperties const&);
    CurrentlyOwnedArrayProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::QuickJS::CurrentlyOwnedArrayProperties&
    operator=(::Scripting::QuickJS::CurrentlyOwnedArrayProperties&&);
    // NOLINTEND
};

} // namespace Scripting::QuickJS
