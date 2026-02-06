#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/oreui/routing/RouteAction.h"
#include "mc/client/gui/screens/interfaces/ISceneStack.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class CachedScenes;
class Options;
class SceneStackProxy;
class TaskGroup;
class UIEventCoordinator;
struct ScreenThreshold;
struct TextCharEventData;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class SceneStack : public ::ISceneStack {
public:
    // SceneStack inner types declare
    // clang-format off
    class SceneStackEvent;
    class PushScreenEvent;
    class PopScreenEvent;
    class PopRangeOfTypeScreenEvent;
    class FlushScreenEvent;
    class ReloadScreenEvent;
    // clang-format on

    // SceneStack inner types define
    class SceneStackEvent {
    public:
        // SceneStackEvent inner types define
        enum class EventType : int {
            Push           = 0,
            Pop            = 1,
            PopRangeOfType = 2,
            Flush          = 3,
            Reload         = 4,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SceneStack::SceneStackEvent::EventType> mType;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SceneStackEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class PushScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AbstractScene>>    mScene;
        ::ll::TypedStorage<8, 48, ::std::optional<::OreUI::RouteAction>> mRouteAction;
        // NOLINTEND

    public:
        // prevent constructor by default
        PushScreenEvent();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PushScreenEvent() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI
        PushScreenEvent(::std::shared_ptr<::AbstractScene> scene, ::std::optional<::OreUI::RouteAction> routeAction);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::shared_ptr<::AbstractScene> scene, ::std::optional<::OreUI::RouteAction> routeAction);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class PopScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                    mPopCount;
        ::ll::TypedStorage<8, 48, ::std::optional<::OreUI::RouteAction>> mRouteAction;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>          mExpectedScreenNames;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PopScreenEvent() /*override*/ = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class PopRangeOfTypeScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneType;
        ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneTypeExclusions;
        ::ll::TypedStorage<4, 4, int>             mPopCount;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PopRangeOfTypeScreenEvent() /*override*/ = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class FlushScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                     mIgnoreNotFlushableFlag;
        ::ll::TypedStorage<1, 1, bool>                     mIgnoreTransitions;
        ::ll::TypedStorage<8, 64, ::std::function<void()>> mPostFlushCallback;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FlushScreenEvent() /*override*/ = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class ReloadScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ReloadScreenEvent() /*override*/ = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ISceneStack::SceneElement>>                      mScreenStack;
    ::ll::TypedStorage<8, 8, ::CachedScenes&>                                                  mCachedScreens;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SceneStack::SceneStackEvent>>> mStackEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::SceneStack::SceneStackEvent>>> mQueuedStackEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenThreshold>>                                mScreenThresholds;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                   mDestroyScreenTaskGroup;
    ::ll::TypedStorage<4, 4, int>                                                              mActiveStackSize;
    ::ll::TypedStorage<4, 4, int>                                 mScheduledScreenPushCount;
    ::ll::TypedStorage<4, 4, int>                                 mScheduledScreenPopCount;
    ::ll::TypedStorage<1, 1, bool>                                mScreenNeedsEntrance;
    ::ll::TypedStorage<8, 32, ::std::string>                      mLastPoppedScreenName;
    ::ll::TypedStorage<1, 1, bool>                                mChangedThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                mScreenIsTicking;
    ::ll::TypedStorage<1, 1, bool>                                mReloadScenesOnNextPop;
    ::ll::TypedStorage<1, 1, bool>                                mDeferUpdatesUntilNextTick;
    ::ll::TypedStorage<1, 1, bool>                                mBufferTextCharEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::TextCharEventData>> mBufferedTextCharEventData;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Options>>         mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mAsyncLoadOptionSubscription;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mSceneStackDestroyedPublisher;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<void*, ::std::function<void(::AbstractScene&)>>>>
        mSceneChangeCallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<void*, ::std::function<void(::AbstractScene&)>>>>
        mPrePushSceneCallbacks;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::pair<
            void*,
            ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>>>>
        mPushSceneCallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<void*, ::std::function<void(::AbstractScene*)>>>>
        mPrePopSceneCallbacks;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::pair<
            void*,
            ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>>>>
                                                                                   mPopSceneCallbacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SceneStackProxy>>                 mProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator>> mUIEventCoordinator;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                             mGetSuspended;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStack& operator=(SceneStack const&);
    SceneStack(SceneStack const&);
    SceneStack();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SceneStack() /*override*/;

