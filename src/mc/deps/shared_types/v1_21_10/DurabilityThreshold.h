#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct DurabilityThreshold {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkee883e;
    ::ll::UntypedStorage<8, 32> mUnk5eec24;
    ::ll::UntypedStorage<4, 4>  mUnkb9f3b8;
    // NOLINTEND

public:
    // prevent constructor by default
    DurabilityThreshold(DurabilityThreshold const&);
    DurabilityThreshold();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_10::DurabilityThreshold& operator=(::SharedTypes::v1_21_10::DurabilityThreshold&&);

    MCAPI ::SharedTypes::v1_21_10::DurabilityThreshold& operator=(::SharedTypes::v1_21_10::DurabilityThreshold const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
