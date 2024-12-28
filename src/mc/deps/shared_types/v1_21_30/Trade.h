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
    MCAPI ::SharedTypes::v1_21_30::Trade& operator=(::SharedTypes::v1_21_30::Trade&&);

    MCAPI ::SharedTypes::v1_21_30::Trade& operator=(::SharedTypes::v1_21_30::Trade const&);

    MCAPI ~Trade();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
