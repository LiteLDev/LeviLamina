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
class ControlScreenAction;
class CustomFrameUpdateComponent;
class RectangleArea;
class RenderableComponent;
class ScreenInputContext;
class UIAnimationController;
class UIComponent;
class UIFrameUpdateContext;
class UIPropertyBag;
class VisualTree;
struct ScreenEvent;
// clang-format on

class UIControl : public ::std::enable_shared_from_this<::UIControl> {
public:
    // UIControl inner types declare
    // clang-format off
    struct ControlResolutionInfo;
    // clang-format on

    // UIControl inner types define
    struct ControlResolutionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>            targetControlName;
        ::ll::TypedStorage<4, 4, ::ui::NameResolutionScope> scope;
        ::ll::TypedStorage<8, 64, ::std::function<void(::UIControl&, ::std::shared_ptr<::UIControl>)>> setter;
        // NOLINTEND

    public:
        // prevent constructor by default
        ControlResolutionInfo& operator=(ControlResolutionInfo const&);
        ControlResolutionInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ControlResolutionInfo(::UIControl::ControlResolutionInfo const&);

        MCAPI ControlResolutionInfo(
            ::std::string const&                                                aTargetControlName,
            ::ui::NameResolutionScope                                           aScope,
            ::std::function<void(::UIControl&, ::std::shared_ptr<::UIControl>)> aSetter
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::UIControl::ControlResolutionInfo const&);

