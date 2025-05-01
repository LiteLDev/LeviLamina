#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct Trade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1f5616;
    ::ll::UntypedStorage<8, 24> mUnk6c6c4f;
    ::ll::UntypedStorage<4, 4>  mUnka1a44d;
    ::ll::UntypedStorage<4, 4>  mUnkf83b7c;
    ::ll::UntypedStorage<1, 1>  mUnk7dc036;
    ::ll::UntypedStorage<4, 4>  mUnke9099a;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade(Trade const&);
    Trade();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_30::Trade& operator=(::SharedTypes::v1_21_30::Trade&&);

    MCNAPI ::SharedTypes::v1_21_30::Trade& operator=(::SharedTypes::v1_21_30::Trade const&);

    MCNAPI ~Trade();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
