#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/FileListNodeContext.h"
#include "mc/deps/raknet/RakString.h"

namespace RakNet {

struct FileListNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>    filename;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>    fullPathToFile;
    ::ll::TypedStorage<8, 8, char*>                  data;
    ::ll::TypedStorage<4, 4, uint>                   dataLengthBytes;
    ::ll::TypedStorage<4, 4, uint>                   fileLengthBytes;
    ::ll::TypedStorage<8, 32, ::FileListNodeContext> context;
    ::ll::TypedStorage<1, 1, bool>                   isAReference;
    // NOLINTEND
};

} // namespace RakNet
