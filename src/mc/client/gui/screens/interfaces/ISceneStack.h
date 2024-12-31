#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
namespace OreUI { struct RouteAction; }
// clang-format on

class ISceneStack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ISceneStack& operator=(ISceneStack const&);
    ISceneStack(ISceneStack const&);
    ISceneStack();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISceneStack() /*override*/ = default;

    // vIndex: 1
    virtual void registerSceneChangeCallback(void*, ::std::function<void(::AbstractScene&)>) = 0;

    // vIndex: 2
    virtual void unregisterSceneChangeCallback(void*) = 0;

    // vIndex: 3
    virtual void registerPrePushSceneCallback(void*, ::std::function<void(::AbstractScene&)>) = 0;

    // vIndex: 4
    virtual void unregisterPrePushSceneCallback(void*) = 0;

    // vIndex: 5
    virtual void
    registerPushSceneCallback(void*, ::std::function<void(::std::shared_ptr<::AbstractScene>, ::std::optional<::OreUI::RouteAction>)>) = 0;

    // vIndex: 6
    virtual void unregisterPushSceneCallback(void*) = 0;

    // vIndex: 7
    virtual void registerPrePopSceneCallback(void*, ::std::function<void(::AbstractScene*)>) = 0;

    // vIndex: 8
    virtual void unregisterPrePopSceneCallback(void*) = 0;

    // vIndex: 9
    virtual void
    registerPopSceneCallback(void*, ::std::function<void(::std::shared_ptr<::AbstractScene>, bool, ::std::optional<::OreUI::RouteAction>)>) = 0;

    // vIndex: 10
    virtual void unregisterPopSceneCallback(void*) = 0;

    // vIndex: 12
    virtual ::AbstractScene* getTopScene() = 0;

    // vIndex: 11
    virtual ::AbstractScene const* getTopScene() const = 0;

    // vIndex: 13
    virtual ::std::shared_ptr<::AbstractScene> getTopSceneShared() const = 0;

    // vIndex: 14
    virtual void setBufferTextCharEvents(bool) = 0;

    // vIndex: 15
    virtual void schedulePopScreen(int) = 0;

    // vIndex: 16
    virtual void schedulePopScreenWithExpectedNames(::std::vector<::std::string> const&) = 0;

    // vIndex: 17
    virtual void popScreenWithRouteAction(::OreUI::RouteAction const&) = 0;

    // vIndex: 18
    virtual void pushScreenWithRouteAction(::std::shared_ptr<::AbstractScene>, ::OreUI::RouteAction const&) = 0;

    // vIndex: 19
    virtual void pushScreen(::std::shared_ptr<::AbstractScene>, bool) = 0;

    // vIndex: 20
    virtual void flushStack(bool, bool, bool) = 0;

    // vIndex: 21
    virtual bool isEmpty() const = 0;
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
