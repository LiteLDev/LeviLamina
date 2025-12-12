#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { class ProfileImageOptions; }
// clang-format on

namespace Social {

struct XboxLiveUserProfileData {
public:
    // XboxLiveUserProfileData inner types define
    enum class FetchedData : int {
        None        = 0,
        Profile     = 1,
        Permissions = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9cb1fc;
    ::ll::UntypedStorage<4, 4>  mUnk5fb1cd;
    ::ll::UntypedStorage<8, 32> mUnk7b583a;
    ::ll::UntypedStorage<8, 32> mUnk75160c;
    ::ll::UntypedStorage<8, 32> mUnk8957ff;
    ::ll::UntypedStorage<8, 32> mUnk91ff75;
    ::ll::UntypedStorage<8, 32> mUnkb1ee11;
    ::ll::UntypedStorage<4, 4>  mUnkdf1f27;
    ::ll::UntypedStorage<8, 32> mUnkb4a997;
    ::ll::UntypedStorage<4, 4>  mUnkda2a04;
    ::ll::UntypedStorage<1, 1>  mUnk9c286f;
    ::ll::UntypedStorage<8, 32> mUnke160ea;
    ::ll::UntypedStorage<4, 4>  mUnk15e206;
    ::ll::UntypedStorage<4, 4>  mUnkfcfd2c;
    ::ll::UntypedStorage<4, 4>  mUnkc2107e;
    ::ll::UntypedStorage<4, 4>  mUnkdaf122;
    ::ll::UntypedStorage<4, 4>  mUnk79bcb6;
    ::ll::UntypedStorage<4, 4>  mUnka8928d;
    ::ll::UntypedStorage<4, 4>  mUnkeddc35;
    ::ll::UntypedStorage<8, 24> mUnkebf033;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C XboxLiveUserProfileData();

    MCNAPI_C XboxLiveUserProfileData(::Social::XboxLiveUserProfileData&&);

    MCNAPI_C XboxLiveUserProfileData(::Social::XboxLiveUserProfileData const&);

    MCNAPI_C explicit XboxLiveUserProfileData(::std::string const& xuid);

    MCNAPI_C ::Social::ProfileImageOptions getDefaultProfileImageOptions() const;

    MCNAPI_C bool hasValidXUID() const;

    MCNAPI_C ::Social::XboxLiveUserProfileData& operator=(::Social::XboxLiveUserProfileData const&);

    MCNAPI_C ~XboxLiveUserProfileData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::Social::XboxLiveUserProfileData&&);

    MCNAPI_C void* $ctor(::Social::XboxLiveUserProfileData const&);

    MCNAPI_C void* $ctor(::std::string const& xuid);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
