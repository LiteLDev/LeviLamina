#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class FileListProgress; }
namespace RakNet { struct FileListNode; }
// clang-format on

namespace RakNet {

class FileList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::FileListNode>>      fileList;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::FileListProgress*>> fileListProgressCallbacks;
    // NOLINTEND
};

} // namespace RakNet
