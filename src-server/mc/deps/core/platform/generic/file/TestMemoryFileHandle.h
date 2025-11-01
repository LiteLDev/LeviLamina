#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileHandle.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class TestMemoryFileHandle : public ::Core::MemoryFileHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk560fe9;
    // NOLINTEND

public:
    // prevent constructor by default
    TestMemoryFileHandle& operator=(TestMemoryFileHandle const&);
    TestMemoryFileHandle(TestMemoryFileHandle const&);
    TestMemoryFileHandle();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual ::Core::Result _write(void const*, uint64) /*override*/;

    // vIndex: 0
    virtual ~TestMemoryFileHandle() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
