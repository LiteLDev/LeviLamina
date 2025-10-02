#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/FileListNode.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/ThreadPool.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Map; }
namespace RakNet { class FileListProgress; }
namespace RakNet { class IncrementalReadInterface; }
namespace RakNet { struct FileListReceiver; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
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
        ::ll::TypedStorage<8, 72, ::RakNet::FileListNode>             fileListNode;
        ::ll::TypedStorage<4, 4, ::PacketPriority>                    packetPriority;
        ::ll::TypedStorage<1, 1, char>                                orderingChannel;
        ::ll::TypedStorage<4, 4, uint>                                currentOffset;
        ::ll::TypedStorage<4, 4, uint>                                setIndex;
        ::ll::TypedStorage<8, 8, ::RakNet::IncrementalReadInterface*> incrementalReadInterface;
        ::ll::TypedStorage<4, 4, uint>                                chunkSize;
        // NOLINTEND
    };

    struct FileToPushRecipient {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                                              refCount;
        ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                            refCountMutex;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                                         systemAddress;
        ::ll::TypedStorage<2, 2, ushort>                                                            setId;
        ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::FileListTransfer::FileToPush*>> filesToPush;
        // NOLINTEND
    };

    struct ThreadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::FileListTransfer*> fileListTransfer;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>   systemAddress;
        ::ll::TypedStorage<2, 2, ushort>                      setId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Map<ushort, ::RakNet::FileListReceiver*, $unknown_type>>
                                                                                   fileListReceivers;
    ::ll::TypedStorage<2, 2, ushort>                                               setId;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::FileListProgress*>> fileListProgressCallbacks;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::FileListTransfer::FileToPushRecipient*>>
                                                                                          fileToPushRecipientList;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                      fileToPushRecipientListMutex;
    ::ll::TypedStorage<8, 328, ::ThreadPool<::RakNet::FileListTransfer::ThreadData, int>> threadPool;
    // NOLINTEND

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
