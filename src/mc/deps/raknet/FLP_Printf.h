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
    virtual ~FLP_Printf() /*override*/ = default;

    virtual void OnAddFilesFromDirectoryStarted(::RakNet::FileList*, char*) /*override*/;

    virtual void OnDirectory(::RakNet::FileList*, char*, uint) /*override*/;

    virtual void OnFilePushesComplete(::RakNet::SystemAddress, ushort) /*override*/;

    virtual void OnSendAborted(::RakNet::SystemAddress) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
