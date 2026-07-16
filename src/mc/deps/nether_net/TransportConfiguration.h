#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct TransportConfiguration {
public:
    // TransportConfiguration inner types declare
    // clang-format off
    struct Http;
    // clang-format on

    // TransportConfiguration inner types define
    struct Http {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk7c12e9;
        ::ll::UntypedStorage<2, 2>  mUnk9cb90c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Http& operator=(Http const&);
        Http(Http const&);
        Http();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1536> mUnkd35e7d;
    ::ll::UntypedStorage<4, 4>    mUnkec821a;
    ::ll::UntypedStorage<8, 1536> mUnkcfa76d;
    ::ll::UntypedStorage<4, 4>    mUnked4e91;
    ::ll::UntypedStorage<8, 48>   mUnkd16d38;
    ::ll::UntypedStorage<4, 4>    mUnk358d77;
    ::ll::UntypedStorage<2, 2>    mUnkf9436b;
    ::ll::UntypedStorage<2, 2>    mUnkf11f51;
    ::ll::UntypedStorage<1, 1>    mUnka03b86;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportConfiguration& operator=(TransportConfiguration const&);
    TransportConfiguration(TransportConfiguration const&);
    TransportConfiguration();
};

} // namespace NetherNet