    virtual void reload() /*override*/;

    virtual void setOptions(::std::weak_ptr<::Options> options) /*override*/;

    virtual void
    registerSceneChangeCallback(void* token, ::std::function<void(::AbstractScene&)> sceneChangeCallback) /*override*/;

    virtual void unregisterSceneChangeCallback(void* token) /*override*/;

    virtual void registerPrePushSceneCallback(
        void*                                   token,
        ::std::function<void(::AbstractScene&)> prePushSceneCallback
    ) /*override*/;

    virtual void unregisterPrePushSceneCallback(void* token) /*override*/;

    virtual void registerPushSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>
            pushSceneCallback
    ) /*override*/;

    virtual void unregisterPushSceneCallback(void* token) /*override*/;

    virtual void
    registerPrePopSceneCallback(void* token, ::std::function<void(::AbstractScene*)> prePopSceneCallback) /*override*/;

    virtual void unregisterPrePopSceneCallback(void* token) /*override*/;

    virtual void registerPopSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>
            popSceneCallback
    ) /*override*/;

    virtual void unregisterPopSceneCallback(void* token) /*override*/;

    virtual void forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        bool                                          tickedLastFrame,
        bool                                          splitscreenRenderBypassThisFrame
    ) /*override*/;

    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown) /*override*/;

    virtual void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const
        /*override*/;

    virtual void forEachAlwaysAcceptInputScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::AbstractScene const*                        ignoreScreen
    ) /*override*/;

    virtual void
    forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(::AbstractScene&)> callback) /*override*/;

    virtual void pushScreenWithRouteAction(
        ::std::shared_ptr<::AbstractScene> newScreen,
        ::OreUI::RouteAction const&        routeAction
    ) /*override*/;

    virtual void popScreenWithRouteAction(::OreUI::RouteAction const& routeAction) /*override*/;

    virtual void pushScreen(::std::shared_ptr<::AbstractScene> newScreen, bool flush) /*override*/;

    virtual void schedulePopScreen(int totalPopNumber) /*override*/;

    virtual void
    schedulePopScreenWithExpectedNames(::std::vector<::std::string> const& expectedScreenNames) /*override*/;

    virtual void flushStack(
        bool                    immediate,
        bool                    ignoreNotFlushableFlag,
        bool                    ignoreTransitions,
        ::std::function<void()> postFlushCallback
    ) /*override*/;

    virtual void deferUpdatesUntilNextTick() /*override*/;

    virtual ::std::optional<uint64> getFirstSceneIndexOfSceneType(::ui::SceneType sceneType) const /*override*/;

    virtual bool popScreensBackTo(::ui::SceneType const sceneType) /*override*/;

    virtual bool popScreensBackToFirstInstanceOf(::ui::SceneType const sceneType) /*override*/;

    virtual bool popTopScreensOfType(::ui::SceneType const sceneType) /*override*/;

    virtual bool update() /*override*/;

    virtual void resetScreenChangeDirtyFlag() /*override*/;

    virtual bool hasChangedThisFrame() const /*override*/;

    virtual bool isEmpty() const /*override*/;

    virtual uint64 getSize() const /*override*/;

    virtual void setScreenTickingFlag(bool screenIsTicking) /*override*/;

    virtual bool getScreenTickingFlag() const /*override*/;

    virtual ::ui::SceneType getNonTerminatingSceneType() const /*override*/;

    virtual ::std::vector<::std::string> getScreenNames() const /*override*/;

    virtual ::std::vector<::std::string> getScreenTelemetryNames() const /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual ::std::string getScreenTelemetry() const /*override*/;

    virtual ::std::string const& getLastPoppedScreenName() const /*override*/;

    virtual void handleLicenseChanged() /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::AbstractScene* getTopScene() /*override*/;

    virtual ::AbstractScene const* getTopScene() const /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> getTopSceneShared() const /*override*/;

    virtual ::AbstractScene* getActiveScene() /*override*/;

    virtual ::AbstractScene const* getActiveScene() const /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> getSharedNonTerminatingActiveScene() /*override*/;

    virtual ::std::shared_ptr<::AbstractScene const> const getSharedNonTerminatingActiveScene() const /*override*/;

    virtual ::gsl::span<::ISceneStack::SceneElement const> getScreenStackView() const /*override*/;

    virtual int getScheduledPopCount() const /*override*/;

    virtual bool isScreenReplaceable() const /*override*/;

    virtual void handleTextChar(::std::string const& inputUtf8) /*override*/;

    virtual void setBufferTextCharEvents(bool pushTextCharEvents) /*override*/;

    virtual bool isBufferingTextCharEvents() const /*override*/;

    virtual bool isOnSceneStack(::ui::SceneType sceneType) const /*override*/;

    virtual bool isOnSceneStack(::std::string const& screenName) const /*override*/;

    virtual ::SceneStackProxy* getProxy() /*override*/;

    virtual bool hasScheduledScreens() const /*override*/;

    virtual bool hasScheduledEvents() const /*override*/;

    virtual void setScreenThreshold(::ScreenThreshold const& screenThreshold) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerSceneStackDestroyedListener(::std::function<void()> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SceneStack(
        ::CachedScenes&                                            cachedScenes,
        ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> const& uiEventCoordinator,
        ::std::function<bool()> const&                             getSuspended
    );

    MCAPI bool _animationsEnabled() const;

    MCAPI bool _handleFlushEvent(::SceneStack::FlushScreenEvent const& flushEvent);

    MCAPI bool _handlePopRangeOfScreensEvent(::SceneStack::PopRangeOfTypeScreenEvent& popRangeEvent);

    MCAPI bool _handlePushEvent(::SceneStack::PushScreenEvent& pushEvent);

    MCAPI bool _popScreens(
        int&                                  popCount,
        bool                                  ignoreTransitions,
        ::std::optional<::OreUI::RouteAction> routeAction,
        ::std::vector<::std::string> const&   expectedScreenNames
    );

    MCAPI bool _scenesAllIgnoreAsTop(int count) const;

    MCAPI void _schedulePopScreen(
        int                                   totalPopNumber,
        ::std::optional<::OreUI::RouteAction> routeAction,
        ::std::vector<::std::string> const&   expectedScreenNames
    );

    MCAPI void _schedulePushScreen(
        ::std::shared_ptr<::AbstractScene>    newScreen,
        bool                                  flush,
        ::std::optional<::OreUI::RouteAction> routeAction
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::std::function<::AbstractScene*(int)>        getScreen,
        bool,
        bool   splitscreenRenderBypassThisFrame,
        uint64 topStackIndex,
        uint64 startIndex,
        uint64 endIndex,
        bool   renderDrawLastScreens
    );

    MCAPI static void forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::std::function<::AbstractScene*(int)>        getScreen,
        bool                                          tickedLastFrame,
        bool                                          splitscreenRenderBypassThisFrame,
        int                                           size
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::CachedScenes&                                            cachedScenes,
        ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> const& uiEventCoordinator,
        ::std::function<bool()> const&                             getSuspended
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reload();

    MCAPI void $setOptions(::std::weak_ptr<::Options> options);

    MCAPI void $registerSceneChangeCallback(void* token, ::std::function<void(::AbstractScene&)> sceneChangeCallback);

    MCAPI void $unregisterSceneChangeCallback(void* token);

    MCAPI void $registerPrePushSceneCallback(void* token, ::std::function<void(::AbstractScene&)> prePushSceneCallback);

    MCAPI void $unregisterPrePushSceneCallback(void* token);

    MCAPI void $registerPushSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>
            pushSceneCallback
    );

    MCAPI void $unregisterPushSceneCallback(void* token);

    MCAPI void $registerPrePopSceneCallback(void* token, ::std::function<void(::AbstractScene*)> prePopSceneCallback);

    MCAPI void $unregisterPrePopSceneCallback(void* token);

    MCAPI void $registerPopSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>
            popSceneCallback
    );

    MCAPI void $unregisterPopSceneCallback(void* token);

    MCAPI void $forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        bool                                          tickedLastFrame,
        bool                                          splitscreenRenderBypassThisFrame
    );

    MCFOLD void $forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown);

    MCFOLD void $forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const;

    MCAPI void $forEachAlwaysAcceptInputScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::AbstractScene const*                        ignoreScreen
    );

    MCAPI void $forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(::AbstractScene&)> callback);

    MCAPI void
    $pushScreenWithRouteAction(::std::shared_ptr<::AbstractScene> newScreen, ::OreUI::RouteAction const& routeAction);

    MCAPI void $popScreenWithRouteAction(::OreUI::RouteAction const& routeAction);

    MCAPI void $pushScreen(::std::shared_ptr<::AbstractScene> newScreen, bool flush);

    MCAPI void $schedulePopScreen(int totalPopNumber);

    MCAPI void $schedulePopScreenWithExpectedNames(::std::vector<::std::string> const& expectedScreenNames);

    MCAPI void $flushStack(
        bool                    immediate,
        bool                    ignoreNotFlushableFlag,
        bool                    ignoreTransitions,
        ::std::function<void()> postFlushCallback
    );

    MCAPI void $deferUpdatesUntilNextTick();

    MCAPI ::std::optional<uint64> $getFirstSceneIndexOfSceneType(::ui::SceneType sceneType) const;

    MCAPI bool $popScreensBackTo(::ui::SceneType const sceneType);

    MCAPI bool $popScreensBackToFirstInstanceOf(::ui::SceneType const sceneType);

    MCAPI bool $popTopScreensOfType(::ui::SceneType const sceneType);

    MCAPI bool $update();

    MCAPI void $resetScreenChangeDirtyFlag();

    MCFOLD bool $hasChangedThisFrame() const;

    MCAPI bool $isEmpty() const;

    MCAPI uint64 $getSize() const;

    MCAPI void $setScreenTickingFlag(bool screenIsTicking);

    MCAPI bool $getScreenTickingFlag() const;

    MCAPI ::ui::SceneType $getNonTerminatingSceneType() const;

    MCAPI ::std::vector<::std::string> $getScreenNames() const;

    MCAPI ::std::vector<::std::string> $getScreenTelemetryNames() const;

    MCAPI ::std::string $getScreenName() const;

    MCAPI ::std::string $getScreenTelemetry() const;

    MCFOLD ::std::string const& $getLastPoppedScreenName() const;

    MCAPI void $handleLicenseChanged();

    MCFOLD ::AbstractScene* $getTopScene();

    MCFOLD ::AbstractScene const* $getTopScene() const;

    MCAPI ::std::shared_ptr<::AbstractScene> $getTopSceneShared() const;

    MCFOLD ::AbstractScene* $getActiveScene();

    MCFOLD ::AbstractScene const* $getActiveScene() const;

    MCFOLD ::std::shared_ptr<::AbstractScene> $getSharedNonTerminatingActiveScene();

    MCFOLD ::std::shared_ptr<::AbstractScene const> const $getSharedNonTerminatingActiveScene() const;

    MCAPI ::gsl::span<::ISceneStack::SceneElement const> $getScreenStackView() const;

    MCFOLD int $getScheduledPopCount() const;

    MCAPI bool $isScreenReplaceable() const;

    MCAPI void $handleTextChar(::std::string const& inputUtf8);

    MCAPI void $setBufferTextCharEvents(bool pushTextCharEvents);

    MCAPI bool $isBufferingTextCharEvents() const;

    MCAPI bool $isOnSceneStack(::ui::SceneType sceneType) const;

    MCAPI bool $isOnSceneStack(::std::string const& screenName) const;

    MCFOLD ::SceneStackProxy* $getProxy();

    MCAPI bool $hasScheduledScreens() const;

    MCAPI bool $hasScheduledEvents() const;

    MCAPI void $setScreenThreshold(::ScreenThreshold const& screenThreshold);

    MCAPI ::Bedrock::PubSub::Subscription $registerSceneStackDestroyedListener(::std::function<void()> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
