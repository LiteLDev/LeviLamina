#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AnchorPoint.h"
#include "mc/client/gui/Draggable.h"
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"
#include "mc/client/gui/LayoutOffset.h"
#include "mc/client/gui/PriorityRule.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class LayoutVariable;
class LayoutVariables;
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VariableRef;
class VisualTree;
struct ScreenEvent;
// clang-format on

class LayoutComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LayoutVariables>>                    mAllVariables;
    ::ll::TypedStorage<8, 88, ::std::array<::std::unique_ptr<::LayoutVariable>, 11>> mControlVariables;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>                                    mOffset;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>                                    mSize;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>                                    mMinSize;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>                                    mMaxSize;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                            mOffsetDelta;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                            mGridDimensions;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                            mDragPosition;
    ::ll::TypedStorage<1, 1, ::ui::Draggable>                                        mDraggable;
    ::ll::TypedStorage<1, 1, ::ui::AnchorPoint>                                      mAnchorFrom;
    ::ll::TypedStorage<1, 1, ::ui::AnchorPoint>                                      mAnchorTo;
    ::ll::TypedStorage<1, 1, ::ui::PriorityRule>                                     mPriorityRule;
    ::ll::TypedStorage<4, 4, int>                                                    mPriority;
    bool                                                                             mIsBeingDragged            : 1;
    bool                                                                             mContained                 : 1;
    bool                                                                             mFollowsCursor             : 1;
    bool                                                                             mFollowsCursorInsideParent : 1;
    bool                                                                             mActive                    : 1;
    bool                                                                             mInheritMaxSiblingWidth    : 1;
    bool                                                                             mInheritMaxSiblingHeight   : 1;
    bool                                                                             mIsDelayingLayout          : 1;
    bool                                                                             mIsInitialized             : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LayoutComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree& screenEvent,
        ::ScreenInputContext&,
        ::UIAnimationController&,
        ::ScreenEvent const&
    ) /*override*/;

    virtual void onNotifyChildAdded() /*override*/;

    virtual void onAdded() /*override*/;

    virtual void onRemoved() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LayoutComponent(::UIControl& owner);

    MCAPI ::std::shared_ptr<::LayoutVariables> _getLayoutVariables();

    MCAPI void _initialize(::std::shared_ptr<::LayoutVariables>& layoutVariables, bool initializeInactive);

    MCAPI void _initializeVariables();

    MCAPI bool _isVariableIsSupported(::LayoutVariableType type) const;

    MCAPI int _recursiveInitialize(
        ::std::shared_ptr<::LayoutVariables>& layoutVariables,
        bool                                  initializeInactive,
        bool                                  initializeTemplate
    );

    MCAPI ::ui::AnchorPoint getAnchorFrom() const;

    MCAPI ::ui::AnchorPoint getAnchorTo() const;

    MCFOLD ::ui::Draggable getDraggable() const;

    MCAPI bool getInheritMaxSiblingHeight() const;

    MCAPI bool getInheritMaxSiblingWidth() const;

    MCFOLD ::ui::LayoutOffset const& getMaxSize() const;

    MCFOLD ::ui::LayoutOffset const& getMinSize() const;

    MCFOLD ::ui::LayoutOffset const& getOffset() const;

    MCFOLD ::glm::vec2 const& getOffsetDelta() const;

    MCAPI ::glm::vec2 const getPositionMinusOffsetDelta() const;

    MCFOLD int getPriority() const;

    MCAPI ::ui::PriorityRule getPriorityRule() const;

    MCFOLD ::ui::LayoutOffset const& getSize() const;

    MCAPI ::LayoutVariable* getVariable(::LayoutVariableType type);

    MCAPI bool hasMaxSize() const;

    MCAPI bool hasOffsetAxisType(::LayoutVariableType axis, ::ui::LayoutAxisOffsetContainerType checkType) const;

    MCAPI bool hasSizeAxisType(::LayoutVariableType axis, ::ui::LayoutAxisOffsetContainerType checkType) const;

    MCAPI void invalidateVariableDependencies(::VariableRef& var, bool forceInvalidation);

    MCAPI bool isActive() const;

    MCAPI bool isDelayingLayout() const;

    MCAPI bool isInitialized() const;

    MCAPI void layout(::std::initializer_list<::LayoutVariableType> invalidateVariableTypes, bool forceInvalidation);

    MCAPI int recursiveInitialize(::std::shared_ptr<::LayoutVariables>& layoutVariables, bool initializeInactive);

    MCAPI void reinitialize(::std::initializer_list<::LayoutVariableType> variableTypes);

    MCAPI void removeDeadDependencies();

    MCAPI void removeDependencies();

    MCAPI void removeReferencesToMe();

    MCAPI void setAnchorFrom(::ui::AnchorPoint anchorFrom);

    MCAPI void setAnchorTo(::ui::AnchorPoint anchorTo);

    MCAPI void setContained(bool contained);

    MCAPI void setDelayLayout(bool delayLayout);

    MCAPI void setDraggable(::ui::Draggable draggable);

    MCAPI void setFollowsCursor(bool followsCursor);

    MCAPI void setFollowsCursorInsideParent(bool followsCursorInsideParent);

    MCAPI void setInactive();

    MCAPI void setInheritMaxSiblingHeight(bool inheritMaxSiblingHeight);

    MCAPI void setInheritMaxSiblingWidth(bool inheritMaxSiblingWidth);

    MCAPI void setMaxSize(::ui::LayoutOffset const& size);

    MCAPI void setMinSize(::ui::LayoutOffset const& size);

    MCAPI void setOffset(::ui::LayoutOffset const& offset);

    MCAPI void setOffsetDelta(::glm::vec2 const& offsetDelta, ::UIControl const* const primaryControl);

    MCAPI void setPriority(int priority);

    MCAPI void setPriorityRule(::ui::PriorityRule priorityRule);

    MCAPI void setSize(::ui::LayoutOffset const& size);

    MCAPI void setVariableOverrideValue(::LayoutVariableType type, float value);
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

    MCAPI void $reset();

    MCAPI ::ComponentReceiveActionType
    $receive(::VisualTree& screenEvent, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCAPI void $onNotifyChildAdded();

    MCAPI void $onAdded();

    MCAPI void $onRemoved();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