        MCAPI void* $ctor(
            ::std::string const&                                                aTargetControlName,
            ::ui::NameResolutionScope                                           aScope,
            ::std::function<void(::UIControl&, ::std::shared_ptr<::UIControl>)> aSetter
        );
        // NOLINTEND
    };

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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UIPropertyBag>>                  mPropertyBagToPropagateToChildren;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                       mParent;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>>      mChildren;
    ::ll::TypedStorage<8, 8, uint64>                                              mComponentsInUse;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::UIComponent>>>    mComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderableComponent*>>              mRenderableComponentLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::CustomFrameUpdateComponent*>>       mCustomFrameUpdateComponentLookup;
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
    MCAPI explicit UIControl(::ControlScreenAction& controlScreenAction);

    MCAPI uint _getComponentIndexFromBitId(uint64 bitId) const;

    MCAPI void _propagateLockStateChange(bool broadcastEvent);

    MCAPI void _registerControlNameResolver(
        ::std::string const&                                                controlName,
        ::ui::NameResolutionScope                                           scope,
        ::std::function<void(::UIControl&, ::std::shared_ptr<::UIControl>)> setter
    );

    MCAPI void _registerPostCreateCallback(::std::function<void(::UIControl&)> setter);

    MCAPI void _resolveControlNames(::UIControl& rootControl);

    MCAPI void _resolvePostCreate();

    MCAPI void _setCachedPosition() const;

    MCAPI void _setPositionDirty();

    MCAPI void
    _setVisible(::ui::VisibilityFlag visibleFlags, bool setLayoutChangedFlag, bool doLayout, bool shrinkInvisible);

    MCAPI void addChild(::std::shared_ptr<::UIControl> child, ::ui::ChildInsertPosition childInsertPosition);

    MCAPI void addControlCollectionFlag(ushort flag);

    MCAPI void appendPropertyBag(::UIPropertyBag const& propertyBag);

    MCAPI bool areAllAncestorsEnabled() const;

    MCAPI ::ComponentReceiveActionType broadcastEvent(::UIComponent* sender, ::ScreenEvent const& screenEvent);

    MCAPI ::ComponentReceiveActionType broadcastEvent(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::UIComponent*           sender,
        ::ScreenEvent const&     screenEvent
    );

    MCAPI bool canBeFocused() const;

    MCAPI bool changeClipState(bool clipped);

    MCAPI void clearControlCollectionFlag();

    MCAPI ::std::shared_ptr<::UIControl> clone(::UIControl* parent) const;

    MCAPI bool containsPoint(::glm::vec2 const& point) const;

    MCAPI void findAllCollectionIndices(::brstd::function_ref<void(::std::string const&, int)> callback);

    MCAPI int findCollectionIndex(::std::string const& collectionName) const;

    MCAPI void foreachRenderableComponents(::brstd::function_ref<void(::RenderableComponent&)> predicate) const;

    MCAPI ::RectangleArea getAABB() const;

    MCAPI bool getAllowClipping() const;

    MCFOLD float getAlpha() const;

    MCAPI ::std::shared_ptr<::UIControl> getAncestorWhere(::brstd::function_ref<bool(::UIControl const&)> predicate);

    MCFOLD ::std::vector<::std::shared_ptr<::UIControl const>> const& getChildren() const;

    MCFOLD ::std::vector<::std::shared_ptr<::UIControl>> const& getChildren();

    MCFOLD uint getClipChangeEventId() const;

    MCAPI ::Vec2 getClipOffset() const;

    MCAPI bool getClipState() const;

    MCAPI bool getClipsChildren() const;

    MCAPI bool getDelayCollectionUpdate() const;

    MCAPI bool getEnableScissorTestForClipping() const;

    MCAPI bool getEnabled() const;

    MCAPI bool getHover() const;

    MCFOLD int getLayer() const;

    MCFOLD ::glm::vec2 const& getMaxSize() const;

    MCFOLD ::glm::vec2 const& getMinSize() const;

    MCAPI ::std::shared_ptr<::UIControl> getModalAncestor();

    MCAPI ::std::weak_ptr<::UIControl> getModalAncestorWeak();

    MCFOLD ::std::string const& getName() const;

    MCAPI ::std::shared_ptr<::UIControl const> getParent() const;

    MCAPI ::std::shared_ptr<::UIControl> getParent();

    MCFOLD ::glm::vec2 const& getParentRelativePosition() const;

    MCAPI ::std::string const getPathedName() const;

    MCAPI ::glm::vec2 const& getPosition() const;

    MCFOLD ::UIPropertyBag const& getPropertyBag() const;

    MCFOLD ::UIPropertyBag& getPropertyBag();

    MCAPI ::UIPropertyBag const& getPropertyBagForChildren() const;

    MCFOLD ::ControlScreenAction& getScreenAction(bool usingForCreation);

    MCAPI bool getSelected() const;

    MCFOLD ::glm::vec2 const& getSize() const;

    MCAPI bool getVisible() const;

    MCFOLD int getZOrder() const;

    MCAPI bool hasClipChangeEvent() const;

    MCAPI bool hasControlCollectionFlag(ushort flag) const;

    MCFOLD bool hasPropertyBag() const;

    MCAPI bool hasRenderableComponent() const;

    MCAPI bool isTemplate() const;

    MCAPI bool isVisibleInTree() const;

    MCAPI void markToRemoveDeadDependencies();

    MCAPI ::std::shared_ptr<::UIControl> moveChild(int index, bool notify);

    MCAPI void notifyBindingsUpdated(
        ::std::vector<::std::string> controlList,
        ::std::string                propertyName,
        bool                         value,
        bool                         siblingScope
    );

    MCAPI void notifyChildAdded();

    MCAPI bool notifyLayoutChange();

    MCAPI void onAdded();

    MCAPI void popBackChild();

    MCAPI void popFrontChild();

    MCAPI void processPropertyBags(
        ::std::unique_ptr<::UIPropertyBag> propertyBag,
        ::std::unique_ptr<::UIPropertyBag> propertyBagForChildren
    );

    MCAPI bool propagateAlpha() const;

    MCAPI void propogateAlphaValue(float alpha) const;

    MCAPI void reloadFromControl(::UIControl const& control);

    MCAPI bool removeChild(::std::shared_ptr<::UIControl> control);

    MCAPI void removeControlCollectionFlag(ushort flag);

    MCAPI bool removeParentByName(::std::string const& name);

    MCAPI void reset(bool recursive, bool shouldClearCollectionFlag);

    MCAPI void setAlpha(float alpha);

    MCAPI void setDelayCollectionUpdate(bool delay);

    MCAPI void setEnabled(bool enabled, bool broadcastEvent);

    MCAPI void setHover(bool hover);

    MCAPI void setIsTemplate(bool isTemplate);

    MCFOLD void setMaxSize(::glm::vec2 const& size);

    MCAPI void setMinSize(::glm::vec2 const& size);

    MCAPI void setModalAncestor(::std::weak_ptr<::UIControl> control);

    MCAPI void setName(::std::string_view name);

    MCAPI void setParentRelativePosition(::glm::vec2 const& position);

    MCAPI void setPropagateAlpha(bool propagateAlpha);

    MCAPI void setPropertyBag(::std::unique_ptr<::UIPropertyBag> propertyBag);

    MCAPI void setPropertyBagForChildren(::std::unique_ptr<::UIPropertyBag> propertyBag);

    MCAPI void setSelected(bool selected);

    MCAPI void setSize(::glm::vec2 const& size);

    MCAPI void setTextToSpeechTriggered(bool value);

    MCAPI void setVisible(bool visible, bool setLayoutChangedFlag, bool doLayout);

    MCAPI void setVisibleInStackPanel(bool visible, bool setLayoutChangedFlag, bool doLayout);

    MCAPI void setVisibleInTree(bool visible);

    MCAPI void setZOrder(int zOrder);

    MCAPI void updateFrameUpdateComponents(::UIFrameUpdateContext& context);

    MCFOLD ::std::weak_ptr<::UIControl> weakRef();

    MCAPI ~UIControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ControlScreenAction& controlScreenAction);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
