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

class File_c : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk17d1aa;
    ::ll::UntypedStorage<8, 32> mUnkb978c3;
    // NOLINTEND

public:
    // prevent constructor by default
    File_c& operator=(File_c const&);
    File_c(File_c const&);
    File_c();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~File_c() /*override*/ = default;

    virtual ::Core::PathBuffer<::std::string> _getPath() const /*override*/;

    virtual uint64 _getBlockSize() const /*override*/;

    virtual bool _isOpen() /*override*/;

    virtual ::Core::Result _close() /*override*/;

    virtual ::Core::Result _read(void*, uint64, uint64*) /*override*/;

    virtual ::Core::Result _readExactly(void*, uint64) /*override*/;

    virtual ::Core::Result _readAtPosition(uint64, void*, uint64, uint64*) /*override*/;

    virtual ::Core::Result _write(void const*, uint64) /*override*/;

    virtual ::Core::Result _setPosition(uint64) /*override*/;

    virtual ::Core::Result _getPosition(uint64*) /*override*/;

    virtual ::Core::Result _skip(uint64) /*override*/;

    virtual ::Core::Result _flush() /*override*/;

    virtual ::Core::Result _getSize(uint64*) /*override*/;

    virtual ::Core::Result _getRemainingSize(uint64*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
