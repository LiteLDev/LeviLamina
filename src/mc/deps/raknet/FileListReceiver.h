#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Map; }
namespace RakNet { class FileListTransferCBInterface; }
namespace RakNet { struct FLR_MemoryBlock; }
// clang-format on

namespace RakNet {

struct FileListReceiver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::FileListTransferCBInterface*> downloadHandler;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>              allowedSender;
    ::ll::TypedStorage<2, 2, ushort>                                 setID;
    ::ll::TypedStorage<4, 4, uint>                                   setCount;
    ::ll::TypedStorage<4, 4, uint>                                   setTotalCompressedTransmissionLength;
    ::ll::TypedStorage<4, 4, uint>                                   setTotalFinalLength;
    ::ll::TypedStorage<4, 4, uint>                                   setTotalDownloadedLength;
    ::ll::TypedStorage<1, 1, bool>                                   gotSetHeader;
    ::ll::TypedStorage<1, 1, bool>                                   deleteDownloadHandler;
    ::ll::TypedStorage<1, 1, bool>                                   isCompressed;
    ::ll::TypedStorage<4, 4, int>                                    filesReceived;
    ::ll::TypedStorage<8, 32, ::DataStructures::Map<uint, ::RakNet::FLR_MemoryBlock, $unknown_type>> pushedFiles;
    ::ll::TypedStorage<4, 4, uint>                                                                   partLength;
    // NOLINTEND
};

} // namespace RakNet
