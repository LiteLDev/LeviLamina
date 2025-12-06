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
class SceneStackProxy;
class UIEventCoordinator;
struct AbstractScene;
struct CachedScenes;
struct Options;
struct ScreenThreshold;
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI { struct RouteAction; }
// clang-format on

class SceneStack : public ::ISceneStack {
public:
    // SceneStack inner types declare
    // clang-format off
    class FlushScreenEvent;
    class PopRangeOfTypeScreenEvent;
    class PopScreenEvent;
    class PushScreenEvent;
    class ReloadScreenEvent;
    class SceneStackEvent;
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
        // vIndex: 0
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
        // vIndex: 0
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
        // vIndex: 0
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
        // vIndex: 0
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
        // vIndex: 0
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
        // vIndex: 0
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
    // vIndex: 0
    virtual ~SceneStack() /*override*/;

    // vIndex: 1
    virtual void reload() /*override*/;

    // vIndex: 2
    virtual void setOptions(::std::weak_ptr<::Options> options) /*override*/;

    // vIndex: 3
    virtual void
    registerSceneChangeCallback(void* token, ::std::function<void(::AbstractScene&)> sceneChangeCallback) /*override*/;

    // vIndex: 4
    virtual void unregisterSceneChangeCallback(void* token) /*override*/;

    // vIndex: 5
    virtual void registerPrePushSceneCallback(
        void*                                   token,
        ::std::function<void(::AbstractScene&)> prePushSceneCallback
    ) /*override*/;

    // vIndex: 6
    virtual void unregisterPrePushSceneCallback(void* token) /*override*/;

