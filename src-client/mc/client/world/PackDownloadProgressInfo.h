#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldResourcePackDownloaderStatus.h"

namespace World {

struct PackDownloadProgressInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::World::WorldResourcePackDownloaderStatus> status;
    ::ll::TypedStorage<4, 4, float>                                      progress;
    ::ll::TypedStorage<8, 32, ::std::string>                             name;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PackDownloadProgressInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
