#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct DurabilitySensorItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk27f789;
    // NOLINTEND

public:
    // prevent constructor by default
    DurabilitySensorItemComponent& operator=(DurabilitySensorItemComponent const&);
    DurabilitySensorItemComponent(DurabilitySensorItemComponent const&);
    DurabilitySensorItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_10::DurabilitySensorItemComponent& operator=(::SharedTypes::v1_21_10::DurabilitySensorItemComponent&&);

    MCNAPI ~DurabilitySensorItemComponent();
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

}
