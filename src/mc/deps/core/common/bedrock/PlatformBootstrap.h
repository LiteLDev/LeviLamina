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
    enum class CreateDirectoryResultCode {};

    enum class LoadResultCode {};

    enum class SaveResultCode {};

    struct CreateDirectoryResult {
    public:
        // prevent constructor by default
        CreateDirectoryResult& operator=(CreateDirectoryResult const&);
        CreateDirectoryResult(CreateDirectoryResult const&);
        CreateDirectoryResult();
    };

    struct LoadResult {
    public:
        // prevent constructor by default
        LoadResult& operator=(LoadResult const&);
        LoadResult(LoadResult const&);
        LoadResult();
    };

    struct SaveResult {
    public:
        // prevent constructor by default
        SaveResult& operator=(SaveResult const&);
        SaveResult(SaveResult const&);
        SaveResult();
    };

public:
    // prevent constructor by default
    PlatformBootstrap& operator=(PlatformBootstrap const&);
    PlatformBootstrap(PlatformBootstrap const&);
    PlatformBootstrap();

public:
    // NOLINTBEGIN
    MCAPI static class Bedrock::PlatformBootstrap& getSharedInstance();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI struct Bedrock::PlatformBootstrap::CreateDirectoryResult
    _rawCreateDirectory_std(char const* path, char*, uint64);

    MCAPI struct Bedrock::PlatformBootstrap::LoadResult
    _rawLoadFile_cstdio(char* buffer, uint64 bufferSize, std::string_view root, char const* path, char*, uint64);

    MCAPI struct Bedrock::PlatformBootstrap::SaveResult
    _rawSaveFile_cstdio(char const* buffer, uint64 bufferSize, std::string_view root, char const* path, char*, uint64);

    MCAPI static struct Bedrock::PlatformBootstrap::CreateDirectoryResult
    _makeCreateDirectoryError(::Bedrock::PlatformBootstrap::CreateDirectoryResultCode, char*, uint64, char const*, ...);

    MCAPI static struct Bedrock::PlatformBootstrap::LoadResult
    _makeLoadError(::Bedrock::PlatformBootstrap::LoadResultCode, char*, uint64, char const*, ...);

    MCAPI static struct Bedrock::PlatformBootstrap::SaveResult
    _makeSaveError(::Bedrock::PlatformBootstrap::SaveResultCode, char*, uint64, char const*, ...);

    // NOLINTEND
};

}; // namespace Bedrock
