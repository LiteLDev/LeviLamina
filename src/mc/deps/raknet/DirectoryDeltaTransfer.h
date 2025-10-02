#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class FileList; }
namespace RakNet { class FileListTransfer; }
namespace RakNet { class IncrementalReadInterface; }
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class DirectoryDeltaTransfer : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 512, char[512]>                         applicationDirectory;
    ::ll::TypedStorage<8, 8, ::RakNet::FileListTransfer*>         fileListTransfer;
    ::ll::TypedStorage<8, 8, ::RakNet::FileList*>                 availableUploads;
    ::ll::TypedStorage<4, 4, ::PacketPriority>                    priority;
    ::ll::TypedStorage<1, 1, char>                                orderingChannel;
    ::ll::TypedStorage<8, 8, ::RakNet::IncrementalReadInterface*> incrementalReadInterface;
    ::ll::TypedStorage<4, 4, uint>                                chunkSize;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DirectoryDeltaTransfer() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
