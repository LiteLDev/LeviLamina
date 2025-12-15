#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/client/gui/NameResolutionScope.h"
#include "mc/client/gui/VisibilityFlag.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
class UIPropertyBag;
struct ControlScreenAction;
struct RenderableComponent;
struct ScreenEvent;
struct ScreenInputContext;
struct UIAnimationController;
struct UIComponent;
struct VisualTree;
// clang-format on

class UIControl : public ::std::enable_shared_from_this<::UIControl> {
public:
    // UIControl inner types declare
    // clang-format off
    struct ControlResolutionInfo;
    // clang-format on

    // UIControl inner types define
    struct ControlResolutionInfo {};

    using CompIdType = uint64;

    using NameResolverFunc = ::std::function<void(::UIControl&, ::std::shared_ptr<::UIControl>)>;

    using PostCreateFunc = ::std::function<void(::UIControl&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                         mCachedPosition;
    bool                                                                          mCachedPositionDirty       : 1;
    bool                                                                          mHover                     : 1;
    ::ui::VisibilityFlag                                                          mVisible                   : 2;
    bool                                                                          mIsVisibleInTree           : 1;
    bool                                                                          mEnabled                   : 1;
    bool                                                                          mAllAncestorsEnabled       : 1;
    bool                                                                          mSelected                  : 1;
    bool                                                                          mClipsChildren             : 1;
    bool                                                                          mAllowClipping             : 1;
    bool                                                                          mIsClipped                 : 1;
    bool                                                                          mEnableClippingScissorTest : 1;
    bool                                                                          mIsTemplate                : 1;
    bool                                                                          mPropagateAlpha            : 1;
    bool                                                                          mDelayCollectionUpdate     : 1;
    bool                                                                          mTextToSpeechTriggered     : 1;
    ::ll::TypedStorage<2, 2, ushort>                                              mControlCollectionFlag;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mName;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                         mParentRelativePosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                         mSize;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                         mMinSize;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                         mMaxSize;
    ::ll::TypedStorage<4, 4, float>                                               mAlpha;
    ::ll::TypedStorage<4, 4, int>                                                 mZOrder;
    ::ll::TypedStorage<4, 4, int>                                                 mLayer;
    ::ll::TypedStorage<4, 8, ::Vec2>                                              mClipOffset;
    ::ll::TypedStorage<4, 4, uint>                                                mClipChangeEventId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UIPropertyBag>>                  mPropertyBag;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                       mParent;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>>      mChildren;
    ::ll::TypedStorage<8, 8, uint64>                                              mComponentsInUse;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::UIComponent>>>    mComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderableComponent*>>              mRenderableComponentLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::UIControl::ControlResolutionInfo>>  mControlResolvers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::UIControl&)>>> mPostCreateVector;
    ::ll::TypedStorage<8, 8, ::ControlScreenAction&>                              mControlScreenAction;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                       mModalAncestor;
    // NOLINTEND

public:
    // prevent constructor by default
    UIControl& operator=(UIControl const&);
    UIControl(UIControl const&);
    UIControl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UIControl(::ControlScreenAction& controlScreenAction);

    MCNAPI uint _getComponentIndexFromBitId(uint64 bitId) const;

    MCNAPI void _propagateLockStateChange(bool broadcastEvent);

    MCNAPI void _registerControlNameResolver(
        ::std::string const&                                                controlName,
        ::ui::NameResolutionScope                                           scope,
        ::std::function<void(::UIControl&, ::std::shared_ptr<::UIControl>)> setter
    );

    MCNAPI void _registerPostCreateCallback(::std::function<void(::UIControl&)> setter);

    MCNAPI void _resolveControlNames(::UIControl& rootControl);

    MCNAPI void _resolvePostCreate();

    MCNAPI void _setPositionDirty();

    MCNAPI void
    _setVisible(::ui::VisibilityFlag visibleFlags, bool setLayoutChangedFlag, bool doLayout, bool shrinkInvisible);

    MCNAPI void addChild(::std::shared_ptr<::UIControl> child, ::ui::ChildInsertPosition childInsertPosition);

    MCNAPI void appendPropertyBag(::UIPropertyBag const& propertyBag);

    MCNAPI ::ComponentReceiveActionType broadcastEvent(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::UIComponent*           sender,
        ::ScreenEvent const&     screenEvent
    );

    MCNAPI bool canBeFocused() const;

    MCNAPI ::std::shared_ptr<::UIControl> clone(::UIControl* parent) const;

    MCNAPI bool containsPoint(::glm::vec2 const& point) const;

    MCNAPI void findAllCollectionIndices(::brstd::function_ref<void(::std::string const&, int)> callback);

    MCNAPI int findCollectionIndex(::std::string const& collectionName) const;

    MCNAPI ::RectangleArea getAABB() const;

    MCNAPI ::std::shared_ptr<::UIControl> getAncestorWhere(::brstd::function_ref<bool(::UIControl const&)> predicate);

    MCNAPI ::std::shared_ptr<::UIControl> getParent();

    MCNAPI ::std::string const getPathedName() const;

    MCNAPI ::glm::vec2 const& getPosition() const;

    MCNAPI ::UIPropertyBag const& getPropertyBag() const;

    MCNAPI ::UIPropertyBag& getPropertyBag();

    MCNAPI ::std::shared_ptr<::UIControl> moveChild(int index, bool notify);

    MCNAPI void notifyBindingsUpdated(
        ::std::vector<::std::string> controlList,
        ::std::string                propertyName,
        bool                         value,
        bool                         siblingScope
    );

    MCNAPI void popBackChild();

    MCNAPI void popFrontChild();

    MCNAPI void reloadFromControl(::UIControl const& control);

    MCNAPI bool removeChild(::std::shared_ptr<::UIControl> control);

    MCNAPI bool removeParentByName(::std::string const& name);

    MCNAPI void reset(bool recursive, bool shouldClearCollectionFlag);

    MCNAPI void setEnabled(bool enabled, bool broadcastEvent);

    MCNAPI void setIsTemplate(bool isTemplate);

    MCNAPI void setModalAncestor(::std::weak_ptr<::UIControl> control);

    MCNAPI void setVisible(bool visible, bool setLayoutChangedFlag, bool doLayout);

    MCNAPI ~UIControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ControlScreenAction& controlScreenAction);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
