#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_10 { struct DurabilityThreshold; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct DurabilitySensorItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_10::DurabilityThreshold>> mDurabilityThresholds;
    // NOLINTEND

public:
    // prevent constructor by default
    DurabilitySensorItemComponent& operator=(DurabilitySensorItemComponent const&);
    DurabilitySensorItemComponent(DurabilitySensorItemComponent const&);
    DurabilitySensorItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_10::DurabilitySensorItemComponent&
    operator=(::SharedTypes::v1_21_10::DurabilitySensorItemComponent&&);

    MCAPI ~DurabilitySensorItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
