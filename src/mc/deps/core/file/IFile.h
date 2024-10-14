#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class IFile {
public:
    // prevent constructor by default
    IFile& operator=(IFile const&);
    IFile(IFile const&);
    IFile();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFile() = default;

    // vIndex: 1
    virtual class Core::Result readExactly(void* buffer, uint64 numBytes) = 0;

    // vIndex: 2
    virtual class Core::Result
    readAtPosition(uint64 position, void* buffer, uint64 numBytes, uint64* pNumBytesRead) = 0;

    // vIndex: 3
    virtual class Core::Result getSize(uint64* pSize) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};

}; // namespace Core
