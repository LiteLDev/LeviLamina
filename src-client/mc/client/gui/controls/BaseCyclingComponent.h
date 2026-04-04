#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class BaseCyclingComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                           mMaxCycleCount;
    ::ll::TypedStorage<8, 8, uint64>                           mCurrentCycleIndex;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPageIndicatorManagerSub;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseCyclingComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const = 0;

    virtual void reset() /*override*/;

    virtual void _updateSubPage() = 0;

    virtual void _postCreate() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _notifyPageIndicatorManagerOfNewSubscriber();

    MCAPI void _notifySubPageChanged(uint64 newPage);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
