#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class LruFile : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb9cef7;
    ::ll::UntypedStorage<8, 32> mUnk1c3fe1;
    // NOLINTEND

public:
    // prevent constructor by default
    LruFile& operator=(LruFile const&);
    LruFile(LruFile const&);
    LruFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LruFile() /*override*/ = default;

    // vIndex: 1
    virtual ::Core::PathBuffer<::std::string> _getPath() const /*override*/;

    // vIndex: 2
    virtual uint64 _getBlockSize() const /*override*/;

    // vIndex: 3
    virtual bool _isOpen() /*override*/;

    // vIndex: 4
    virtual ::Core::Result _close() /*override*/;

    // vIndex: 5
    virtual ::Core::Result _read(void*, uint64, uint64*) /*override*/;

    // vIndex: 6
    virtual ::Core::Result _readExactly(void*, uint64) /*override*/;

    // vIndex: 7
    virtual ::Core::Result _skip(uint64) /*override*/;

    // vIndex: 8
    virtual ::Core::Result _readAtPosition(uint64, void*, uint64, uint64*) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _getPosition(uint64*) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _setPosition(uint64) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _write(void const*, uint64) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _flush() /*override*/;

    // vIndex: 13
    virtual ::Core::Result _getSize(uint64*) /*override*/;

    // vIndex: 14
    virtual ::Core::Result _getRemainingSize(uint64*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
