#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeTier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkba7225;
    ::ll::UntypedStorage<4, 4>  mUnk7653df;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTier& operator=(TradeTier const&);
    TradeTier(TradeTier const&);
    TradeTier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_30::TradeTier& operator=(::SharedTypes::v1_21_30::TradeTier&&);

    MCAPI ~TradeTier();
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
