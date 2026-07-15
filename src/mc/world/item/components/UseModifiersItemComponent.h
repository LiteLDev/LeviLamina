#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/sound/SoundEventIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class SemVersion;
namespace SharedTypes::Beta { struct UseModifiersItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class UseModifiersItemComponent : public ::NetworkedItemComponent<::UseModifiersItemComponent> {
public:
    // UseModifiersItemComponent inner types define
    enum class StartUsing : uchar {
        IfFirst = 0,
        Always  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                    mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                                     mEmitVibrations;
    ::ll::TypedStorage<8, 48, ::std::optional<::SoundEventIdentifier>> mStartSound;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                   mMovementModifier;
    ::ll::TypedStorage<1, 1, ::UseModifiersItemComponent::StartUsing>  mStartUsing;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mOnUseSubscription;
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
    MCAPI explicit UseModifiersItemComponent(::SharedTypes::Beta::UseModifiersItemComponent component);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Beta::UseModifiersItemComponent component);
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
