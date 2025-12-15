#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/interfaces/ISceneStack.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class Options;
class SceneStackProxy;
class UIEventCoordinator;
struct CachedScenes;
struct ScreenThreshold;
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI { struct RouteAction; }
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
        ::ll::UntypedStorage<4, 4> mUnkbf0ade;
        // NOLINTEND

    public:
        // prevent constructor by default
        SceneStackEvent& operator=(SceneStackEvent const&);
        SceneStackEvent(SceneStackEvent const&);
        SceneStackEvent();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SceneStackEvent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        ::ll::UntypedStorage<8, 16> mUnk6890e8;
        ::ll::UntypedStorage<8, 48> mUnk3c31da;
        // NOLINTEND

    public:
        // prevent constructor by default
        PushScreenEvent& operator=(PushScreenEvent const&);
        PushScreenEvent(PushScreenEvent const&);
        PushScreenEvent();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PushScreenEvent() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI
        PushScreenEvent(::std::shared_ptr<::AbstractScene> scene, ::std::optional<::OreUI::RouteAction> routeAction);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::shared_ptr<::AbstractScene> scene, ::std::optional<::OreUI::RouteAction> routeAction);
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
        ::ll::UntypedStorage<4, 4>  mUnkb9f189;
        ::ll::UntypedStorage<8, 48> mUnkf2b075;
        ::ll::UntypedStorage<8, 24> mUnk33c61e;
        // NOLINTEND

    public:
        // prevent constructor by default
        PopScreenEvent& operator=(PopScreenEvent const&);
        PopScreenEvent(PopScreenEvent const&);
        PopScreenEvent();

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
        ::ll::UntypedStorage<4, 4> mUnk479f96;
        ::ll::UntypedStorage<4, 4> mUnk7f216e;
        ::ll::UntypedStorage<4, 4> mUnk50a00e;
        // NOLINTEND

    public:
        // prevent constructor by default
        PopRangeOfTypeScreenEvent& operator=(PopRangeOfTypeScreenEvent const&);
        PopRangeOfTypeScreenEvent(PopRangeOfTypeScreenEvent const&);
        PopRangeOfTypeScreenEvent();

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
        ::ll::UntypedStorage<1, 1>  mUnkc65d86;
        ::ll::UntypedStorage<1, 1>  mUnk7756d7;
        ::ll::UntypedStorage<8, 64> mUnk53064f;
        // NOLINTEND

    public:
        // prevent constructor by default
        FlushScreenEvent& operator=(FlushScreenEvent const&);
        FlushScreenEvent(FlushScreenEvent const&);
        FlushScreenEvent();

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
    ::ll::UntypedStorage<8, 24>  mUnkbfb09b;
    ::ll::UntypedStorage<8, 8>   mUnk8dcffd;
    ::ll::UntypedStorage<8, 24>  mUnkf386a2;
    ::ll::UntypedStorage<8, 24>  mUnkd84588;
    ::ll::UntypedStorage<8, 24>  mUnk5ef523;
    ::ll::UntypedStorage<8, 8>   mUnke994ec;
    ::ll::UntypedStorage<4, 4>   mUnk9854ed;
    ::ll::UntypedStorage<4, 4>   mUnk3800f4;
    ::ll::UntypedStorage<4, 4>   mUnkfcb498;
    ::ll::UntypedStorage<1, 1>   mUnkc25e9a;
    ::ll::UntypedStorage<8, 32>  mUnkcaf8cd;
    ::ll::UntypedStorage<1, 1>   mUnkb4d8b3;
    ::ll::UntypedStorage<1, 1>   mUnk45d57c;
    ::ll::UntypedStorage<1, 1>   mUnk7bf459;
    ::ll::UntypedStorage<1, 1>   mUnka069f8;
    ::ll::UntypedStorage<1, 1>   mUnka018e9;
    ::ll::UntypedStorage<8, 24>  mUnka540cc;
    ::ll::UntypedStorage<8, 16>  mUnkbfd4de;
    ::ll::UntypedStorage<8, 16>  mUnkbe9235;
    ::ll::UntypedStorage<8, 128> mUnkaa7945;
    ::ll::UntypedStorage<8, 24>  mUnk4bcf76;
    ::ll::UntypedStorage<8, 24>  mUnka620e8;
    ::ll::UntypedStorage<8, 24>  mUnkda929e;
    ::ll::UntypedStorage<8, 24>  mUnke77ba7;
    ::ll::UntypedStorage<8, 24>  mUnkef2ee6;
    ::ll::UntypedStorage<8, 8>   mUnk440c04;
    ::ll::UntypedStorage<8, 24>  mUnk355c2d;
    ::ll::UntypedStorage<8, 64>  mUnk5509f0;
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

    virtual bool popScreensBackTo(::ui::SceneType const) /*override*/;

    virtual bool popScreensBackToFirstInstanceOf(::ui::SceneType const) /*override*/;

    virtual bool popTopScreensOfType(::ui::SceneType const) /*override*/;

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

    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

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

    virtual void handleTextChar(::std::string const& inputUtf8, bool keepImePosition) /*override*/;

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
    MCNAPI SceneStack(
        ::CachedScenes&                                            cachedScenes,
        ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> const& uiEventCoordinator,
        ::std::function<bool()> const&                             getSuspended
    );

    MCNAPI bool _animationsEnabled() const;

    MCNAPI bool _handleFlushEvent(::SceneStack::FlushScreenEvent const& flushEvent);

    MCNAPI bool _handlePopRangeOfScreensEvent(::SceneStack::PopRangeOfTypeScreenEvent& popRangeEvent);

    MCNAPI bool _handlePushEvent(::SceneStack::PushScreenEvent& pushEvent);

    MCNAPI bool _popScreens(
        int&                                  popCount,
        bool                                  ignoreTransitions,
        ::std::optional<::OreUI::RouteAction> routeAction,
        ::std::vector<::std::string> const&   expectedScreenNames
    );

    MCNAPI bool _scenesAllIgnoreAsTop(int count) const;

    MCNAPI void _schedulePopScreen(
        int                                   totalPopNumber,
        ::std::optional<::OreUI::RouteAction> routeAction,
        ::std::vector<::std::string> const&   expectedScreenNames
    );

    MCNAPI void _schedulePushScreen(
        ::std::shared_ptr<::AbstractScene>    newScreen,
        bool                                  flush,
        ::std::optional<::OreUI::RouteAction> routeAction
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::std::function<::AbstractScene*(int)>        getScreen,
        bool,
        bool   splitscreenRenderBypassThisFrame,
        uint64 topStackIndex,
        uint64 startIndex,
        uint64 endIndex,
        bool   renderDrawLastScreens
    );

    MCNAPI static void forEachVisibleScreen(
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
    MCNAPI void* $ctor(
        ::CachedScenes&                                            cachedScenes,
        ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> const& uiEventCoordinator,
        ::std::function<bool()> const&                             getSuspended
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reload();

    MCNAPI void $setOptions(::std::weak_ptr<::Options> options);

    MCNAPI void $registerSceneChangeCallback(void* token, ::std::function<void(::AbstractScene&)> sceneChangeCallback);

    MCNAPI void $unregisterSceneChangeCallback(void* token);

    MCNAPI void
    $registerPrePushSceneCallback(void* token, ::std::function<void(::AbstractScene&)> prePushSceneCallback);

    MCNAPI void $unregisterPrePushSceneCallback(void* token);

    MCNAPI void $registerPushSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>
            pushSceneCallback
    );

    MCNAPI void $unregisterPushSceneCallback(void* token);

    MCNAPI void $registerPrePopSceneCallback(void* token, ::std::function<void(::AbstractScene*)> prePopSceneCallback);

    MCNAPI void $unregisterPrePopSceneCallback(void* token);

    MCNAPI void $registerPopSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>
            popSceneCallback
    );

    MCNAPI void $unregisterPopSceneCallback(void* token);

    MCNAPI void $forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        bool                                          tickedLastFrame,
        bool                                          splitscreenRenderBypassThisFrame
    );

    MCNAPI void $forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown);

    MCNAPI void $forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const;

    MCNAPI void $forEachAlwaysAcceptInputScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::AbstractScene const*                        ignoreScreen
    );

    MCNAPI void $forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(::AbstractScene&)> callback);

    MCNAPI void
    $pushScreenWithRouteAction(::std::shared_ptr<::AbstractScene> newScreen, ::OreUI::RouteAction const& routeAction);

    MCNAPI void $popScreenWithRouteAction(::OreUI::RouteAction const& routeAction);

    MCNAPI void $pushScreen(::std::shared_ptr<::AbstractScene> newScreen, bool flush);

    MCNAPI void $schedulePopScreen(int totalPopNumber);

    MCNAPI void $schedulePopScreenWithExpectedNames(::std::vector<::std::string> const& expectedScreenNames);

    MCNAPI void $flushStack(
        bool                    immediate,
        bool                    ignoreNotFlushableFlag,
        bool                    ignoreTransitions,
        ::std::function<void()> postFlushCallback
    );

    MCNAPI void $deferUpdatesUntilNextTick();

    MCNAPI ::std::optional<uint64> $getFirstSceneIndexOfSceneType(::ui::SceneType sceneType) const;

    MCNAPI bool $update();

    MCNAPI void $resetScreenChangeDirtyFlag();

    MCNAPI bool $hasChangedThisFrame() const;

    MCNAPI bool $isEmpty() const;

    MCNAPI uint64 $getSize() const;

    MCNAPI void $setScreenTickingFlag(bool screenIsTicking);

    MCNAPI bool $getScreenTickingFlag() const;

    MCNAPI ::ui::SceneType $getNonTerminatingSceneType() const;

    MCNAPI ::std::vector<::std::string> $getScreenNames() const;

    MCNAPI ::std::vector<::std::string> $getScreenTelemetryNames() const;

    MCNAPI ::std::string $getScreenName() const;

    MCNAPI ::std::string $getScreenTelemetry() const;

    MCNAPI ::std::string const& $getLastPoppedScreenName() const;

    MCNAPI void $handleLicenseChanged();

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI ::AbstractScene* $getTopScene();

    MCNAPI ::AbstractScene const* $getTopScene() const;

    MCNAPI ::std::shared_ptr<::AbstractScene> $getTopSceneShared() const;

    MCNAPI ::AbstractScene* $getActiveScene();

    MCNAPI ::AbstractScene const* $getActiveScene() const;

    MCNAPI ::std::shared_ptr<::AbstractScene> $getSharedNonTerminatingActiveScene();

    MCNAPI ::std::shared_ptr<::AbstractScene const> const $getSharedNonTerminatingActiveScene() const;

    MCNAPI ::gsl::span<::ISceneStack::SceneElement const> $getScreenStackView() const;

    MCNAPI int $getScheduledPopCount() const;

    MCNAPI bool $isScreenReplaceable() const;

    MCNAPI void $handleTextChar(::std::string const& inputUtf8, bool keepImePosition);

    MCNAPI void $setBufferTextCharEvents(bool pushTextCharEvents);

    MCNAPI bool $isBufferingTextCharEvents() const;

    MCNAPI bool $isOnSceneStack(::ui::SceneType sceneType) const;

    MCNAPI bool $isOnSceneStack(::std::string const& screenName) const;

    MCNAPI ::SceneStackProxy* $getProxy();

    MCNAPI bool $hasScheduledScreens() const;

    MCNAPI bool $hasScheduledEvents() const;

    MCNAPI void $setScreenThreshold(::ScreenThreshold const& screenThreshold);

    MCNAPI ::Bedrock::PubSub::Subscription $registerSceneStackDestroyedListener(::std::function<void()> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
