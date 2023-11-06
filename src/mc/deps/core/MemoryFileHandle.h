#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileImpl.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class MemoryFileHandle : public ::Core::FileImpl {
public:
    // prevent constructor by default
    MemoryFileHandle& operator=(MemoryFileHandle const&);
    MemoryFileHandle(MemoryFileHandle const&);
    MemoryFileHandle();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MemoryFileHandle@@@UEAA@XZ
    virtual ~MemoryFileHandle();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // NOLINTEND
};

}; // namespace Core
