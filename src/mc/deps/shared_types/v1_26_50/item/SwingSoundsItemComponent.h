#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_90 { struct SwingSoundsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct SwingSoundsItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>> mAttackMissSound;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>> mAttackHitSound;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>> mAttackCriticalHitSound;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SwingSoundsItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void upgrade(
        ::SharedTypes::v1_21_90::SwingSoundsItemComponent const& old,
        ::SharedTypes::v1_26_50::SwingSoundsItemComponent&       current
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
