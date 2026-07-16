#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

struct EnumBinding : public ::Scripting::TaggedBinding {
public:
    // EnumBinding inner types declare
    // clang-format off
    struct EnumValue;
    // clang-format on

    // EnumBinding inner types define
    struct EnumValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk9df397;
        ::ll::UntypedStorage<8, 32> mUnk202d6e;
        ::ll::UntypedStorage<8, 64> mUnka386bd;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnumValue& operator=(EnumValue const&);
        EnumValue(EnumValue const&);
        EnumValue();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~EnumValue();
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
    ::ll::UntypedStorage<8, 32> mUnkd9d571;
    ::ll::UntypedStorage<8, 16> mUnkf0e553;
    ::ll::UntypedStorage<1, 1>  mUnk4e5d4f;
    ::ll::UntypedStorage<8, 24> mUnk56312e;
    ::ll::UntypedStorage<8, 24> mUnkffc7c6;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumBinding& operator=(EnumBinding const&);
    EnumBinding(EnumBinding const&);
    EnumBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EnumBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
