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
        CreateDirectoryResult& operator=(CreateDirectoryResult const&) = delete;
        CreateDirectoryResult(CreateDirectoryResult const&)            = delete;
        CreateDirectoryResult()                                        = delete;
    };

    struct LoadResult {

    public:
        // prevent constructor by default
        LoadResult& operator=(LoadResult const&) = delete;
        LoadResult(LoadResult const&)            = delete;
        LoadResult()                             = delete;
    };

    struct SaveResult {

    public:
        // prevent constructor by default
        SaveResult& operator=(SaveResult const&) = delete;
        SaveResult(SaveResult const&)            = delete;
        SaveResult()                             = delete;
    };

public:
    // prevent constructor by default
    PlatformBootstrap& operator=(PlatformBootstrap const&) = delete;
    PlatformBootstrap(PlatformBootstrap const&)            = delete;
    PlatformBootstrap()                                    = delete;

public:
    /**
     * @symbol ?getSharedInstance\@PlatformBootstrap\@Bedrock\@\@SAAEAV12\@XZ
     */
    MCAPI static class Bedrock::PlatformBootstrap& getSharedInstance(); // NOLINT

    // protected:
    /**
     * @symbol ?_rawCreateDirectory_std\@PlatformBootstrap\@Bedrock\@\@IEAA?AUCreateDirectoryResult\@12\@PEBDPEAD_K\@Z
     */
    MCAPI struct Bedrock::PlatformBootstrap::CreateDirectoryResult
    _rawCreateDirectory_std(char const*, char*, unsigned __int64); // NOLINT
    /**
     * @symbol
     * ?_rawLoadFile_cstdio\@PlatformBootstrap\@Bedrock\@\@IEAA?AULoadResult\@12\@PEAD_KV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@PEBD01\@Z
     */
    MCAPI struct Bedrock::PlatformBootstrap::LoadResult _rawLoadFile_cstdio(
        char*,
        unsigned __int64,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        char const*,
        char*,
        unsigned __int64
    ); // NOLINT
    /**
     * @symbol
     * ?_rawSaveFile_cstdio\@PlatformBootstrap\@Bedrock\@\@IEAA?AUSaveResult\@12\@PEBD_KV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@0PEAD1\@Z
     */
    MCAPI struct Bedrock::PlatformBootstrap::SaveResult _rawSaveFile_cstdio(
        char const*,
        unsigned __int64,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        char const*,
        char*,
        unsigned __int64
    ); // NOLINT
    /**
     * @symbol
     * ?_makeCreateDirectoryError\@PlatformBootstrap\@Bedrock\@\@KA?AUCreateDirectoryResult\@12\@W4CreateDirectoryResultCode\@12\@PEAD_KPEBDZZ
     */
    MCAPI static struct Bedrock::PlatformBootstrap::CreateDirectoryResult _makeCreateDirectoryError(
        enum class Bedrock::PlatformBootstrap::CreateDirectoryResultCode,
        char*,
        unsigned __int64,
        char const*,
        ...
    ); // NOLINT
    /**
     * @symbol ?_makeLoadError\@PlatformBootstrap\@Bedrock\@\@KA?AULoadResult\@12\@W4LoadResultCode\@12\@PEAD_KPEBDZZ
     */
    MCAPI static struct Bedrock::PlatformBootstrap::LoadResult _makeLoadError(
        enum class Bedrock::PlatformBootstrap::LoadResultCode,
        char*,
        unsigned __int64,
        char const*,
        ...
    ); // NOLINT
    /**
     * @symbol ?_makeSaveError\@PlatformBootstrap\@Bedrock\@\@KA?AUSaveResult\@12\@W4SaveResultCode\@12\@PEAD_KPEBDZZ
     */
    MCAPI static struct Bedrock::PlatformBootstrap::SaveResult _makeSaveError(
        enum class Bedrock::PlatformBootstrap::SaveResultCode,
        char*,
        unsigned __int64,
        char const*,
        ...
    ); // NOLINT

protected:
};

}; // namespace Bedrock
