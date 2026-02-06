#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ScreenViewCommand.h"
#include "mc/client/gui/screens/interfaces/IScreenController.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ScreenControllerProxy;
class StringHash;
class TaskGroup;
class TaskResult;
struct ActorUniqueID;
struct FocusMoveScreenEventData;
struct InputModeChangeScreenEventData;
struct ItemRendererData;
struct PointerHeldScreenEventData;
struct RawInputScreenEventData;
struct ScreenEvent;
struct TextEditScreenEventData;
struct TextEditSelectedStateChangeEventData;
struct ToggleChangeEventData;
struct UIPropertyBag;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ScreenController : public ::IScreenController {
public:
    // ScreenController inner types declare
    // clang-format off
    struct ButtonEventCallbackKeyHasher;
    // clang-format on

    // ScreenController inner types define
    enum class PreviousButtonStateRequirement : int {
        Any     = 0,
        Down    = 1,
        Up      = 2,
        NotDown = 3,
        NotUp   = 4,
    };

    enum class SliderChangeType : int {
        AnyChange    = 0,
        NotFinalized = 1,
        Finalized    = 2,
    };

    struct ButtonEventCallbackKeyHasher {};

    using FocusMoveEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(::FocusMoveScreenEventData&) const>;

    using InputModeChangedEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(::InputModeChangeScreenEventData&) const>;

    using PointerHeldEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(::PointerHeldScreenEventData&) const>;

    using ButtonEventHandlerCallback = ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const>;

    using TextEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const>;

    using ToggleChangeEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(::ToggleChangeEventData&) const>;

    using TextEditSelectedStateChangeEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditSelectedStateChangeEventData&) const>;

    using SliderChangeEventHandlerCallback = ::brstd::move_only_function<::ui::ViewRequest(int, float) const>;

    using AnimationEventHandlerCallback = ::brstd::move_only_function<::ui::ViewRequest() const>;

    using RawInputEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(::RawInputScreenEventData&) const>;

    using ClippedCollectionEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(int, int, ::UIPropertyBag&) const>;

    using ClipStateChangeEventHandlerCallback =
        ::brstd::move_only_function<::ui::ViewRequest(bool, ::UIPropertyBag&) const>;

    using CustomRendererEventHandlerCallback = ::brstd::move_only_function<::ui::ViewRequest() const>;

    using BindPredicate = ::brstd::move_only_function<bool() const>;

    using BindStringCallback = ::brstd::move_only_function<::std::string() const>;

    using BindBoolCallback = ::brstd::move_only_function<bool() const>;

    using BindIntCallback = ::brstd::move_only_function<int() const>;

    using BindFloatCallback = ::brstd::move_only_function<float() const>;

    using BindGridSizeCallback = ::brstd::move_only_function<::glm::ivec2() const>;

    using BindGlobalGridSizeCallback = ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const>;

    using BindColorCallback = ::brstd::move_only_function<::mce::Color() const>;

    using BindColorWithBagCallback = ::brstd::move_only_function<::mce::Color(::UIPropertyBag&) const>;

    using BindCollectionPredicate = ::brstd::move_only_function<bool(int) const>;

    using BindStringForCollectionCallback = ::brstd::move_only_function<::std::string(int) const>;

    using BindBoolForCollectionCallback = ::brstd::move_only_function<bool(int) const>;

    using BindFloatForCollectionCallback = ::brstd::move_only_function<float(int) const>;

    using BindIntForCollectionCallback = ::brstd::move_only_function<int(int) const>;

    using BindColorForCollectionCallback = ::brstd::move_only_function<::mce::Color(int) const>;

    using BindAnyCollectionPredicate = ::brstd::move_only_function<bool(::std::string const&, int) const>;

    using BindItemDataForAnyCollectionCallback =
        ::brstd::move_only_function<::ItemRendererData(::std::string const&, int) const>;

    using BindStringForAnyCollectionCallback =
        ::brstd::move_only_function<::std::string(::std::string const&, int) const>;

    using BindBoolForAnyCollectionCallback = ::brstd::move_only_function<bool(::std::string const&, int) const>;

    using BindIntForAnyCollectionCallback = ::brstd::move_only_function<int(::std::string const&, int) const>;

    using BindFloatForAnyCollectionCallback = ::brstd::move_only_function<float(::std::string const&, int) const>;

    using BindDoubleForAnyCollectionCallback = ::brstd::move_only_function<double(::std::string const&, int) const>;

    using BindForAnyCollectionCallback =
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const>;

    using BindForCollectionCallback =
        ::brstd::move_only_function<void(::std::string const&, int, ::std::string const&, ::UIPropertyBag&) const>;

    using BindForGlobalCallback = ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const>;

    using ButtonEventCallbackKey = ::std::tuple<uint, ::ButtonState>;

    using ButtonEventCallbackInfo = ::std::tuple<
        ::ScreenController::PreviousButtonStateRequirement,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const>>;

    using ButtonEventCallbackInfoVector = ::std::vector<::std::tuple<
        ::ScreenController::PreviousButtonStateRequirement,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const>>>;

    using ButtonEventCallbackMap = ::std::unordered_map<
        ::std::tuple<uint, ::ButtonState>,
        ::std::vector<::std::tuple<
            ::ScreenController::PreviousButtonStateRequirement,
            ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const>>>,
        ::ScreenController::ButtonEventCallbackKeyHasher,
        ::std::equal_to<::std::tuple<uint, ::ButtonState>>>;

    using ButtonInteractedEventCallbackVector =
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const>>;

    using ButtonInteractedEventCallbackMap = ::std::
        unordered_map<uint, ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const>>>;

    using ToggleChangeEventCallbackVector =
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::ToggleChangeEventData&) const>>;

    using ToggleChangeEventCallbackMap = ::std::unordered_map<
        uint,
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::ToggleChangeEventData&) const>>>;

    using TextEditSelectedStateChangeEventCallbackVector =
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::TextEditSelectedStateChangeEventData&) const>>;

    using TextEditSelectedStateChangeEventCallbackMap = ::std::unordered_map<
        uint,
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::TextEditSelectedStateChangeEventData&) const>>>;

    using SliderChangeEventHandlerCallbackInfo = ::std::
        tuple<::ScreenController::SliderChangeType, ::brstd::move_only_function<::ui::ViewRequest(int, float) const>>;

    using SliderChangeEventCallbackVector = ::std::vector<::std::tuple<
        ::ScreenController::SliderChangeType,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const>>>;

    using SliderChangeEventCallbackMap = ::std::unordered_map<
        uint,
        ::std::vector<::std::tuple<
            ::ScreenController::SliderChangeType,
            ::brstd::move_only_function<::ui::ViewRequest(int, float) const>>>>;

    using TextEventHandlerCallbackInfo =
        ::std::tuple<bool, ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const>>;

    using TextEventHandlerCallbackVector = ::std::vector<
        ::std::tuple<bool, ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const>>>;

    using TextEventHandlerCallbackMap = ::std::unordered_map<
        uint,
        ::std::vector<
            ::std::tuple<bool, ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const>>>>;

    using AnimationEventHandlerCallbackVector = ::std::vector<::brstd::move_only_function<::ui::ViewRequest() const>>;

    using AnimationEventHandlerCallbackMap =
        ::std::unordered_map<uint, ::std::vector<::brstd::move_only_function<::ui::ViewRequest() const>>>;

    using ClippedCollectionEventHandlerCallbackVector =
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(int, int, ::UIPropertyBag&) const>>;

    using ClippedCollectionEventHandlerCallbackMap = ::std::unordered_map<
        uint,
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(int, int, ::UIPropertyBag&) const>>>;

    using ClipStateChangeHandlerCallbackVector =
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(bool, ::UIPropertyBag&) const>>;

    using ClipStateChangeEventHandlerCallbackMap = ::std::unordered_map<
        uint,
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(bool, ::UIPropertyBag&) const>>>;

    using CustomRendererEventHandlerCallbackVector =
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest() const>>;

    using CustomRendererEventHandlerCallbackMap =
        ::std::unordered_map<uint, ::std::vector<::brstd::move_only_function<::ui::ViewRequest() const>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::UIPropertyBag const&)>>
        mControlCreateCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::std::string const&)>>
                                                                           mControlDestroyCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mControlDestroyAllCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mScreenViewSendManualInputEventCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenControllerProxy>>   mProxy;
    ::ll::TypedStorage<1, 1, bool>                                         mCreateInitialized;
    ::ll::TypedStorage<1, 1, bool>                                         mInitialized;
    ::ll::TypedStorage<1, 1, bool>                                         mUsesErrorInfo;
    ::ll::TypedStorage<8, 1408, ::ScreenViewCommand>                       mScreenViewCommand;
    ::ll::TypedStorage<1, 1, bool>                                         mIsScrollingLocked;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::tuple<uint, ::ButtonState>,
            ::std::vector<::std::tuple<
                ::ScreenController::PreviousButtonStateRequirement,
                ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const>>>,
            ::ScreenController::ButtonEventCallbackKeyHasher,
            ::std::equal_to<::std::tuple<uint, ::ButtonState>>>>
        mButtonEventCallbackMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<uint, ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const>>>>
        mButtonInteractedEventCallbackMap;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::ui::ViewRequest(::RawInputScreenEventData&) const>>
        mRawInputEventHandlerCallback;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::FocusMoveScreenEventData&) const>>>
        mFocusMoveEventCallbacks;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::InputModeChangeScreenEventData&) const>>>
        mInputModeChangedEventCallbacks;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::PointerHeldScreenEventData&) const>>>
        mPointerHeldEventCallbacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint,
            ::std::vector<::std::tuple<
                bool,
                ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const>>>>>
        mTextEditEventCallbackMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint,
            ::std::vector<::brstd::move_only_function<::ui::ViewRequest(::ToggleChangeEventData&) const>>>>
        mToggleChangeEventCallbackMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint,
            ::std::vector<
                ::brstd::move_only_function<::ui::ViewRequest(::TextEditSelectedStateChangeEventData&) const>>>>
        mTextEditSelectedStateChangeEventCallbackMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ScreenController>>> mSubControllers;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint,
            ::std::vector<::std::tuple<
                ::ScreenController::SliderChangeType,
                ::brstd::move_only_function<::ui::ViewRequest(int, float) const>>>>>
        mSliderChangeEventCallbackMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint, ::std::vector<::brstd::move_only_function<::ui::ViewRequest() const>>>>
        mAnimationEventCallbackMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint,
            ::std::vector<::brstd::move_only_function<::ui::ViewRequest(int, int, ::UIPropertyBag&) const>>>>
        mClippedCollectionEventCallbackMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint,
            ::std::vector<::brstd::move_only_function<::ui::ViewRequest(bool, ::UIPropertyBag&) const>>>>
        mClipStateChangeEventCallbackMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint, ::std::vector<::brstd::move_only_function<::ui::ViewRequest() const>>>>
        mCustomRendererEventHandlerCallbackMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint, ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&)>>>
        mBindCallbacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint, ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&)>>>
        mCollectionBindCallbacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            uint,
            ::brstd::move_only_function<void(::std::string const&, int, ::std::string const&, ::UIPropertyBag&)>>>
                                                             mAnyCollectionBindCallbacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

    virtual ::std::optional<::std::string> getRoute() const /*override*/;

    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) /*override*/;

    virtual void onOpen();

    virtual void queueTitleNarration();

    virtual void onTerminate();

    virtual void onInit();

    virtual void onDelete();

    virtual bool canExit();

    virtual ::ui::ViewRequest tryExit();

    virtual void onCreation();

    virtual void onReload();

    virtual void onLeave();

    virtual void leaveScreen(::std::string const&);

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual bool bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    virtual void handleLicenseChanged();

    virtual void setAssociatedBlockPos(::BlockPos const& pos);

    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const unqiueID);

    virtual void setSuspendInput(bool);

    virtual void setSuspendDirectionalInput(bool);

    virtual void setViewCommand(::ScreenViewCommand const& callback);

    virtual void addStaticScreenVars(::Json::Value& globalVars);

    virtual ::std::string getAdditionalScreenInfo() const;

    virtual ::std::string getTelemetryOverride() const;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    virtual ::ui::SceneType getSceneType() const;

    virtual int getScreenVersion() const;

    virtual uint getSceneId() const;

    virtual ::ScreenControllerProxy* getProxy();

    virtual void onEntered();

    virtual void onScreenPushedAbove();

    virtual void onEntering();

    virtual bool _doesScreenHaveExitBehavior() const;

    virtual bool _isContainerScreen() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenController(bool useTaskGroup);

    MCAPI uint _getNameId(::std::string const& name) const;

    MCAPI ::ui::ViewRequest _handleButtonEvent(::ScreenEvent& screenEvent);

    MCAPI ::ui::ViewRequest _handleEvent(::ScreenEvent& screenEvent);

    MCAPI void _registerSubController(::std::shared_ptr<::ScreenController> controller);

    MCAPI void bindBool(
        ::StringHash const&                       bindingName,
        ::brstd::move_only_function<bool() const> callback,
        ::brstd::move_only_function<bool() const> condition
    );

    MCAPI void bindBoolForAnyCollection(
        ::StringHash const&                                                bindingName,
        ::brstd::move_only_function<bool(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCAPI void bindBoolForCollection(
        ::StringHash const&                          collectionName,
        ::StringHash const&                          bindingName,
        ::brstd::move_only_function<bool(int) const> callback,
        ::brstd::move_only_function<bool(int) const> condition
    );

    MCAPI void bindColor(
        ::StringHash const&                               bindingName,
        ::brstd::move_only_function<::mce::Color() const> callback,
        ::brstd::move_only_function<bool() const>         condition
    );

    MCAPI void bindColorForCollection(
        ::StringHash const&                                  collectionName,
        ::StringHash const&                                  bindingName,
        ::brstd::move_only_function<::mce::Color(int) const> callback,
        ::brstd::move_only_function<bool(int) const>         condition
    );

    MCAPI void bindColorWithPropertyBag(
        ::StringHash const&                                               bindingName,
        ::brstd::move_only_function<::mce::Color(::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool() const>                         condition
    );

    MCAPI void bindDoubleForAnyCollection(
        ::StringHash const&                                                  bindingName,
        ::brstd::move_only_function<double(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>   condition
    );

    MCAPI void bindFloat(
        ::StringHash const&                        bindingName,
        ::brstd::move_only_function<float() const> callback,
        ::brstd::move_only_function<bool() const>  condition
    );

    MCAPI void bindFloatForAnyCollection(
        ::StringHash const&                                                 bindingName,
        ::brstd::move_only_function<float(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>  condition
    );

    MCAPI void bindFloatForCollection(
        ::StringHash const&                           collectionName,
        ::StringHash const&                           bindingName,
        ::brstd::move_only_function<float(int) const> callback,
        ::brstd::move_only_function<bool(int) const>  condition
    );

    MCAPI void bindForAnyCollection(
        ::StringHash const&                                                                  bindingName,
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>                   condition
    );

    MCAPI void bindForAnyCollection(
        ::StringHash const& bindingName,
        ::brstd::move_only_function<void(::std::string const&, int, ::std::string const&, ::UIPropertyBag&) const>
                                                                           callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCAPI void bindForCollection(
        ::StringHash const&                                                                  collectionName,
        ::StringHash const&                                                                  bindingName,
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const> func
    );

    MCAPI void bindForGlobal(
        ::StringHash const&                                                             bindingName,
        ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const> func
    );

    MCAPI void bindForGlobalGridSize(
        ::StringHash const&                                                             bindingName,
        ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool() const>                                       condition
    );

    MCAPI void bindGridSize(
        ::StringHash const&                               bindingName,
        ::brstd::move_only_function<::glm::ivec2() const> callback,
        ::brstd::move_only_function<bool() const>         condition
    );

    MCAPI void bindInt(
        ::StringHash const&                       bindingName,
        ::brstd::move_only_function<int() const>  callback,
        ::brstd::move_only_function<bool() const> condition
    );

    MCAPI void bindIntForAnyCollection(
        ::StringHash const&                                                bindingName,
        ::brstd::move_only_function<int(::std::string const&, int) const>  callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCAPI void bindIntForCollection(
        ::StringHash const&                          collectionName,
        ::StringHash const&                          bindingName,
        ::brstd::move_only_function<int(int) const>  callback,
        ::brstd::move_only_function<bool(int) const> condition
    );

    MCAPI void bindItemDataForAnyCollection(
        ::StringHash const&                                                              bindingName,
        ::brstd::move_only_function<::ItemRendererData(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>               condition
    );

    MCAPI void bindString(
        ::StringHash const&                                bindingName,
        ::brstd::move_only_function<::std::string() const> callback,
        ::brstd::move_only_function<bool() const>          condition
    );

    MCAPI void bindStringForAnyCollection(
        ::StringHash const&                                                         bindingName,
        ::brstd::move_only_function<::std::string(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>          condition
    );

    MCAPI void bindStringForCollection(
        ::StringHash const&                                   collectionName,
        ::StringHash const&                                   bindingName,
        ::brstd::move_only_function<::std::string(int) const> callback,
        ::brstd::move_only_function<bool(int) const>          condition
    );

    MCAPI bool hasFinishedAsyncTasks() const;

    MCAPI void queueAsyncTask(::brstd::move_only_function<::TaskResult()>&& task, ::std::function<void()>&& callback);

    MCAPI void
    registerAnimationEventHandler(uint eventId, ::brstd::move_only_function<::ui::ViewRequest() const> callback);

    MCAPI void registerButtonEventHandler(
        uint                                                                   buttonId,
        ::ButtonState                                                          currentState,
        ::ButtonState                                                          previousState,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerButtonEventHandler(
        uint                                                                   buttonId,
        ::ButtonState                                                          currentState,
        ::ScreenController::PreviousButtonStateRequirement                     previousStateRequirement,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerButtonInteractedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerButtonPressedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerButtonReleasedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerClipStateChangeEventHandler(
        uint                                                                         eventId,
        ::brstd::move_only_function<::ui::ViewRequest(bool, ::UIPropertyBag&) const> callback
    );

    MCAPI void registerClippedCollectionEventHandler(
        ::StringHash const&                                                              collectionName,
        ::brstd::move_only_function<::ui::ViewRequest(int, int, ::UIPropertyBag&) const> callback
    );

    MCAPI void
    registerCustomRendererEventHandler(uint eventId, ::brstd::move_only_function<::ui::ViewRequest() const> callback);

    MCAPI void registerFocusMovedEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::FocusMoveScreenEventData&) const> callback
    );

    MCAPI void registerInputModechangedEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::InputModeChangeScreenEventData&) const> callback
    );

    MCAPI void registerPointerHeldEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::PointerHeldScreenEventData&) const> callback
    );

    MCAPI void registerSliderChangedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCAPI void registerSliderFinishedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCAPI void registerSliderNotFinishedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCAPI void registerTextEditChangedEventHandler(
        uint                                                                                  buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCAPI void registerTextEditFinishedEventHandler(
        uint                                                                                  buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCAPI void registerTextEditSelectedStateChangeEventHandler(
        uint                                                                                          buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditSelectedStateChangeEventData&) const> callback
    );

    MCAPI void registerTextEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCAPI void registerToggleChangeEventHandler(
        uint                                                                           buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::ToggleChangeEventData&) const> callback
    );

    MCAPI void
    setControlFactoryCreateCallback(::std::function<void(::std::string const&, ::UIPropertyBag const&)> callback);

    MCAPI void setControlFactoryDestroyAllCallback(::std::function<void(::std::string const&)> callback);

    MCAPI void
    setControlFactoryDestroyCallback(::std::function<void(::std::string const&, ::std::string const&)> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool useTaskGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD void $preFrameTick();

    MCAPI ::ui::ViewRequest $handleEvent(::ScreenEvent& screenEvent);

    MCFOLD ::std::optional<::std::string> $getRoute() const;

    MCFOLD void $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&);

    MCAPI void $onOpen();

    MCAPI void $queueTitleNarration();

    MCFOLD void $onTerminate();

    MCAPI void $onInit();

    MCFOLD void $onDelete();

    MCAPI bool $canExit();

    MCFOLD ::ui::ViewRequest $tryExit();

    MCAPI void $onCreation();

    MCFOLD void $onReload();

    MCAPI void $onLeave();

    MCFOLD void $leaveScreen(::std::string const&);

    MCAPI bool $bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCFOLD void $handleLicenseChanged();

    MCFOLD void $setAssociatedBlockPos(::BlockPos const& pos);

    MCFOLD void $setAssociatedEntityUniqueID(::ActorUniqueID const unqiueID);

    MCFOLD void $setSuspendInput(bool);

    MCFOLD void $setSuspendDirectionalInput(bool);

    MCAPI void $setViewCommand(::ScreenViewCommand const& callback);

    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::std::string $getAdditionalScreenInfo() const;

    MCFOLD ::std::string $getTelemetryOverride() const;

    MCFOLD void $addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCFOLD int $getScreenVersion() const;

    MCFOLD uint $getSceneId() const;

    MCFOLD ::ScreenControllerProxy* $getProxy();

    MCFOLD void $onEntered();

    MCFOLD void $onScreenPushedAbove();

    MCFOLD void $onEntering();

    MCFOLD bool $_doesScreenHaveExitBehavior() const;

    MCFOLD bool $_isContainerScreen() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
