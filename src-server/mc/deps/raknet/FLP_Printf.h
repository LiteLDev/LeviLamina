#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/FileListProgress.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class FileList; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class FLP_Printf : public ::RakNet::FileListProgress {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FLP_Printf() /*override*/ = default;

    // vIndex: 1
    virtual void OnAddFilesFromDirectoryStarted(::RakNet::FileList*, char*) /*override*/;

    // vIndex: 2
    virtual void OnDirectory(::RakNet::FileList*, char*, uint) /*override*/;

    // vIndex: 5
    virtual void OnFilePushesComplete(::RakNet::SystemAddress, ushort) /*override*/;

    // vIndex: 6
    virtual void OnSendAborted(::RakNet::SystemAddress) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
