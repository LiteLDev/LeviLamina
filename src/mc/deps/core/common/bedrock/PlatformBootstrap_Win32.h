#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/PlatformBootstrap.h"

namespace Bedrock {

class PlatformBootstrap_Win32 {
public:
    // prevent constructor by default
    PlatformBootstrap_Win32& operator=(PlatformBootstrap_Win32 const&);
    PlatformBootstrap_Win32(PlatformBootstrap_Win32 const&);
    PlatformBootstrap_Win32();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlatformBootstrap_Win32@Bedrock@@UEAA@XZ
    virtual ~PlatformBootstrap_Win32() = default;

    // vIndex: 1, symbol: ?initialize@PlatformBootstrap_Win32@Bedrock@@UEAAXXZ
    virtual void initialize();

    // vIndex: 2, symbol:
    // ?getAssetRoot@PlatformBootstrap_Win32@Bedrock@@UEAA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getAssetRoot();

    // vIndex: 3, symbol:
    // ?getSaveDataRoot@PlatformBootstrap_Win32@Bedrock@@UEAA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getSaveDataRoot();

    // vIndex: 4, symbol:
    // ?rawLoadAssetFile@PlatformBootstrap_Win32@Bedrock@@UEAA?AULoadResult@PlatformBootstrap@2@PEAD_KPEBD01@Z
    virtual struct Bedrock::PlatformBootstrap::LoadResult rawLoadAssetFile(char*, uint64, char const*, char*, uint64);

    // vIndex: 5, symbol:
    // ?rawLoadDataFile@PlatformBootstrap_Win32@Bedrock@@UEAA?AULoadResult@PlatformBootstrap@2@PEAD_KPEBD01@Z
    virtual struct Bedrock::PlatformBootstrap::LoadResult rawLoadDataFile(char*, uint64, char const*, char*, uint64);

    // vIndex: 6, symbol:
    // ?rawSaveDataFile@PlatformBootstrap_Win32@Bedrock@@UEAA?AUSaveResult@PlatformBootstrap@2@PEBD_K0_NPEAD1@Z
    virtual struct Bedrock::PlatformBootstrap::SaveResult
    rawSaveDataFile(char const*, uint64, char const*, bool, char*, uint64);

    // vIndex: 7, symbol:
    // ?rawLoadFromCustomRoot@PlatformBootstrap_Win32@Bedrock@@UEAA?AULoadResult@PlatformBootstrap@2@PEAD_KPEBD01@Z
    virtual struct Bedrock::PlatformBootstrap::LoadResult
    rawLoadFromCustomRoot(char*, uint64, char const*, char*, uint64);

    // vIndex: 8, symbol:
    // ?rawCreateDirectory@PlatformBootstrap_Win32@Bedrock@@UEAA?AUCreateDirectoryResult@PlatformBootstrap@2@PEBDPEAD_K@Z
    virtual struct Bedrock::PlatformBootstrap::CreateDirectoryResult rawCreateDirectory(char const*, char*, uint64);

    // NOLINTEND
};

}; // namespace Bedrock
