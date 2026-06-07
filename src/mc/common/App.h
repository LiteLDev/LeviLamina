#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IApp.h"
#include "mc/deps/application/AppPlatformListener.h"

class App : public ::IApp, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2e3651;
    ::ll::UntypedStorage<1, 1> mUnke11601;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    App& operator=(App const&);
    App(App const&);
    App();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    App& operator=(App const&);
    App(App const&);

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;

    virtual bool isInited() /*override*/;

    virtual void changeContext() /*override*/;

#ifdef LL_PLAT_S
    virtual void quit(::std::string const&, ::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual void quit(::std::string const& src, ::std::string const& reason) /*override*/;
#endif

    virtual bool wantToQuit() /*override*/;

    virtual void initImpl() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI App();

    MCNAPI void initialize();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $init();

    MCNAPI bool $isInited();

    MCNAPI void $changeContext();

    MCNAPI void $quit(::std::string const& src, ::std::string const& reason);

    MCNAPI bool $wantToQuit();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIApp();

    MCNAPI static void** $vftableForAppPlatformListener();
    // NOLINTEND
};
