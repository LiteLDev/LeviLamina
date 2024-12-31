#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/splitfat/ErrorCode.h"
#include "mc/external/splitfat/FileBase.h"
#include "mc/external/splitfat/SeekMode.h"

namespace SFAT {

class SplitFATFile : public ::SFAT::FileBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5fe3cf;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitFATFile& operator=(SplitFATFile const&);
    SplitFATFile(SplitFATFile const&);
    SplitFATFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SplitFATFile() /*override*/ = default;

    // vIndex: 1
    virtual bool isOpen() const /*override*/;

    // vIndex: 2
    virtual ::SFAT::ErrorCode close() /*override*/;

    // vIndex: 3
    virtual ::SFAT::ErrorCode read(void*, uint64, uint64&) /*override*/;

    // vIndex: 4
    virtual ::SFAT::ErrorCode write(void const*, uint64, uint64&) /*override*/;

    // vIndex: 7
    virtual ::SFAT::ErrorCode seek(int64, ::SFAT::SeekMode) /*override*/;

    // vIndex: 8
    virtual ::SFAT::ErrorCode getPosition(int64&) /*override*/;

    // vIndex: 9
    virtual ::SFAT::ErrorCode getSize(uint64&) /*override*/;

    // vIndex: 10
    virtual ::SFAT::ErrorCode flush() /*override*/;

    // vIndex: 12
    virtual ::SFAT::ErrorCode open(char const*, uint) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SFAT
