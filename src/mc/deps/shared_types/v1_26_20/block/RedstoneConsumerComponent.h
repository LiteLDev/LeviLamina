#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct RedstoneConsumerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mPropagatePower;
    ::ll::TypedStorage<1, 1, uchar> mMinPower;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& MinPowerId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& PropagatesPowerId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
