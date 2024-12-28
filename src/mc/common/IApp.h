#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class IApp : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IApp& operator=(IApp const&);
    IApp(IApp const&);
    IApp();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IApp() /*override*/;

    // vIndex: 1
    virtual void init() = 0;

    // vIndex: 2
    virtual bool isInited() = 0;

    // vIndex: 3
    virtual void changeContext() = 0;

    // vIndex: 4
    virtual void quit(::std::string const&, ::std::string const&) = 0;

    // vIndex: 5
    virtual bool wantToQuit() = 0;

    // vIndex: 6
    virtual void setRenderingSize(int, int) = 0;

    // vIndex: 7
    virtual void setUISizeAndScale(int, int, float) = 0;

    // vIndex: 8
    virtual void muteAudio() = 0;

    // vIndex: 9
    virtual void unMuteAudio() = 0;

    // vIndex: 10
    virtual void audioEngineOn() = 0;

    // vIndex: 11
    virtual void audioEngineOff() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
