#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/interfaces/ISceneStack.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
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
    struct SceneElement;
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
        virtual ~SceneStackEvent() = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

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
        // destructor thunk
        // NOLINTBEGIN

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
        // destructor thunk
        // NOLINTBEGIN

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
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND
    };

    class FlushScreenEvent : public ::SceneStack::SceneStackEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkc65d86;
        ::ll::UntypedStorage<1, 1> mUnk7756d7;
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
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct SceneElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk1b1dc6;
        ::ll::UntypedStorage<1, 1>  mUnk92e52e;
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

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkbcc16d;
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
    ::ll::UntypedStorage<8, 128> mUnkefd714;
    ::ll::UntypedStorage<8, 24>  mUnk4bcf76;
    ::ll::UntypedStorage<8, 24>  mUnka620e8;
    ::ll::UntypedStorage<8, 24>  mUnkda929e;
    ::ll::UntypedStorage<8, 24>  mUnke77ba7;
    ::ll::UntypedStorage<8, 24>  mUnkef2ee6;
    ::ll::UntypedStorage<8, 8>   mUnk440c04;
    ::ll::UntypedStorage<8, 24>  mUnk355c2d;
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
    virtual ~SceneStack() /*override*/ = default;

    // vIndex: 1
    virtual void registerSceneChangeCallback(void*, ::std::function<void(::AbstractScene&)>) /*override*/;

    // vIndex: 2
    virtual void unregisterSceneChangeCallback(void*) /*override*/;

    // vIndex: 3
    virtual void registerPrePushSceneCallback(void*, ::std::function<void(::AbstractScene&)>) /*override*/;

    // vIndex: 4
    virtual void unregisterPrePushSceneCallback(void*) /*override*/;

    // vIndex: 5
    virtual void
    registerPushSceneCallback(void*, ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>) /*override*/
        ;

    // vIndex: 6
    virtual void unregisterPushSceneCallback(void*) /*override*/;

    // vIndex: 7
    virtual void registerPrePopSceneCallback(void*, ::std::function<void(::AbstractScene*)>) /*override*/;

    // vIndex: 8
    virtual void unregisterPrePopSceneCallback(void*) /*override*/;

    // vIndex: 9
    virtual void
    registerPopSceneCallback(void*, ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>) /*override*/
        ;

    // vIndex: 10
    virtual void unregisterPopSceneCallback(void*) /*override*/;

    // vIndex: 18
    virtual void
    pushScreenWithRouteAction(::std::shared_ptr<::AbstractScene>, ::OreUI::RouteAction const&) /*override*/;

    // vIndex: 17
    virtual void popScreenWithRouteAction(::OreUI::RouteAction const&) /*override*/;

    // vIndex: 19
    virtual void pushScreen(::std::shared_ptr<::AbstractScene>, bool) /*override*/;

    // vIndex: 15
    virtual void schedulePopScreen(int) /*override*/;

    // vIndex: 16
    virtual void schedulePopScreenWithExpectedNames(::std::vector<::std::string> const&) /*override*/;

    // vIndex: 20
    virtual void flushStack(bool, bool, bool) /*override*/;

    // vIndex: 21
    virtual bool isEmpty() const /*override*/;

    // vIndex: 12
    virtual ::AbstractScene* getTopScene() /*override*/;

    // vIndex: 11
    virtual ::AbstractScene const* getTopScene() const /*override*/;

    // vIndex: 13
    virtual ::std::shared_ptr<::AbstractScene> getTopSceneShared() const /*override*/;

    // vIndex: 14
    virtual void setBufferTextCharEvents(bool) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
