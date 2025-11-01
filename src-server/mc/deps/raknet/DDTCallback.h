#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/FileListTransferCBInterface.h"

class DDTCallback : public ::RakNet::FileListTransferCBInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6d9c0f;
    ::ll::UntypedStorage<1, 512> mUnkf2a0df;
    ::ll::UntypedStorage<8, 8> mUnkc103dd;
    // NOLINTEND

public:
    // prevent constructor by default
    DDTCallback& operator=(DDTCallback const&);
    DDTCallback(DDTCallback const&);
    DDTCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DDTCallback() /*override*/ = default;

    // vIndex: 1
    virtual bool OnFile(::RakNet::FileListTransferCBInterface::OnFileStruct*) /*override*/;

    // vIndex: 2
    virtual void OnFileProgress(::RakNet::FileListTransferCBInterface::FileProgressStruct*) /*override*/;

    // vIndex: 4
    virtual bool OnDownloadComplete(::RakNet::FileListTransferCBInterface::DownloadCompleteStruct*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
