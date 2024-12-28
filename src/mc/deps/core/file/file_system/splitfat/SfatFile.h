#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core::SFAT {

class SfatFile : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1576d4;
    ::ll::UntypedStorage<8, 32> mUnkc2c7ca;
    // NOLINTEND

public:
    // prevent constructor by default
    SfatFile& operator=(SfatFile const&);
    SfatFile(SfatFile const&);
    SfatFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SfatFile() /*override*/;

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

    // vIndex: 8
    virtual ::Core::Result _readAtPosition(uint64, void*, uint64, uint64*) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _write(void const*, uint64) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _setPosition(uint64) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _getPosition(uint64*) /*override*/;

    // vIndex: 7
    virtual ::Core::Result _skip(uint64) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _flush() /*override*/;

    // vIndex: 13
    virtual ::Core::Result _getSize(uint64*) /*override*/;

    // vIndex: 14
    virtual ::Core::Result _getRemainingSize(uint64*) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Core::PathBuffer<::std::string> $_getPath() const;

    MCAPI uint64 $_getBlockSize() const;

    MCAPI bool $_isOpen();

    MCAPI ::Core::Result $_close();

    MCAPI ::Core::Result $_read(void*, uint64, uint64*);

    MCAPI ::Core::Result $_readExactly(void*, uint64);

    MCAPI ::Core::Result $_readAtPosition(uint64, void*, uint64, uint64*);

    MCAPI ::Core::Result $_write(void const*, uint64);

    MCAPI ::Core::Result $_setPosition(uint64);

    MCAPI ::Core::Result $_getPosition(uint64*);

    MCAPI ::Core::Result $_skip(uint64);

    MCAPI ::Core::Result $_flush();

    MCAPI ::Core::Result $_getSize(uint64*);

    MCAPI ::Core::Result $_getRemainingSize(uint64*);
    // NOLINTEND
};

} // namespace Core::SFAT
