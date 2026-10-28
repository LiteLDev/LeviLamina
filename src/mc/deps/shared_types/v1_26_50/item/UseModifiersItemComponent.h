#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"
#include "mc/deps/shared_types/v1_26_30/item/UseModifiersItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_30 { struct UseModifiersItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct UseModifiersItemComponent {
public:
    // UseModifiersItemComponent inner types define
    using StartUsing = ::SharedTypes::v1_26_30::UseModifiersItemComponent::StartUsing;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                          mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                                                           mEmitVibrations;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>>   mStartSound;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                         mMovementModifier;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_30::UseModifiersItemComponent::StartUsing> mStartUsing;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UseModifiersItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::SharedTypes::v1_26_30::UseModifiersItemComponent const& old,
        ::SharedTypes::v1_26_50::UseModifiersItemComponent&       current
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
