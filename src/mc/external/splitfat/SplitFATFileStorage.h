#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/splitfat/ErrorCode.h"
#include "mc/external/splitfat/FileStorageBase.h"

// auto generated forward declare list
// clang-format off
namespace SFAT { class FileBase; }
namespace SFAT { struct FileDescriptorRecord; }
// clang-format on

namespace SFAT {

class SplitFATFileStorage : public ::SFAT::FileStorageBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfe3793;
    ::ll::UntypedStorage<8, 88> mUnk7b97a6;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitFATFileStorage& operator=(SplitFATFileStorage const&);
    SplitFATFileStorage(SplitFATFileStorage const&);
    SplitFATFileStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SplitFATFileStorage() /*override*/ = default;

    // vIndex: 1
    virtual bool fileExists(char const*) /*override*/;

    // vIndex: 2
    virtual bool directoryExists(char const*) /*override*/;

    // vIndex: 3
    virtual bool fileOrDirectoryExists(char const*) /*override*/;

    // vIndex: 4
    virtual ::SFAT::ErrorCode deleteFile(char const*) /*override*/;

    // vIndex: 5
    virtual ::SFAT::ErrorCode removeDirectory(char const*) /*override*/;

    // vIndex: 6
    virtual ::SFAT::ErrorCode createDirectory(char const*) /*override*/;

    // vIndex: 7
    virtual ::SFAT::ErrorCode renameFile(char const*, char const*) /*override*/;

    // vIndex: 8
    virtual ::SFAT::ErrorCode renameDirectory(char const*, char const*) /*override*/;

    // vIndex: 9
    virtual ::SFAT::ErrorCode getFileSize(char const*, uint64&) /*override*/;

    // vIndex: 10
    virtual bool isFile(char const*) /*override*/;

    // vIndex: 11
    virtual bool isDirectory(char const*) /*override*/;

    // vIndex: 12
    virtual ::SFAT::ErrorCode
    iterateThroughDirectory(char const*, uint, ::std::function<::SFAT::ErrorCode(bool&, ::SFAT::FileDescriptorRecord const&, ::std::string const&)>) /*override*/
        ;

    // vIndex: 13
    virtual ::SFAT::ErrorCode getFreeSpace(uint64&) /*override*/;

    // vIndex: 14
    virtual ::SFAT::ErrorCode createFileImpl(::std::shared_ptr<::SFAT::FileBase>&) /*override*/;
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
