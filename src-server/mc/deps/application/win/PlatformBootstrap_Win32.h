#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/PlatformBootstrap.h"

namespace Bedrock {

class PlatformBootstrap_Win32 : public ::Bedrock::PlatformBootstrap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1024> mUnkf4f4cd;
    ::ll::UntypedStorage<1, 1024> mUnk13fc0c;
    ::ll::UntypedStorage<1, 1024> mUnka54ae3;
    ::ll::UntypedStorage<8, 8>    mUnk82acd3;
    ::ll::UntypedStorage<8, 8>    mUnk3b1aee;
    ::ll::UntypedStorage<8, 8>    mUnk60faae;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformBootstrap_Win32& operator=(PlatformBootstrap_Win32 const&);
    PlatformBootstrap_Win32(PlatformBootstrap_Win32 const&);
    PlatformBootstrap_Win32();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() /*override*/;

    virtual ::std::string_view getAssetRoot() /*override*/;

    virtual ::std::string_view getSaveDataRoot() /*override*/;

    virtual ::Bedrock::PlatformBootstrap::LoadResult
    rawLoadAssetFile(char*, uint64, char const*, char*, uint64) /*override*/;

    virtual ::Bedrock::PlatformBootstrap::LoadResult
    rawLoadDataFile(char*, uint64, char const*, char*, uint64) /*override*/;

    virtual ::Bedrock::PlatformBootstrap::SaveResult
    rawSaveDataFile(char const*, uint64, char const*, bool, char*, uint64) /*override*/;

    virtual ::Bedrock::PlatformBootstrap::LoadResult
    rawLoadFromCustomRoot(char*, uint64, char const*, char*, uint64) /*override*/;

    virtual ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    rawCreateDirectory(char const*, char*, uint64) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
