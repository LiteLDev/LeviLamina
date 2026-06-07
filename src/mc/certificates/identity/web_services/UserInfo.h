#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct UserInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf1f7db;
    ::ll::UntypedStorage<1, 1>  mUnkd87f8d;
    ::ll::UntypedStorage<1, 1>  mUnkc971a5;
    ::ll::UntypedStorage<1, 1>  mUnk6665c8;
    ::ll::UntypedStorage<8, 32> mUnk978076;
    ::ll::UntypedStorage<8, 32> mUnk4f365d;
    ::ll::UntypedStorage<8, 32> mUnk1a0aa5;
    ::ll::UntypedStorage<8, 32> mUnkcb106c;
    ::ll::UntypedStorage<8, 32> mUnk1e09fc;
    ::ll::UntypedStorage<8, 32> mUnkf70377;
    ::ll::UntypedStorage<8, 32> mUnk5d895a;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    UserInfo& operator=(UserInfo const&);
    UserInfo(UserInfo const&);
    UserInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    UserInfo& operator=(UserInfo const&);
    UserInfo();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI UserInfo(::WebServices::EduSignin::UserInfo const&);

    MCNAPI ::WebServices::EduSignin::UserInfo& operator=(::WebServices::EduSignin::UserInfo&&);

    MCNAPI ~UserInfo();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::WebServices::EduSignin::UserInfo const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace WebServices::EduSignin
