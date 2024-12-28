#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_50 { struct IconItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct IconItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk956685;
    // NOLINTEND

public:
    // prevent constructor by default
    IconItemComponent& operator=(IconItemComponent const&);
    IconItemComponent(IconItemComponent const&);
    IconItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IconItemComponent(::SharedTypes::v1_20_60::IconItemComponent&&);

    MCAPI ~IconItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_20_50::IconItemComponent>& oldDefinition,
        ::std::optional<::SharedTypes::v1_20_60::IconItemComponent>& newDefinition
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_60::IconItemComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
