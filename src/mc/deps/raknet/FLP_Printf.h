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
    // prevent constructor by default
    FLP_Printf& operator=(FLP_Printf const&);
    FLP_Printf(FLP_Printf const&);
    FLP_Printf();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FLP_Printf() /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnAddFilesFromDirectoryStarted(::RakNet::FileList*, char*);

    MCAPI void $OnDirectory(::RakNet::FileList*, char*, uint);

    MCAPI void $OnFilePushesComplete(::RakNet::SystemAddress, ushort);

    MCAPI void $OnSendAborted(::RakNet::SystemAddress);
    // NOLINTEND
};

} // namespace RakNet
