#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/oreui/routing/RouteAction.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class OptionRegistry;
class SceneStackProxy;
struct ScreenThreshold;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ISceneStack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ISceneStack inner types declare
    // clang-format off
    struct SceneElement;
    struct PendingSceneStackChange;
    // clang-format on

    // ISceneStack inner types define
    enum class FlushMode : int {
        Queued                       = 0,
        Immediate                    = 1,
        QueuedIncludingNonFlushable  = 2,
        QueuedIgnoringTransitions    = 3,
        ImmediateIgnoringTransitions = 4,
        Teardown                     = 5,
    };

    struct SceneElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AbstractScene>> mScene;
        ::ll::TypedStorage<1, 1, bool>                                mHasCompletedPrepop;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SceneElement() = default;
        // NOLINTEND
    };

    struct PendingSceneStackChange {
    public:
        // PendingSceneStackChange inner types define
        enum class Kind : int {
            Push           = 0,
            Pop            = 1,
            PopRangeOfType = 2,
            Flush          = 3,
            RouteAction    = 4,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ISceneStack::PendingSceneStackChange::Kind> mKind;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AbstractScene>>          mScene;
        ::ll::TypedStorage<8, 48, ::std::optional<::OreUI::RouteAction>>       mRouteAction;
        ::ll::TypedStorage<4, 4, int>                                          mPopCount;
        ::ll::TypedStorage<1, 1, bool>                                         mFlushIgnoreNotFlushable;
        ::ll::TypedStorage<4, 4, ::ui::SceneType>                              mSceneType;
        ::ll::TypedStorage<4, 4, ::ui::SceneType>                              mSceneTypeExclusions;
        // NOLINTEND
    };

    using SceneChangeCallback = ::std::function<void(::AbstractScene&)>;

    using PrePushSceneCallback = ::std::function<void(::AbstractScene&)>;

    using PushSceneCallback =
        ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>;

    using PrePopSceneCallback = ::std::function<void(::AbstractScene*)>;

    using PopSceneCallback =
        ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>;

    using PopRangeSceneCallback = ::std::function<void(::std::vector<::std::shared_ptr<::AbstractScene>> const&)>;

    using PostFlushCallback = ::std::function<void()>;

    using RouteActionCallback = ::std::function<void(::OreUI::RouteAction const&)>;

    using VoidSceneVisitor = ::brstd::function_ref<void(::AbstractScene&)>;

    using BoolSceneVisitor = ::brstd::function_ref<bool(::AbstractScene&)>;

    using BoolConstSceneVisitor = ::brstd::function_ref<bool(::AbstractScene const&)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISceneStack() /*override*/ = default;

    virtual void reload() = 0;

    virtual void setOptions(::std::weak_ptr<::OptionRegistry> options) = 0;

    virtual void
    registerSceneChangeCallback(void* token, ::std::function<void(::AbstractScene&)> sceneChangeCallback) = 0;

    virtual void unregisterSceneChangeCallback(void* token) = 0;

    virtual void
    registerPrePushSceneCallback(void* token, ::std::function<void(::AbstractScene&)> prePushSceneCallback) = 0;

    virtual void unregisterPrePushSceneCallback(void* token) = 0;

    virtual void registerPushSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>
            pushSceneCallback
    ) = 0;

    virtual void unregisterPushSceneCallback(void* token) = 0;

    virtual void
    registerPrePopSceneCallback(void* token, ::std::function<void(::AbstractScene*)> prePopSceneCallback) = 0;

    virtual void unregisterPrePopSceneCallback(void* token) = 0;

    virtual void registerPopSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>
            popSceneCallback
    ) = 0;

    virtual void unregisterPopSceneCallback(void* token) = 0;

    virtual void registerPopRangeSceneCallback(
        void*                                                                           token,
        ::std::function<void(::std::vector<::std::shared_ptr<::AbstractScene>> const&)> popRangeSceneCallback
    ) = 0;

    virtual void unregisterPopRangeSceneCallback(void* token) = 0;

    virtual void registerRouteActionCallback(
        void*                                              token,
        ::std::function<void(::OreUI::RouteAction const&)> routeActionCallback
    ) = 0;

    virtual void unregisterRouteActionCallback(void* token) = 0;

    virtual void forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        bool                                          tickedLastFrame,
        bool                                          splitscreenRenderBypassThisFrame
    ) = 0;

    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown) = 0;

    virtual void
    forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const = 0;

    virtual void forEachAlwaysAcceptInputScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::AbstractScene const*                        ignoreScreen
    ) = 0;

    virtual void forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(::AbstractScene&)> callback) = 0;

    virtual void pushScreenWithRouteAction(
        ::std::shared_ptr<::AbstractScene> newScreen,
        ::OreUI::RouteAction const&        routeAction
    ) = 0;

    virtual void popScreenWithRouteAction(::OreUI::RouteAction const& routeAction) = 0;

    virtual void scheduleRouteAction(::OreUI::RouteAction const& routeAction) = 0;

    virtual void pushScreen(::std::shared_ptr<::AbstractScene> newScreen, bool flush) = 0;

    virtual void schedulePopScreen(int totalPopNumber) = 0;

    virtual void schedulePopScreenWithExpectedNames(::std::vector<::std::string> const& expectedScreenNames) = 0;

    virtual void flushStack(::ISceneStack::FlushMode mode, ::std::function<void()> postFlushCallback) = 0;

    virtual void deferUpdatesUntilNextTick() = 0;

    virtual ::std::optional<uint64> getFirstSceneIndexOfSceneType(::ui::SceneType sceneType) const = 0;

    virtual bool popScreensBackTo(::ui::SceneType const sceneType) = 0;

    virtual bool popScreensBackToFirstInstanceOf(::ui::SceneType const sceneType) = 0;

    virtual bool popTopScreensOfType(::ui::SceneType const sceneType) = 0;

    virtual bool update() = 0;

    virtual void resetScreenChangeDirtyFlag() = 0;

    virtual bool hasChangedThisFrame() const = 0;

    virtual bool isEmpty() const = 0;

    virtual uint64 getSize() const = 0;

    virtual void setScreenTickingFlag(bool screenIsTicking) = 0;

    virtual bool getScreenTickingFlag() const = 0;

    virtual ::ui::SceneType getNonTerminatingSceneType() const = 0;

    virtual ::std::vector<::std::string> getScreenNames() const = 0;

    virtual ::std::vector<::std::string> getScreenTelemetryNames() const = 0;

    virtual ::std::string getScreenName() const = 0;

    virtual ::std::string getScreenTelemetry() const = 0;

    virtual ::std::string const& getLastPoppedScreenName() const = 0;

    virtual void handleLicenseChanged() = 0;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) = 0;

    virtual ::AbstractScene* getTopScene() = 0;

    virtual ::AbstractScene const* getTopScene() const = 0;

    virtual ::std::shared_ptr<::AbstractScene> getTopSceneShared() const = 0;

    virtual ::AbstractScene* getActiveScene() = 0;

    virtual ::AbstractScene const* getActiveScene() const = 0;

    virtual ::std::shared_ptr<::AbstractScene> getSharedNonTerminatingActiveScene() = 0;

    virtual ::std::shared_ptr<::AbstractScene const> const getSharedNonTerminatingActiveScene() const = 0;

    virtual ::gsl::span<::ISceneStack::SceneElement const> getScreenStackView() const = 0;

    virtual ::std::vector<::ISceneStack::PendingSceneStackChange> getPendingSceneStackChanges() const = 0;

    virtual int getScheduledPopCount() const = 0;

    virtual bool isScreenReplaceable() const = 0;

    virtual void handleTextChar(::std::string const& inputUtf8) = 0;

    virtual void setBufferTextCharEvents(bool pushTextCharEvents) = 0;

    virtual bool isBufferingTextCharEvents() const = 0;

    virtual bool isOnSceneStack(::ui::SceneType sceneType) const = 0;

    virtual bool isOnSceneStack(::std::string const& screenName) const = 0;

    virtual ::SceneStackProxy* getProxy() = 0;

    virtual bool hasScheduledScreens() const = 0;

    virtual bool hasScheduledEvents() const = 0;

    virtual void setScreenThreshold(::ScreenThreshold const& screenThreshold) = 0;

    virtual ::Bedrock::PubSub::Subscription registerSceneStackDestroyedListener(::std::function<void()> callback) = 0;
    // NOLINTEND
};
