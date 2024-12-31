#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/AppPlatformListener.h"
#include "mc/common/IApp.h"

class App : public ::IApp, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2e3651;
    ::ll::UntypedStorage<1, 1> mUnke11601;
    // NOLINTEND

public:
    // prevent constructor by default
    App& operator=(App const&);
    App(App const&);
    App();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init() /*override*/;

    // vIndex: 2
    virtual bool isInited() /*override*/;

    // vIndex: 3
    virtual void changeContext() /*override*/;

    // vIndex: 4
    virtual void quit(::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 5
    virtual bool wantToQuit() /*override*/;

    // vIndex: 12
    virtual void initImpl() = 0;

    // vIndex: 0
    virtual ~App() /*override*/ = default;
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
