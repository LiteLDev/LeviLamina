#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class Options;
class SceneStackProxy;
struct ScreenThreshold;
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI { struct RouteAction; }
// clang-format on

class ISceneStack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ISceneStack inner types declare
    // clang-format off
    struct SceneElement;
    // clang-format on

    // ISceneStack inner types define
    struct SceneElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkd48a2c;
        ::ll::UntypedStorage<1, 1>  mUnk2f3afb;
        // NOLINTEND

    public:
        // prevent constructor by default
        SceneElement& operator=(SceneElement const&);
        SceneElement(SceneElement const&);
        SceneElement();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~SceneElement() = default;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISceneStack() /*override*/ = default;

    // vIndex: 1
    virtual void reload() = 0;

    // vIndex: 2
    virtual void setOptions(::std::weak_ptr<::Options>) = 0;

    // vIndex: 3
    virtual void registerSceneChangeCallback(void*, ::std::function<void(::AbstractScene&)>) = 0;

    // vIndex: 4
    virtual void unregisterSceneChangeCallback(void*) = 0;

    // vIndex: 5
    virtual void registerPrePushSceneCallback(void*, ::std::function<void(::AbstractScene&)>) = 0;

    // vIndex: 6
    virtual void unregisterPrePushSceneCallback(void*) = 0;

    // vIndex: 7
    virtual void registerPushSceneCallback(
        void*,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>
    ) = 0;

    // vIndex: 8
    virtual void unregisterPushSceneCallback(void*) = 0;

    // vIndex: 9
    virtual void registerPrePopSceneCallback(void*, ::std::function<void(::AbstractScene*)>) = 0;

    // vIndex: 10
    virtual void unregisterPrePopSceneCallback(void*) = 0;

    // vIndex: 11
    virtual void registerPopSceneCallback(
        void*,
        ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>
    ) = 0;

    // vIndex: 12
    virtual void unregisterPopSceneCallback(void*) = 0;

    // vIndex: 13
    virtual void forEachVisibleScreen(::brstd::function_ref<void(::AbstractScene&)>, bool, bool) = 0;

    // vIndex: 14
    virtual void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)>, bool) = 0;

    // vIndex: 15
    virtual void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)>, bool) const = 0;

    // vIndex: 16
    virtual void
    forEachAlwaysAcceptInputScreen(::brstd::function_ref<void(::AbstractScene&)>, ::AbstractScene const*) = 0;

    // vIndex: 17
    virtual void forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(::AbstractScene&)>) = 0;

    // vIndex: 18
    virtual void pushScreenWithRouteAction(::std::shared_ptr<::AbstractScene>, ::OreUI::RouteAction const&) = 0;

    // vIndex: 19
    virtual void popScreenWithRouteAction(::OreUI::RouteAction const&) = 0;

    // vIndex: 20
    virtual void pushScreen(::std::shared_ptr<::AbstractScene>, bool) = 0;

    // vIndex: 21
    virtual void schedulePopScreen(int) = 0;

    // vIndex: 22
    virtual void schedulePopScreenWithExpectedNames(::std::vector<::std::string> const&) = 0;

    // vIndex: 23
    virtual void flushStack(bool, bool, bool, ::std::function<void()>) = 0;

    // vIndex: 24
    virtual void deferUpdatesUntilNextTick() = 0;

    // vIndex: 25
    virtual ::std::optional<uint64> getFirstSceneIndexOfSceneType(::ui::SceneType) const = 0;

    // vIndex: 26
    virtual bool popScreensBackTo(::ui::SceneType const) = 0;

    // vIndex: 27
    virtual bool popScreensBackToFirstInstanceOf(::ui::SceneType const) = 0;

    // vIndex: 28
    virtual bool popTopScreensOfType(::ui::SceneType const) = 0;

    // vIndex: 29
    virtual bool update() = 0;

    // vIndex: 30
    virtual void resetScreenChangeDirtyFlag() = 0;

    // vIndex: 31
    virtual bool hasChangedThisFrame() const = 0;

    // vIndex: 32
    virtual bool isEmpty() const = 0;

    // vIndex: 33
    virtual uint64 getSize() const = 0;

    // vIndex: 34
    virtual void setScreenTickingFlag(bool) = 0;

    // vIndex: 35
    virtual bool getScreenTickingFlag() const = 0;

    // vIndex: 36
    virtual ::ui::SceneType getNonTerminatingSceneType() const = 0;

    // vIndex: 37
    virtual ::std::vector<::std::string> getScreenNames() const = 0;

    // vIndex: 38
    virtual ::std::vector<::std::string> getScreenTelemetryNames() const = 0;

    // vIndex: 39
    virtual ::std::string getScreenName() const = 0;

    // vIndex: 40
    virtual ::std::string getScreenTelemetry() const = 0;

    // vIndex: 41
    virtual ::std::string const& getLastPoppedScreenName() const = 0;

    // vIndex: 42
    virtual void handleLicenseChanged() = 0;

    // vIndex: 43
    virtual void onGameEventNotification(::ui::GameEventNotification) = 0;

    // vIndex: 45
    virtual ::AbstractScene* getTopScene() = 0;

    // vIndex: 44
    virtual ::AbstractScene const* getTopScene() const = 0;

    // vIndex: 46
    virtual ::std::shared_ptr<::AbstractScene> getTopSceneShared() const = 0;

    // vIndex: 48
    virtual ::AbstractScene* getActiveScene() = 0;

    // vIndex: 47
    virtual ::AbstractScene const* getActiveScene() const = 0;

    // vIndex: 50
    virtual ::std::shared_ptr<::AbstractScene> getSharedNonTerminatingActiveScene() = 0;

    // vIndex: 49
    virtual ::std::shared_ptr<::AbstractScene const> const getSharedNonTerminatingActiveScene() const = 0;

    // vIndex: 51
    virtual ::gsl::span<::ISceneStack::SceneElement const> getScreenStackView() const = 0;

    // vIndex: 52
    virtual int getScheduledPopCount() const = 0;

    // vIndex: 53
    virtual bool isScreenReplaceable() const = 0;

    // vIndex: 54
    virtual void handleTextChar(::std::string const&, bool) = 0;

    // vIndex: 55
    virtual void setBufferTextCharEvents(bool) = 0;

    // vIndex: 56
    virtual bool isBufferingTextCharEvents() const = 0;

    // vIndex: 58
    virtual bool isOnSceneStack(::ui::SceneType) const = 0;

    // vIndex: 57
    virtual bool isOnSceneStack(::std::string const&) const = 0;

    // vIndex: 59
    virtual ::SceneStackProxy* getProxy() = 0;

    // vIndex: 60
    virtual bool hasScheduledScreens() const = 0;

    // vIndex: 61
    virtual bool hasScheduledEvents() const = 0;

    // vIndex: 62
    virtual void setScreenThreshold(::ScreenThreshold const&) = 0;

    // vIndex: 63
    virtual ::Bedrock::PubSub::Subscription registerSceneStackDestroyedListener(::std::function<void()>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
