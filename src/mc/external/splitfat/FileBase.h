#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/splitfat/ErrorCode.h"
#include "mc/external/splitfat/SeekMode.h"

namespace SFAT {

class FileBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk91bf0f;
    ::ll::UntypedStorage<4, 4> mUnk345c05;
    // NOLINTEND

public:
    // prevent constructor by default
    FileBase& operator=(FileBase const&);
    FileBase(FileBase const&);
    FileBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileBase() = default;

    // vIndex: 1
    virtual bool isOpen() const = 0;

    // vIndex: 2
    virtual ::SFAT::ErrorCode close() = 0;

    // vIndex: 3
    virtual ::SFAT::ErrorCode read(void*, uint64, uint64&) = 0;

    // vIndex: 4
    virtual ::SFAT::ErrorCode write(void const*, uint64, uint64&) = 0;

    // vIndex: 5
    virtual ::SFAT::ErrorCode readAtPosition(void*, uint64, int64, uint64&);

    // vIndex: 6
    virtual ::SFAT::ErrorCode writeAtPosition(void const*, uint64, int64, uint64&);

    // vIndex: 7
    virtual ::SFAT::ErrorCode seek(int64, ::SFAT::SeekMode) = 0;

    // vIndex: 8
    virtual ::SFAT::ErrorCode getPosition(int64&) = 0;

    // vIndex: 9
    virtual ::SFAT::ErrorCode getSize(uint64&) = 0;

    // vIndex: 10
    virtual ::SFAT::ErrorCode flush() = 0;

    // vIndex: 12
    virtual ::SFAT::ErrorCode open(char const*, uint) = 0;

    // vIndex: 11
    virtual ::SFAT::ErrorCode open(char const*, char const*);
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