    // vIndex: 7
    virtual void registerPushSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>
            pushSceneCallback
    ) /*override*/;

    // vIndex: 8
    virtual void unregisterPushSceneCallback(void* token) /*override*/;

    // vIndex: 9
    virtual void
    registerPrePopSceneCallback(void* token, ::std::function<void(::AbstractScene*)> prePopSceneCallback) /*override*/;

    // vIndex: 10
    virtual void unregisterPrePopSceneCallback(void* token) /*override*/;

    // vIndex: 11
    virtual void registerPopSceneCallback(
        void* token,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>
            popSceneCallback
    ) /*override*/;

    // vIndex: 12
    virtual void unregisterPopSceneCallback(void* token) /*override*/;

    // vIndex: 13
    virtual void forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        bool                                          tickedLastFrame,
        bool                                          splitscreenRenderBypassThisFrame
    ) /*override*/;

    // vIndex: 14
    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown) /*override*/;

    // vIndex: 15
    virtual void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const
        /*override*/;

    // vIndex: 16
    virtual void forEachAlwaysAcceptInputScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::AbstractScene const*                        ignoreScreen
    ) /*override*/;

    // vIndex: 17
    virtual void
    forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(::AbstractScene&)> callback) /*override*/;

    // vIndex: 18
    virtual void pushScreenWithRouteAction(
        ::std::shared_ptr<::AbstractScene> newScreen,
        ::OreUI::RouteAction const&        routeAction
    ) /*override*/;

    // vIndex: 19
    virtual void popScreenWithRouteAction(::OreUI::RouteAction const& routeAction) /*override*/;

    // vIndex: 20
    virtual void pushScreen(::std::shared_ptr<::AbstractScene> newScreen, bool flush) /*override*/;

    // vIndex: 21
    virtual void schedulePopScreen(int totalPopNumber) /*override*/;

    // vIndex: 22
    virtual void
    schedulePopScreenWithExpectedNames(::std::vector<::std::string> const& expectedScreenNames) /*override*/;

    // vIndex: 23
    virtual void flushStack(
        bool                    immediate,
        bool                    ignoreNotFlushableFlag,
        bool                    ignoreTransitions,
        ::std::function<void()> postFlushCallback
    ) /*override*/;

    // vIndex: 24
    virtual void deferUpdatesUntilNextTick() /*override*/;

    // vIndex: 25
    virtual ::std::optional<uint64> getFirstSceneIndexOfSceneType(::ui::SceneType sceneType) const /*override*/;

    // vIndex: 26
    virtual bool popScreensBackTo(::ui::SceneType const) /*override*/;

    // vIndex: 27
    virtual bool popScreensBackToFirstInstanceOf(::ui::SceneType const) /*override*/;

    // vIndex: 28
    virtual bool popTopScreensOfType(::ui::SceneType const) /*override*/;

    // vIndex: 29
    virtual bool update() /*override*/;

    // vIndex: 30
    virtual void resetScreenChangeDirtyFlag() /*override*/;

    // vIndex: 31
    virtual bool hasChangedThisFrame() const /*override*/;

    // vIndex: 32
    virtual bool isEmpty() const /*override*/;

    // vIndex: 33
    virtual uint64 getSize() const /*override*/;

    // vIndex: 34
    virtual void setScreenTickingFlag(bool screenIsTicking) /*override*/;

    // vIndex: 35
    virtual bool getScreenTickingFlag() const /*override*/;

    // vIndex: 36
    virtual ::ui::SceneType getNonTerminatingSceneType() const /*override*/;

    // vIndex: 37
    virtual ::std::vector<::std::string> getScreenNames() const /*override*/;

    // vIndex: 38
    virtual ::std::vector<::std::string> getScreenTelemetryNames() const /*override*/;

    // vIndex: 39
    virtual ::std::string getScreenName() const /*override*/;

    // vIndex: 40
    virtual ::std::string getScreenTelemetry() const /*override*/;

    // vIndex: 41
    virtual ::std::string const& getLastPoppedScreenName() const /*override*/;

    // vIndex: 42
    virtual void handleLicenseChanged() /*override*/;

    // vIndex: 43
    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    // vIndex: 45
    virtual ::AbstractScene* getTopScene() /*override*/;

    // vIndex: 44
    virtual ::AbstractScene const* getTopScene() const /*override*/;

    // vIndex: 46
    virtual ::std::shared_ptr<::AbstractScene> getTopSceneShared() const /*override*/;

    // vIndex: 48
    virtual ::AbstractScene* getActiveScene() /*override*/;

    // vIndex: 47
    virtual ::AbstractScene const* getActiveScene() const /*override*/;

    // vIndex: 50
    virtual ::std::shared_ptr<::AbstractScene> getSharedNonTerminatingActiveScene() /*override*/;

    // vIndex: 49
    virtual ::std::shared_ptr<::AbstractScene const> const getSharedNonTerminatingActiveScene() const /*override*/;

    // vIndex: 51
    virtual ::gsl::span<::ISceneStack::SceneElement const> getScreenStackView() const /*override*/;

    // vIndex: 52
    virtual int getScheduledPopCount() const /*override*/;

    // vIndex: 53
    virtual bool isScreenReplaceable() const /*override*/;

    // vIndex: 54
    virtual void handleTextChar(::std::string const& inputUtf8, bool keepImePosition) /*override*/;

    // vIndex: 55
    virtual void setBufferTextCharEvents(bool pushTextCharEvents) /*override*/;

    // vIndex: 56
    virtual bool isBufferingTextCharEvents() const /*override*/;

    // vIndex: 58
    virtual bool isOnSceneStack(::ui::SceneType sceneType) const /*override*/;

    // vIndex: 57
    virtual bool isOnSceneStack(::std::string const& screenName) const /*override*/;

    // vIndex: 59
    virtual ::SceneStackProxy* getProxy() /*override*/;

    // vIndex: 60
    virtual bool hasScheduledScreens() const /*override*/;

    // vIndex: 61
    virtual bool hasScheduledEvents() const /*override*/;

    // vIndex: 62
    virtual void setScreenThreshold(::ScreenThreshold const& screenThreshold) /*override*/;

    // vIndex: 63
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
