#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PageIndicatorManagerComponent;
class UIControl;
// clang-format on

class PageIndicatorGridComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                           mlastReportedSubpage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPageIndicatorManagerSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mGridCompletionSub;
    ::ll::TypedStorage<8, 32, ::std::string>                   mTargetWhenIsCurrentPage;
    ::ll::TypedStorage<8, 32, ::std::string>                   mTargetWhenNotCurrentPage;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>    mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    PageIndicatorGridComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PageIndicatorGridComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PageIndicatorGridComponent(::UIControl& owner);

    MCAPI void _findCorrespondingDescendant(::std::shared_ptr<::UIControl> child, bool isSelected, uint64& countFound);

    MCAPI void _registerWithManager();

    MCAPI ::PageIndicatorManagerComponent* getPageIndicatorManager();

    MCAPI void notifyGridCompletedConstruction(uint64);

    MCAPI void notifySubPageChanged(uint64 newPage);

    MCAPI void setTarget(::std::shared_ptr<::UIControl> target);

    MCFOLD void setTargetWhenIsCurrentPage(::std::string const& targetName);

    MCFOLD void setTargetWhenNotCurrentPage(::std::string const& targetName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
