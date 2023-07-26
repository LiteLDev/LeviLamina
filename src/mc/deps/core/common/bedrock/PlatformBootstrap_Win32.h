#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/PlatformBootstrap.h"

namespace Bedrock {

class PlatformBootstrap_Win32 {

public:
    // prevent constructor by default
    PlatformBootstrap_Win32& operator=(PlatformBootstrap_Win32 const&) = delete;
    PlatformBootstrap_Win32(PlatformBootstrap_Win32 const&)            = delete;
    PlatformBootstrap_Win32()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initialize\@PlatformBootstrap_Win32\@Bedrock\@\@UEAAXXZ
     */
    virtual void initialize(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getAssetRoot\@PlatformBootstrap_Win32\@Bedrock\@\@UEAA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getAssetRoot(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getSaveDataRoot\@PlatformBootstrap_Win32\@Bedrock\@\@UEAA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getSaveDataRoot(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?rawLoadAssetFile\@PlatformBootstrap_Win32\@Bedrock\@\@UEAA?AULoadResult\@PlatformBootstrap\@2\@PEAD_KPEBD01\@Z
     */
    virtual struct Bedrock::PlatformBootstrap::LoadResult
    rawLoadAssetFile(char*, unsigned __int64, char const*, char*, unsigned __int64); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?rawLoadDataFile\@PlatformBootstrap_Win32\@Bedrock\@\@UEAA?AULoadResult\@PlatformBootstrap\@2\@PEAD_KPEBD01\@Z
     */
    virtual struct Bedrock::PlatformBootstrap::LoadResult
    rawLoadDataFile(char*, unsigned __int64, char const*, char*, unsigned __int64); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?rawSaveDataFile\@PlatformBootstrap_Win32\@Bedrock\@\@UEAA?AUSaveResult\@PlatformBootstrap\@2\@PEBD_K0_NPEAD1\@Z
     */
    virtual struct Bedrock::PlatformBootstrap::SaveResult
    rawSaveDataFile(char const*, unsigned __int64, char const*, bool, char*, unsigned __int64); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?rawLoadFromCustomRoot\@PlatformBootstrap_Win32\@Bedrock\@\@UEAA?AULoadResult\@PlatformBootstrap\@2\@PEAD_KPEBD01\@Z
     */
    virtual struct Bedrock::PlatformBootstrap::LoadResult
    rawLoadFromCustomRoot(char*, unsigned __int64, char const*, char*, unsigned __int64); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?rawCreateDirectory\@PlatformBootstrap_Win32\@Bedrock\@\@UEAA?AUCreateDirectoryResult\@PlatformBootstrap\@2\@PEBDPEAD_K\@Z
     */
    virtual struct Bedrock::PlatformBootstrap::CreateDirectoryResult
    rawCreateDirectory(char const*, char*, unsigned __int64); // NOLINT
};

}; // namespace Bedrock
