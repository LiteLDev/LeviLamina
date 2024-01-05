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
    // symbol: ?getSharedInstance@PlatformBootstrap@Bedrock@@SAAEAV12@XZ
    MCAPI static class Bedrock::PlatformBootstrap& getSharedInstance();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_rawCreateDirectory_std@PlatformBootstrap@Bedrock@@IEAA?AUCreateDirectoryResult@12@PEBDPEAD_K@Z
    MCAPI struct Bedrock::PlatformBootstrap::CreateDirectoryResult
    _rawCreateDirectory_std(char const* path, char*, uint64);

    // symbol:
    // ?_rawLoadFile_cstdio@PlatformBootstrap@Bedrock@@IEAA?AULoadResult@12@PEAD_KV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBD01@Z
    MCAPI struct Bedrock::PlatformBootstrap::LoadResult
    _rawLoadFile_cstdio(char* buffer, uint64 bufferSize, std::string_view root, char const* path, char*, uint64);

    // symbol:
    // ?_rawSaveFile_cstdio@PlatformBootstrap@Bedrock@@IEAA?AUSaveResult@12@PEBD_KV?$basic_string_view@DU?$char_traits@D@std@@@std@@0PEAD1@Z
    MCAPI struct Bedrock::PlatformBootstrap::SaveResult
    _rawSaveFile_cstdio(char const* buffer, uint64 bufferSize, std::string_view root, char const* path, char*, uint64);

    // symbol:
    // ?_makeCreateDirectoryError@PlatformBootstrap@Bedrock@@KA?AUCreateDirectoryResult@12@W4CreateDirectoryResultCode@12@PEAD_KPEBDZZ
    MCAPI static struct Bedrock::PlatformBootstrap::CreateDirectoryResult
    _makeCreateDirectoryError(::Bedrock::PlatformBootstrap::CreateDirectoryResultCode, char*, uint64, char const*, ...);

    // symbol: ?_makeLoadError@PlatformBootstrap@Bedrock@@KA?AULoadResult@12@W4LoadResultCode@12@PEAD_KPEBDZZ
    MCAPI static struct Bedrock::PlatformBootstrap::LoadResult
    _makeLoadError(::Bedrock::PlatformBootstrap::LoadResultCode, char*, uint64, char const*, ...);

    // symbol: ?_makeSaveError@PlatformBootstrap@Bedrock@@KA?AUSaveResult@12@W4SaveResultCode@12@PEAD_KPEBDZZ
    MCAPI static struct Bedrock::PlatformBootstrap::SaveResult
    _makeSaveError(::Bedrock::PlatformBootstrap::SaveResultCode, char*, uint64, char const*, ...);

    // NOLINTEND
};

}; // namespace Bedrock
