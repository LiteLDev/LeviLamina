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
    virtual ~FileListProgress() = default;

    virtual void OnAddFilesFromDirectoryStarted(::RakNet::FileList*, char*);

    virtual void OnDirectory(::RakNet::FileList*, char*, uint);

    virtual void OnFile(::RakNet::FileList*, char*, char*, uint);

    virtual void OnFilePush(char const*, uint, uint, uint, bool, ::RakNet::SystemAddress, ushort);

    virtual void OnFilePushesComplete(::RakNet::SystemAddress, ushort);

    virtual void OnSendAborted(::RakNet::SystemAddress);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
