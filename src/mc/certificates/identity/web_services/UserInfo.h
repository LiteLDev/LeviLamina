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

public:
    // prevent constructor by default
    UserInfo& operator=(UserInfo const&);
    UserInfo(UserInfo const&);
    UserInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI UserInfo(::WebServices::EduSignin::UserInfo&&);

    MCNAPI ::WebServices::EduSignin::UserInfo& operator=(::WebServices::EduSignin::UserInfo&&);

    MCNAPI ~UserInfo();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::WebServices::EduSignin::UserInfo&&);
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
