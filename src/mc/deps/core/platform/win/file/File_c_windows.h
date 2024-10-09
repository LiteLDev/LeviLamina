#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystem_windows; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class File_c_windows {
public:
    // prevent constructor by default
    File_c_windows& operator=(File_c_windows const&);
    File_c_windows(File_c_windows const&);
    File_c_windows();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~File_c_windows() = default;

    // vIndex: 1
    virtual class Core::PathBuffer<std::string> _getPath() const;

    // vIndex: 2
    virtual uint64 _getBlockSize() const;

    // vIndex: 3
    virtual bool _isOpen();

    // vIndex: 4
    virtual class Core::Result _close();

    // vIndex: 5
    virtual class Core::Result _read(void*, uint64, uint64*);

    // vIndex: 6
    virtual class Core::Result _readExactly(void*, uint64);

    // vIndex: 7
    virtual class Core::Result _skip(uint64);

    // vIndex: 8
    virtual class Core::Result _readAtPosition(uint64, void*, uint64, uint64*);

    // vIndex: 9
    virtual class Core::Result _getPosition(uint64*);

    // vIndex: 10
    virtual class Core::Result _setPosition(uint64);

    // vIndex: 11
    virtual class Core::Result _write(void const*, uint64);

    // vIndex: 12
    virtual class Core::Result _flush();

    // vIndex: 13
    virtual class Core::Result _getSize(uint64*);

    // vIndex: 14
    virtual class Core::Result _getRemainingSize(uint64*);

    MCAPI static void initialize();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Core::Result _open(
        class Core::FileSystem_windows*,
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::FileOpenMode,
        ::Core::FileBufferingMode
    );

    // NOLINTEND
};

}; // namespace Core
