#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/PlatformBootstrap.h"

namespace Bedrock {

class PlatformBootstrap_Win32 {
public:
    // prevent constructor by default
    PlatformBootstrap_Win32& operator=(PlatformBootstrap_Win32 const&);
    PlatformBootstrap_Win32(PlatformBootstrap_Win32 const&);
    PlatformBootstrap_Win32();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlatformBootstrap_Win32() = default;

    // vIndex: 1
    virtual void initialize();

    // vIndex: 2
    virtual std::string_view getAssetRoot();

    // vIndex: 3
    virtual std::string_view getSaveDataRoot();

    // vIndex: 4
    virtual struct Bedrock::PlatformBootstrap::LoadResult rawLoadAssetFile(char*, uint64, char const*, char*, uint64);

    // vIndex: 5
    virtual struct Bedrock::PlatformBootstrap::LoadResult rawLoadDataFile(char*, uint64, char const*, char*, uint64);

    // vIndex: 6
    virtual struct Bedrock::PlatformBootstrap::SaveResult
    rawSaveDataFile(char const*, uint64, char const*, bool, char*, uint64);

    // vIndex: 7
    virtual struct Bedrock::PlatformBootstrap::LoadResult
    rawLoadFromCustomRoot(char*, uint64, char const*, char*, uint64);

    // vIndex: 8
    virtual struct Bedrock::PlatformBootstrap::CreateDirectoryResult rawCreateDirectory(char const*, char*, uint64);

    // NOLINTEND
};

}; // namespace Bedrock
