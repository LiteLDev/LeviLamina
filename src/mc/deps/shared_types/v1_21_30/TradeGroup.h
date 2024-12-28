#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc3f4d7;
    ::ll::UntypedStorage<8, 24> mUnke33751;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeGroup& operator=(TradeGroup const&);
    TradeGroup(TradeGroup const&);
    TradeGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TradeGroup();
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
