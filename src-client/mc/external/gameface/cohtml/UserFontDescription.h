#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct UserFontDescription {
public:
    // UserFontDescription inner types declare
    // clang-format off
    struct CharInfo;
    struct KerningPairInfo;
    // clang-format on

    // UserFontDescription inner types define
    struct CharInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkd1c413;
        ::ll::UntypedStorage<4, 4> mUnk277133;
        ::ll::UntypedStorage<4, 4> mUnkc5c142;
        ::ll::UntypedStorage<4, 4> mUnk1943cc;
        ::ll::UntypedStorage<4, 4> mUnk2034db;
        ::ll::UntypedStorage<4, 4> mUnke16767;
        ::ll::UntypedStorage<4, 4> mUnk3f81b3;
        ::ll::UntypedStorage<4, 4> mUnk4e00fc;
        ::ll::UntypedStorage<4, 4> mUnkb64bc9;
        // NOLINTEND

    public:
        // prevent constructor by default
        CharInfo& operator=(CharInfo const&);
        CharInfo(CharInfo const&);
        CharInfo();
    };

    struct KerningPairInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnka9d1d2;
        ::ll::UntypedStorage<4, 4> mUnk60d6df;
        ::ll::UntypedStorage<4, 4> mUnk3b6926;
        // NOLINTEND

    public:
        // prevent constructor by default
        KerningPairInfo& operator=(KerningPairInfo const&);
        KerningPairInfo(KerningPairInfo const&);
        KerningPairInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk584032;
    ::ll::UntypedStorage<8, 8> mUnke6306f;
    ::ll::UntypedStorage<4, 4> mUnka7c302;
    ::ll::UntypedStorage<4, 4> mUnke22b1f;
    ::ll::UntypedStorage<1, 1> mUnk7a6f1f;
    ::ll::UntypedStorage<1, 1> mUnk32e55b;
    ::ll::UntypedStorage<1, 1> mUnke4b65d;
    ::ll::UntypedStorage<4, 4> mUnke4aecb;
    ::ll::UntypedStorage<4, 4> mUnk6ad8ba;
    ::ll::UntypedStorage<4, 4> mUnkb0a131;
    ::ll::UntypedStorage<8, 8> mUnk7691cf;
    ::ll::UntypedStorage<4, 4> mUnked54bc;
    ::ll::UntypedStorage<8, 8> mUnk930d2a;
    ::ll::UntypedStorage<4, 4> mUnkf9fc3e;
    // NOLINTEND

public:
    // prevent constructor by default
    UserFontDescription& operator=(UserFontDescription const&);
    UserFontDescription(UserFontDescription const&);
    UserFontDescription();
};

} // namespace cohtml
