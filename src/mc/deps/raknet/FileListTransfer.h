#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class FileListTransfer : public ::RakNet::PluginInterface2 {
public:
    // FileListTransfer inner types declare
    // clang-format off
    struct FileToPush;
    struct FileToPushRecipient;
    struct ThreadData;
    // clang-format on

    // FileListTransfer inner types define
    struct FileToPush {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 72> mUnk9b5537;
        ::ll::UntypedStorage<4, 4>  mUnke652c3;
        ::ll::UntypedStorage<1, 1>  mUnk644806;
        ::ll::UntypedStorage<4, 4>  mUnkec54fe;
        ::ll::UntypedStorage<4, 4>  mUnke2d929;
        ::ll::UntypedStorage<8, 8>  mUnk194638;
        ::ll::UntypedStorage<4, 4>  mUnkfd047b;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileToPush& operator=(FileToPush const&);
        FileToPush(FileToPush const&);
        FileToPush();
    };

    struct FileToPushRecipient {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnkec1c56;
        ::ll::UntypedStorage<8, 40>  mUnk12125b;
        ::ll::UntypedStorage<8, 136> mUnka13636;
        ::ll::UntypedStorage<2, 2>   mUnke71aad;
        ::ll::UntypedStorage<8, 24>  mUnka47e1c;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileToPushRecipient& operator=(FileToPushRecipient const&);
        FileToPushRecipient(FileToPushRecipient const&);
        FileToPushRecipient();
    };

    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnkcd8a26;
        ::ll::UntypedStorage<8, 136> mUnk232d6c;
        ::ll::UntypedStorage<2, 2>   mUnk274b3d;
        // NOLINTEND

    public:
        // prevent constructor by default
        ThreadData& operator=(ThreadData const&);
        ThreadData(ThreadData const&);
        ThreadData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkad0648;
    ::ll::UntypedStorage<2, 2>   mUnk8fae7b;
    ::ll::UntypedStorage<8, 16>  mUnk656737;
    ::ll::UntypedStorage<8, 16>  mUnk30535d;
    ::ll::UntypedStorage<8, 40>  mUnk3a0b5a;
    ::ll::UntypedStorage<8, 328> mUnk76bc9d;
    // NOLINTEND

public:
    // prevent constructor by default
    FileListTransfer& operator=(FileListTransfer const&);
    FileListTransfer(FileListTransfer const&);
    FileListTransfer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileListTransfer() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 3
    virtual void Update() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
