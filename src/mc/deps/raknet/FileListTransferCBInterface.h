#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/FileListNodeContext.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"

namespace RakNet {

class FileListTransferCBInterface {
public:
    // FileListTransferCBInterface inner types declare
    // clang-format off
    struct DownloadCompleteStruct;
    struct FileProgressStruct;
    struct OnFileStruct;
    // clang-format on

    // FileListTransferCBInterface inner types define
    struct OnFileStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                      fileIndex;
        ::ll::TypedStorage<1, 512, char[512]>               fileName;
        ::ll::TypedStorage<8, 8, char*>                     fileData;
        ::ll::TypedStorage<4, 4, uint>                      byteLengthOfThisFile;
        ::ll::TypedStorage<4, 4, uint>                      bytesDownloadedForThisFile;
        ::ll::TypedStorage<2, 2, ushort>                    setID;
        ::ll::TypedStorage<4, 4, uint>                      numberOfFilesInThisSet;
        ::ll::TypedStorage<4, 4, uint>                      byteLengthOfThisSet;
        ::ll::TypedStorage<4, 4, uint>                      bytesDownloadedForThisSet;
        ::ll::TypedStorage<8, 32, ::FileListNodeContext>    context;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> senderSystemAddress;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     senderGuid;
        // NOLINTEND
    };

    struct FileProgressStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::FileListTransferCBInterface::OnFileStruct*> onFileStruct;
        ::ll::TypedStorage<4, 4, uint>                                                 partCount;
        ::ll::TypedStorage<4, 4, uint>                                                 partTotal;
        ::ll::TypedStorage<4, 4, uint>                                                 dataChunkLength;
        ::ll::TypedStorage<8, 8, char*>                                                firstDataChunk;
        ::ll::TypedStorage<8, 8, char*>                                                iriDataChunk;
        ::ll::TypedStorage<4, 4, uint>                                                 iriWriteOffset;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                            senderSystemAddress;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                                senderGuid;
        ::ll::TypedStorage<1, 1, bool> allocateIrIDataChunkAutomatically;
        // NOLINTEND
    };

    struct DownloadCompleteStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort>                    setID;
        ::ll::TypedStorage<4, 4, uint>                      numberOfFilesInThisSet;
        ::ll::TypedStorage<4, 4, uint>                      byteLengthOfThisSet;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> senderSystemAddress;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     senderGuid;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileListTransferCBInterface() = default;

    // vIndex: 1
    virtual bool OnFile(::RakNet::FileListTransferCBInterface::OnFileStruct*) = 0;

    // vIndex: 2
    virtual void OnFileProgress(::RakNet::FileListTransferCBInterface::FileProgressStruct*) = 0;

    // vIndex: 3
    virtual bool Update();

    // vIndex: 4
    virtual bool OnDownloadComplete(::RakNet::FileListTransferCBInterface::DownloadCompleteStruct*);

    // vIndex: 5
    virtual void OnDereference();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
