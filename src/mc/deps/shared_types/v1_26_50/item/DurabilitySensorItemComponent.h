#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_10 { struct DurabilitySensorItemComponent; }
namespace SharedTypes::v1_26_50 { struct DurabilityThreshold; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct DurabilitySensorItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_50::DurabilityThreshold>> mDurabilityThresholds;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::SharedTypes::v1_21_10::DurabilitySensorItemComponent const& old,
        ::SharedTypes::v1_26_50::DurabilitySensorItemComponent&       current
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
