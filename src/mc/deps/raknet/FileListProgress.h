#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class FileList; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class FileListProgress {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileListProgress() = default;

    // vIndex: 1
    virtual void OnAddFilesFromDirectoryStarted(::RakNet::FileList*, char*);

    // vIndex: 2
    virtual void OnDirectory(::RakNet::FileList*, char*, uint);

    // vIndex: 3
    virtual void OnFile(::RakNet::FileList*, char*, char*, uint);

    // vIndex: 4
    virtual void OnFilePush(char const*, uint, uint, uint, bool, ::RakNet::SystemAddress, ushort);

    // vIndex: 5
    virtual void OnFilePushesComplete(::RakNet::SystemAddress, ushort);

    // vIndex: 6
    virtual void OnSendAborted(::RakNet::SystemAddress);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
