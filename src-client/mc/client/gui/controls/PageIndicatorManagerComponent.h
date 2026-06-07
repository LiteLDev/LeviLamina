#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PageIndicatorManagerComponent : public ::UIComponent {
public:
    // PageIndicatorManagerComponent inner types define
    enum class PageIndicatorDirection : uchar {
        Left  = 0,
        Right = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mControlWithManagerToCompare;
    ::ll::TypedStorage<8, 8, uint64>                        mSubPage;
    ::ll::TypedStorage<8, 8, uint64>                        mNumPages;
    ::ll::TypedStorage<4, 4, uint>                          mNextSubPageBinding;
    ::ll::TypedStorage<4, 4, uint>                          mPrevSubPageBinding;
    ::ll::TypedStorage<4, 4, ::InputMode>                   mInputMode;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(uint64), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                   mPublisher;
    ::ll::TypedStorage<1, 1, bool> mConsumeEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    PageIndicatorManagerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PageIndicatorManagerComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&         context,
        ::ScreenInputContext& screenEvent,
        ::UIAnimationController&,
        ::ScreenEvent const&
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PageIndicatorManagerComponent(::UIControl& owner);

    MCAPI void _broadcastNewHoverSliceButtonEvent(
        ::ScreenInputContext& context,
        uint64                newSubPage,
        bool                  isInteracted,
        uint                  pressedButton
    );

    MCFOLD ::Bedrock::PubSub::Subscription registerListener(::std::function<void(uint64)> callback);

    MCAPI ::Bedrock::PubSub::Subscription
    registerListenerWithExpectedPageCount(uint64 expectedPageCount, ::std::function<void(uint64)> callback);

    MCAPI void setNextSubPageBinding(uint binding);

    MCFOLD void setPrevSubPageBinding(uint binding);

    MCAPI void setTargetManagerToCompare(::std::shared_ptr<::UIControl> targetControlWithManagerToCompare);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reload(::UIComponent const& rhs);

    MCAPI void $reset();

    MCAPI ::ComponentReceiveActionType
    $receive(::VisualTree& context, ::ScreenInputContext& screenEvent, ::UIAnimationController&, ::ScreenEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
