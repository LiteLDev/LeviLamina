#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class MinecraftCommands;
class MinecraftServiceKeyManager;
class ServerNetworkHandler;
// clang-format on

struct MinecraftArguments {
public:
    // MinecraftArguments inner types declare
    // clang-format off
    struct CreateMinecraftCommandsArgs;
    struct CreateServerNetworkHandlerArgs;
    struct MinecraftCommandsFactoryArguments;
    struct ServerNetworkHandlerFactoryArguments;
    // clang-format on

    // MinecraftArguments inner types define
    struct CreateMinecraftCommandsArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkfc63c8;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateMinecraftCommandsArgs& operator=(CreateMinecraftCommandsArgs const&);
        CreateMinecraftCommandsArgs(CreateMinecraftCommandsArgs const&);
        CreateMinecraftCommandsArgs();
    };

    struct CreateServerNetworkHandlerArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk7c6ff6;
        ::ll::UntypedStorage<8, 8>  mUnkbb3d45;
        ::ll::UntypedStorage<8, 8>  mUnkec036e;
        ::ll::UntypedStorage<8, 8>  mUnkdc8fb1;
        ::ll::UntypedStorage<4, 4>  mUnk2ffc16;
        ::ll::UntypedStorage<4, 4>  mUnk6aca64;
        ::ll::UntypedStorage<8, 8>  mUnk9574e8;
        ::ll::UntypedStorage<8, 8>  mUnk196507;
        ::ll::UntypedStorage<8, 8>  mUnkdd1599;
        ::ll::UntypedStorage<8, 8>  mUnk7ca080;
        ::ll::UntypedStorage<8, 8>  mUnk40263c;
        ::ll::UntypedStorage<8, 16> mUnkcf1eb4;
        ::ll::UntypedStorage<8, 8>  mUnk9d358c;
        ::ll::UntypedStorage<8, 8>  mUnk84fb6d;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateServerNetworkHandlerArgs& operator=(CreateServerNetworkHandlerArgs const&);
        CreateServerNetworkHandlerArgs(CreateServerNetworkHandlerArgs const&);
        CreateServerNetworkHandlerArgs();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateServerNetworkHandlerArgs();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MinecraftCommandsFactoryArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkeb1411;
        ::ll::UntypedStorage<8, 8> mUnke21dde;
        // NOLINTEND

    public:
        // prevent constructor by default
        MinecraftCommandsFactoryArguments& operator=(MinecraftCommandsFactoryArguments const&);
        MinecraftCommandsFactoryArguments(MinecraftCommandsFactoryArguments const&);
        MinecraftCommandsFactoryArguments();
    };

    struct ServerNetworkHandlerFactoryArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk63a19e;
        ::ll::UntypedStorage<8, 8>   mUnkc09c5e;
        ::ll::UntypedStorage<8, 368> mUnk130965;
        ::ll::UntypedStorage<8, 128> mUnk757f1a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerNetworkHandlerFactoryArguments& operator=(ServerNetworkHandlerFactoryArguments const&);
        ServerNetworkHandlerFactoryArguments(ServerNetworkHandlerFactoryArguments const&);
        ServerNetworkHandlerFactoryArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ServerNetworkHandlerFactoryArguments(::MinecraftArguments::ServerNetworkHandlerFactoryArguments&&);

        MCNAPI ~ServerNetworkHandlerFactoryArguments();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::MinecraftArguments::ServerNetworkHandlerFactoryArguments&&);
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
    ::ll::UntypedStorage<8, 8>  mUnk13dd73;
    ::ll::UntypedStorage<8, 8>  mUnk99bc61;
    ::ll::UntypedStorage<8, 8>  mUnkc400a9;
    ::ll::UntypedStorage<8, 8>  mUnk55bc06;
    ::ll::UntypedStorage<8, 16> mUnk806b1f;
    ::ll::UntypedStorage<8, 8>  mUnk146694;
    ::ll::UntypedStorage<1, 1>  mUnk10fae3;
    ::ll::UntypedStorage<8, 8>  mUnk4298d6;
    ::ll::UntypedStorage<8, 8>  mUnkf34ccc;
    ::ll::UntypedStorage<8, 8>  mUnk24e7ba;
    ::ll::UntypedStorage<8, 8>  mUnk4ff601;
    ::ll::UntypedStorage<8, 64> mUnk4e2b86;
    ::ll::UntypedStorage<8, 64> mUnk979579;
    ::ll::UntypedStorage<1, 1>  mUnk8f0ef7;
    ::ll::UntypedStorage<8, 16> mUnk4389b9;
    ::ll::UntypedStorage<8, 16> mUnka187cd;
    ::ll::UntypedStorage<8, 64> mUnkd0ab0f;
    ::ll::UntypedStorage<8, 64> mUnkb71d0a;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftArguments& operator=(MinecraftArguments const&);
    MinecraftArguments(MinecraftArguments const&);
    MinecraftArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
