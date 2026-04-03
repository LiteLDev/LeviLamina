#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Minecraft;
class ServerLevel;
class ServerNetworkSystem;
// clang-format on

struct ServerInstanceInitArguments {
public:
    // ServerInstanceInitArguments inner types declare
    // clang-format off
    struct CreateLevelArguments;
    struct CreateMinecraftArguments;
    struct CreateNetworkSystemArguments;
    struct HostMultiplayerArguments;
    // clang-format on

    // ServerInstanceInitArguments inner types define
    struct CreateLevelArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkf7633a;
        ::ll::UntypedStorage<1, 1>  mUnk5af719;
        ::ll::UntypedStorage<1, 1>  mUnkcb4a1a;
        ::ll::UntypedStorage<8, 8>  mUnkd2d5e8;
        ::ll::UntypedStorage<8, 16> mUnkfaab22;
        ::ll::UntypedStorage<8, 24> mUnk2a1330;
        ::ll::UntypedStorage<8, 24> mUnk64300b;
        ::ll::UntypedStorage<8, 8>  mUnk225d95;
        ::ll::UntypedStorage<8, 16> mUnkbc6165;
        ::ll::UntypedStorage<8, 16> mUnkbf27dc;
        ::ll::UntypedStorage<8, 16> mUnkbe853f;
        ::ll::UntypedStorage<8, 16> mUnka900dc;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateLevelArguments& operator=(CreateLevelArguments const&);
        CreateLevelArguments(CreateLevelArguments const&);
        CreateLevelArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateLevelArguments();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CreateMinecraftArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk8a233a;
        ::ll::UntypedStorage<8, 8> mUnk9de261;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateMinecraftArguments& operator=(CreateMinecraftArguments const&);
        CreateMinecraftArguments(CreateMinecraftArguments const&);
        CreateMinecraftArguments();
    };

    struct CreateNetworkSystemArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk5e8151;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateNetworkSystemArguments& operator=(CreateNetworkSystemArguments const&);
        CreateNetworkSystemArguments(CreateNetworkSystemArguments const&);
        CreateNetworkSystemArguments();
    };

    struct HostMultiplayerArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk198cfd;
        ::ll::UntypedStorage<8, 32> mUnk655c0d;
        ::ll::UntypedStorage<8, 64> mUnkb0b241;
        ::ll::UntypedStorage<8, 8>  mUnkb9bcec;
        ::ll::UntypedStorage<8, 8>  mUnka2bd24;
        ::ll::UntypedStorage<8, 16> mUnk4eb9ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        HostMultiplayerArguments& operator=(HostMultiplayerArguments const&);
        HostMultiplayerArguments(HostMultiplayerArguments const&);
        HostMultiplayerArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~HostMultiplayerArguments();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkad6698;
    ::ll::UntypedStorage<8, 32>  mUnk5df3b1;
    ::ll::UntypedStorage<8, 32>  mUnkd20537;
    ::ll::UntypedStorage<8, 8>   mUnkedee79;
    ::ll::UntypedStorage<8, 360> mUnkd99218;
    ::ll::UntypedStorage<8, 128> mUnke58fc0;
    ::ll::UntypedStorage<4, 20>  mUnk431c02;
    ::ll::UntypedStorage<8, 8>   mUnkb4db5c;
    ::ll::UntypedStorage<8, 8>   mUnk6e5cf9;
    ::ll::UntypedStorage<8, 8>   mUnkec12de;
    ::ll::UntypedStorage<8, 64>  mUnk563341;
    ::ll::UntypedStorage<8, 8>   mUnke8507a;
    ::ll::UntypedStorage<8, 24>  mUnk7a0375;
    ::ll::UntypedStorage<8, 8>   mUnk7d1a2b;
    ::ll::UntypedStorage<8, 8>   mUnk4237f6;
    ::ll::UntypedStorage<8, 64>  mUnk820d04;
    ::ll::UntypedStorage<8, 64>  mUnk2668ac;
    ::ll::UntypedStorage<8, 8>   mUnke8d5d3;
    ::ll::UntypedStorage<1, 1>   mUnk709b15;
    ::ll::UntypedStorage<8, 16>  mUnk6d5a4d;
    ::ll::UntypedStorage<1, 1>   mUnk8529b8;
    ::ll::UntypedStorage<1, 1>   mUnk752598;
    ::ll::UntypedStorage<1, 1>   mUnke48055;
    ::ll::UntypedStorage<8, 8>   mUnk49d5a0;
    ::ll::UntypedStorage<8, 8>   mUnk67897e;
    ::ll::UntypedStorage<8, 8>   mUnk4cf62f;
    ::ll::UntypedStorage<4, 4>   mUnk9eab06;
    ::ll::UntypedStorage<1, 2>   mUnk1c2f38;
    ::ll::UntypedStorage<1, 1>   mUnkf7d817;
    ::ll::UntypedStorage<8, 24>  mUnk7743ce;
    ::ll::UntypedStorage<8, 24>  mUnk3f0ab2;
    ::ll::UntypedStorage<8, 200> mUnk1abde8;
    ::ll::UntypedStorage<1, 2>   mUnk930f2b;
    ::ll::UntypedStorage<8, 64>  mUnk88818e;
    ::ll::UntypedStorage<8, 16>  mUnk698fc4;
    ::ll::UntypedStorage<8, 16>  mUnk8b2973;
    ::ll::UntypedStorage<8, 16>  mUnk87b043;
    ::ll::UntypedStorage<8, 16>  mUnk639ef4;
    ::ll::UntypedStorage<8, 16>  mUnkae7244;
    ::ll::UntypedStorage<8, 16>  mUnk767c88;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceInitArguments& operator=(ServerInstanceInitArguments const&);
    ServerInstanceInitArguments(ServerInstanceInitArguments const&);
    ServerInstanceInitArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerInstanceInitArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
