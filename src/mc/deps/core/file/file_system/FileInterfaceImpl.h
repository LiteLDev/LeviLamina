#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/IFile.h"

// auto generated forward declare list
// clang-format off
namespace Core { class IFile; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileInterfaceImpl : public ::Core::IFile {
public:
    // prevent constructor by default
    FileInterfaceImpl& operator=(FileInterfaceImpl const&);
    FileInterfaceImpl(FileInterfaceImpl const&);
    FileInterfaceImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileInterfaceImpl() = default;

    // vIndex: 1
    virtual class Core::Result readExactly(void* buffer, uint64 numBytes);

    // vIndex: 2
    virtual class Core::Result readAtPosition(uint64 position, void* buffer, uint64 numBytes, uint64* pNumBytesRead);

    // vIndex: 3
    virtual class Core::Result getSize(uint64* pSize);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Core::Result getSize$(uint64* pSize);

    MCAPI class Core::Result readAtPosition$(uint64 position, void* buffer, uint64 numBytes, uint64* pNumBytesRead);

    MCAPI class Core::Result readExactly$(void* buffer, uint64 numBytes);

    // NOLINTEND
};

}; // namespace Core
