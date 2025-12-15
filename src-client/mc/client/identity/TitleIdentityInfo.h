#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/PlayFabEnvironment.h"

namespace Social {

class TitleIdentityInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1a334b;
    ::ll::UntypedStorage<8, 16> mUnke80c1a;
    // NOLINTEND

public:
    // prevent constructor by default
    TitleIdentityInfo& operator=(TitleIdentityInfo const&);
    TitleIdentityInfo(TitleIdentityInfo const&);
    TitleIdentityInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TitleIdentityInfo() = default;

    virtual void setEnvironment(::Social::PlayFabEnvironment environment);

    virtual ::std::string_view const getPlayFabTitleId() = 0;

    virtual ::std::string const& getPlayfabSharedSecret() = 0;

    virtual bool isSignInToPlayFabWithAnonymousAuthEnabled();

    virtual uint getXboxLiveMPTitleId();

    virtual ::std::string const& getXboxLiveMPScid();

    virtual bool isXboxLiveTitleIdAnyPlatform(uint);

    virtual uint getXboxLiveFlags();

    virtual ::std::string const& getXboxLiveClientId();

    virtual int getXboxLiveTitleId();

    virtual ::std::string const& getXboxLiveRedirectUri();

    virtual ::std::string const& getXboxLiveScid();

    virtual ::std::string const& getXboxLiveTelemetryAppId();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setEnvironment(::Social::PlayFabEnvironment environment);

    MCNAPI bool $isSignInToPlayFabWithAnonymousAuthEnabled();

    MCNAPI uint $getXboxLiveMPTitleId();

    MCNAPI ::std::string const& $getXboxLiveMPScid();

    MCNAPI bool $isXboxLiveTitleIdAnyPlatform(uint);

    MCNAPI uint $getXboxLiveFlags();

    MCNAPI ::std::string const& $getXboxLiveClientId();

    MCNAPI int $getXboxLiveTitleId();

    MCNAPI ::std::string const& $getXboxLiveRedirectUri();

    MCNAPI ::std::string const& $getXboxLiveScid();

    MCNAPI ::std::string const& $getXboxLiveTelemetryAppId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
