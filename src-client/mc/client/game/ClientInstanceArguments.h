#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class LegacyClientNetworkHandler;
class LevelRenderer;
class MinecraftCommands;
// clang-format on

struct ClientInstanceArguments {
public:
    // ClientInstanceArguments inner types declare
    // clang-format off
    struct CreateLevelRendererArguments;
    struct CreateLegacyClientNetworkHandlerArguments;
    // clang-format on

    // ClientInstanceArguments inner types define
    struct CreateLevelRendererArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnka9d675;
        ::ll::UntypedStorage<8, 24> mUnk49fcad;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateLevelRendererArguments& operator=(CreateLevelRendererArguments const&);
        CreateLevelRendererArguments(CreateLevelRendererArguments const&);
        CreateLevelRendererArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateLevelRendererArguments();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CreateLegacyClientNetworkHandlerArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk1816d3;
        ::ll::UntypedStorage<4, 4>  mUnk59e9eb;
        ::ll::UntypedStorage<8, 8>  mUnk26db83;
        ::ll::UntypedStorage<8, 8>  mUnk5ce196;
        ::ll::UntypedStorage<8, 8>  mUnk554f65;
        ::ll::UntypedStorage<8, 16> mUnk95c634;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateLegacyClientNetworkHandlerArguments& operator=(CreateLegacyClientNetworkHandlerArguments const&);
        CreateLegacyClientNetworkHandlerArguments(CreateLegacyClientNetworkHandlerArguments const&);
        CreateLegacyClientNetworkHandlerArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateLegacyClientNetworkHandlerArguments();
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
    ::ll::UntypedStorage<8, 8>  mUnk1419f9;
    ::ll::UntypedStorage<8, 8>  mUnk58a5fb;
    ::ll::UntypedStorage<8, 8>  mUnk5cc973;
    ::ll::UntypedStorage<8, 24> mUnk4fede5;
    ::ll::UntypedStorage<1, 1>  mUnk96476d;
    ::ll::UntypedStorage<8, 8>  mUnkd97db6;
    ::ll::UntypedStorage<8, 8>  mUnk4b8e2f;
    ::ll::UntypedStorage<8, 24> mUnkd268f2;
    ::ll::UntypedStorage<8, 24> mUnkf73415;
    ::ll::UntypedStorage<8, 64> mUnk34a4d7;
    ::ll::UntypedStorage<8, 64> mUnkdcda39;
    ::ll::UntypedStorage<8, 64> mUnk5c0704;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceArguments& operator=(ClientInstanceArguments const&);
    ClientInstanceArguments(ClientInstanceArguments const&);
    ClientInstanceArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientInstanceArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
