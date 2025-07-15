#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloudProxy {

struct CloudProject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6352e0;
    ::ll::UntypedStorage<8, 32> mUnkc0f10f;
    ::ll::UntypedStorage<8, 32> mUnkdb7fc2;
    ::ll::UntypedStorage<8, 32> mUnk8d0f7f;
    ::ll::UntypedStorage<8, 32> mUnk794e50;
    ::ll::UntypedStorage<8, 32> mUnkf799f3;
    ::ll::UntypedStorage<1, 1>  mUnk83a267;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudProject& operator=(CloudProject const&);
    CloudProject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CloudProject(::EduCloudProxy::CloudProject const&);

    MCNAPI ::EduCloudProxy::CloudProject& operator=(::EduCloudProxy::CloudProject&&);

    MCNAPI ~CloudProject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EduCloudProxy::CloudProject const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace EduCloudProxy
