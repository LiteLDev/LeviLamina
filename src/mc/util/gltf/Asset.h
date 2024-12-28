#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Asset {
public:
    // Asset inner types declare
    // clang-format off
    struct Profile;
    // clang-format on

    // Asset inner types define
    struct Profile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk9f8679;
        ::ll::UntypedStorage<8, 32> mUnk481e49;
        // NOLINTEND

    public:
        // prevent constructor by default
        Profile& operator=(Profile const&);
        Profile(Profile const&);
        Profile();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd91571;
    ::ll::UntypedStorage<8, 32> mUnk4e3bbd;
    ::ll::UntypedStorage<8, 64> mUnk6ecbd8;
    ::ll::UntypedStorage<8, 32> mUnk7ff41f;
    // NOLINTEND

public:
    // prevent constructor by default
    Asset& operator=(Asset const&);
    Asset(Asset const&);
    Asset();
};

} // namespace glTF
