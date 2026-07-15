#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
// clang-format on

namespace Core::Internal {

class FileData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk26e6a0;
    ::ll::UntypedStorage<8, 8>  mUnk62691d;
    ::ll::UntypedStorage<8, 8>  mUnkdf80cc;
    ::ll::UntypedStorage<8, 64> mUnkf05cd7;
    ::ll::UntypedStorage<8, 64> mUnka79bc3;
    ::ll::UntypedStorage<4, 4>  mUnk2c8bd7;
    ::ll::UntypedStorage<8, 16> mUnk80ab4b;
    ::ll::UntypedStorage<8, 8>  mUnke248bb;
    ::ll::UntypedStorage<8, 8>  mUnkaa0b7a;
    ::ll::UntypedStorage<1, 1>  mUnkaa6ba1;
    ::ll::UntypedStorage<1, 1>  mUnk91c180;
    ::ll::UntypedStorage<1, 1>  mUnk2dcea8;
    ::ll::UntypedStorage<8, 8>  mUnk7f49c0;
    // NOLINTEND

public:
    // prevent constructor by default
    FileData& operator=(FileData const&);
    FileData(FileData const&);
    FileData();
};

} // namespace Core::Internal
