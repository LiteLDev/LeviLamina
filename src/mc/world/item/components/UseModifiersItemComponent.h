#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct UseModifiersItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class UseModifiersItemComponent : public ::NetworkedItemComponent<::UseModifiersItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                   mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                                                    mEmitVibrations;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mStartSound;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                  mMovementModifier;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    UseModifiersItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UseModifiersItemComponent(::SharedTypes::v1_20_50::UseModifiersItemComponent component);

    MCFOLD bool getEmitVibrations() const;

    MCAPI float getMovementModifier() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::UseModifiersItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent(::ComponentItem& owner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
