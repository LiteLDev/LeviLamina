#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class Path; }
namespace Core { struct PooledFileHandle; }
// clang-format on

namespace Core {

class FileHandlePool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkf4a6df;
    // NOLINTEND

public:
    // prevent constructor by default
    FileHandlePool& operator=(FileHandlePool const&);
    FileHandlePool(FileHandlePool const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileHandlePool();

    MCNAPI ::std::shared_ptr<::Core::PooledFileHandle>
    _depositHandle(::Core::Path const& filePath, ::Core::File&& file);

    MCNAPI ::std::shared_ptr<::Core::PooledFileHandle> acquireHandle(::Core::Path const& filePath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Core
