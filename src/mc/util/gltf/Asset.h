#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

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
        ::ll::UntypedStorage<8, 32> mUnk14e3e0;
        ::ll::UntypedStorage<8, 32> mUnk991769;
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
    ::ll::UntypedStorage<8, 32> mUnka9b901;
    ::ll::UntypedStorage<8, 32> mUnkf64d1e;
    ::ll::UntypedStorage<8, 64> mUnk6ecbd8;
    ::ll::UntypedStorage<8, 32> mUnk61b709;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Asset& operator=(Asset const&);
    Asset(Asset const&);
    Asset();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Asset(Asset const&);
    Asset();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::glTF::Asset& operator=(::glTF::Asset const&);

    MCNAPI ::Json::Value serialize() const;

    MCNAPI ~Asset();
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

} // namespace glTF
