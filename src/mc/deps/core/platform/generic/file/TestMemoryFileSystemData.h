#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemData.h"

namespace Bedrock {

struct TestMemoryFileSystemData : public ::Core::MemoryFileSystemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk65452a;
    ::ll::UntypedStorage<8, 64> mUnk63a6d7;
    // NOLINTEND

public:
    // prevent constructor by default
    TestMemoryFileSystemData& operator=(TestMemoryFileSystemData const&);
    TestMemoryFileSystemData(TestMemoryFileSystemData const&);
    TestMemoryFileSystemData();
};

} // namespace Bedrock
