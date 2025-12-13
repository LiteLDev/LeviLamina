#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct FlipBook {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk8f79c2;
    ::ll::UntypedStorage<4, 8>  mUnk593d9e;
    ::ll::UntypedStorage<4, 8>  mUnk751c51;
    ::ll::UntypedStorage<4, 4>  mUnk81838b;
    ::ll::UntypedStorage<8, 48> mUnkc3df1a;
    ::ll::UntypedStorage<1, 1>  mUnka13aed;
    ::ll::UntypedStorage<1, 1>  mUnk44a405;
    // NOLINTEND

public:
    // prevent constructor by default
    FlipBook();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlipBook(::SharedTypes::v1_20_80::FlipBook&&);

    MCNAPI FlipBook(::SharedTypes::v1_20_80::FlipBook const&);

    MCNAPI ::SharedTypes::v1_20_80::FlipBook& operator=(::SharedTypes::v1_20_80::FlipBook&&);

    MCNAPI ::SharedTypes::v1_20_80::FlipBook& operator=(::SharedTypes::v1_20_80::FlipBook const&);

    MCNAPI_C ~FlipBook();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::FlipBook&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::FlipBook const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
