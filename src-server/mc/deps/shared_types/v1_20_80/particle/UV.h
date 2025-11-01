#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct UV {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaf48d1;
    ::ll::UntypedStorage<4, 4> mUnk4a308a;
    ::ll::UntypedStorage<8, 96> mUnk9d4c54;
    ::ll::UntypedStorage<8, 96> mUnkbb689c;
    ::ll::UntypedStorage<8, 184> mUnkac8fe7;
    // NOLINTEND

public:
    // prevent constructor by default
    UV();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UV(::SharedTypes::v1_20_80::UV&&);

    MCNAPI UV(::SharedTypes::v1_20_80::UV const&);

    MCNAPI ::SharedTypes::v1_20_80::UV& operator=(::SharedTypes::v1_20_80::UV&&);

    MCNAPI ::SharedTypes::v1_20_80::UV& operator=(::SharedTypes::v1_20_80::UV const&);

    MCNAPI ~UV();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::UV&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::UV const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
