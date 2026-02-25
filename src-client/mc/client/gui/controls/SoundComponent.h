#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/ScreenEventType.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class UISoundPlayer;
class VisualTree;
struct ScreenEvent;
union SoundEventConditions;
// clang-format on

class SoundComponent : public ::UIComponent {
public:
    // SoundComponent inner types declare
    // clang-format off
    struct SoundEventInfo;
    // clang-format on

    // SoundComponent inner types define
    struct SoundEventInfo {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UISoundPlayer const*>                           mSoundPlayer;
    ::ll::TypedStorage<4, 4, float>                                            mVolume;
    ::ll::TypedStorage<4, 4, float>                                            mPitch;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mSoundName;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundComponent::SoundEventInfo>> mSoundEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addSoundEvent(
        ::std::string const&          soundName,
        float                         volume,
        float                         pitch,
        ::std::chrono::milliseconds   minTimeBetweenPlays,
        ::ScreenEventType             screenEventType,
        ::SoundEventConditions const& screenEventConditions
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
