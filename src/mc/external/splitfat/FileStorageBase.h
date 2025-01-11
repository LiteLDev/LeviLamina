#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/splitfat/ErrorCode.h"

// auto generated forward declare list
// clang-format off
namespace SFAT { class FileBase; }
namespace SFAT { struct FileDescriptorRecord; }
// clang-format on

namespace SFAT {

class FileStorageBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileStorageBase() = default;

    // vIndex: 1
    virtual bool fileExists(char const*) = 0;

    // vIndex: 2
    virtual bool directoryExists(char const*) = 0;

    // vIndex: 3
    virtual bool fileOrDirectoryExists(char const*) = 0;

    // vIndex: 4
    virtual ::SFAT::ErrorCode deleteFile(char const*) = 0;

    // vIndex: 5
    virtual ::SFAT::ErrorCode removeDirectory(char const*) = 0;

    // vIndex: 6
    virtual ::SFAT::ErrorCode createDirectory(char const*) = 0;

    // vIndex: 7
    virtual ::SFAT::ErrorCode renameFile(char const*, char const*) = 0;

    // vIndex: 8
    virtual ::SFAT::ErrorCode renameDirectory(char const*, char const*) = 0;

    // vIndex: 9
    virtual ::SFAT::ErrorCode getFileSize(char const*, uint64&) = 0;

    // vIndex: 10
    virtual bool isFile(char const*) = 0;

    // vIndex: 11
    virtual bool isDirectory(char const*) = 0;

    // vIndex: 12
    virtual ::SFAT::ErrorCode
    iterateThroughDirectory(char const*, uint, ::std::function<::SFAT::ErrorCode(bool&, ::SFAT::FileDescriptorRecord const&, ::std::string const&)>) = 0;

    // vIndex: 13
    virtual ::SFAT::ErrorCode getFreeSpace(uint64&) = 0;

    // vIndex: 14
    virtual ::SFAT::ErrorCode createFileImpl(::std::shared_ptr<::SFAT::FileBase>&) = 0;
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
