#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class PlatformBootstrap {
public:
    // PlatformBootstrap inner types declare
    // clang-format off
    struct CreateDirectoryResult;
    struct LoadResult;
    struct SaveResult;
    // clang-format on

    // PlatformBootstrap inner types define
    enum class LoadResultCode : int {
        Success        = 0,
        FailedToOpen   = 1,
        FailedToRead   = 2,
        BufferTooSmall = 3,
    };

    enum class SaveResultCode : int {
        Success                    = 0,
        FailedToOpen               = 1,
        FailedToWrite              = 2,
        IncorrectBytesWrittenCount = 3,
    };

    enum class CreateDirectoryResultCode : int {
        Success = 0,
        Failure = 1,
    };

    struct LoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk74cb47;
        ::ll::UntypedStorage<4, 4> mUnk32effc;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadResult& operator=(LoadResult const&);
        LoadResult(LoadResult const&);
        LoadResult();
    };

    struct SaveResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk2df4c8;
        ::ll::UntypedStorage<4, 4> mUnkff834a;
        // NOLINTEND

    public:
        // prevent constructor by default
        SaveResult& operator=(SaveResult const&);
        SaveResult(SaveResult const&);
        SaveResult();
    };

    struct CreateDirectoryResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk1dc224;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateDirectoryResult& operator=(CreateDirectoryResult const&);
        CreateDirectoryResult(CreateDirectoryResult const&);
        CreateDirectoryResult();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlatformBootstrap() = default;

    // vIndex: 1
    virtual void initialize() = 0;

    // vIndex: 2
    virtual ::std::string_view getAssetRoot() = 0;

    // vIndex: 3
    virtual ::std::string_view getSaveDataRoot() = 0;

    // vIndex: 4
    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadAssetFile(char*, uint64, char const*, char*, uint64) = 0;

    // vIndex: 5
    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadDataFile(char*, uint64, char const*, char*, uint64) = 0;

    // vIndex: 6
    virtual ::Bedrock::PlatformBootstrap::SaveResult
    rawSaveDataFile(char const*, uint64, char const*, bool, char*, uint64) = 0;

    // vIndex: 7
    virtual ::Bedrock::PlatformBootstrap::LoadResult
    rawLoadFromCustomRoot(char*, uint64, char const*, char*, uint64) = 0;

    // vIndex: 8
    virtual ::Bedrock::PlatformBootstrap::CreateDirectoryResult rawCreateDirectory(char const*, char*, uint64) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    _rawCreateDirectory_std(char const* path, char* errorBuffer, uint64 errorBufferSize);

    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult _rawLoadFile_cstdio(
        char*              buffer,
        uint64             bufferSize,
        ::std::string_view root,
        char const*        path,
        char*              errorBuffer,
        uint64             errorBufferSize
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    _makeCreateDirectoryError(::Bedrock::PlatformBootstrap::CreateDirectoryResultCode, char*, uint64, char const*, ...);

    MCNAPI static ::Bedrock::PlatformBootstrap::LoadResult
    _makeLoadError(::Bedrock::PlatformBootstrap::LoadResultCode, char*, uint64, char const*, ...);

    MCNAPI static ::Bedrock::PlatformBootstrap::SaveResult
    _makeSaveError(::Bedrock::PlatformBootstrap::SaveResultCode, char*, uint64, char const*, ...);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
