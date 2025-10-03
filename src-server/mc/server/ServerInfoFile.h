#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerInfoFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6e8b0d;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInfoFile& operator=(ServerInfoFile const&);
    ServerInfoFile(ServerInfoFile const&);
    ServerInfoFile();
};
