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
    ::ll::UntypedStorage<8, 8> mUnk82acd3;
    ::ll::UntypedStorage<8, 8> mUnk3b1aee;
    ::ll::UntypedStorage<8, 8> mUnk60faae;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformBootstrap_Win32& operator=(PlatformBootstrap_Win32 const&);
    PlatformBootstrap_Win32(PlatformBootstrap_Win32 const&);
    PlatformBootstrap_Win32();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initialize() /*override*/;

    // vIndex: 2
    virtual ::std::string_view getAssetRoot() /*override*/;

    // vIndex: 3
    virtual ::std::string_view getSaveDataRoot() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadAssetFile(char* buffer, uint64 bufferSize, char const* path, char* errorBuffer, uint64 errorBufferSize) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadDataFile(char* buffer, uint64 bufferSize, char const* path, char* errorBuffer, uint64 errorBufferSize) /*override*/;

    // vIndex: 6
    virtual ::Bedrock::PlatformBootstrap::SaveResult rawSaveDataFile(char const* buffer, uint64 bufferSize, char const* path, bool, char* errorBuffer, uint64 errorBufferSize) /*override*/;

    // vIndex: 7
    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadFromCustomRoot(char* buffer, uint64 bufferSize, char const* fullPath, char* errorBuffer, uint64 errorBufferSize) /*override*/;

    // vIndex: 8
    virtual ::Bedrock::PlatformBootstrap::CreateDirectoryResult rawCreateDirectory(char const* path, char* errorBuffer, uint64 errorBufferSize) /*override*/;

    // vIndex: 0
    virtual ~PlatformBootstrap_Win32() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI ::std::string_view $getAssetRoot();

    MCNAPI ::std::string_view $getSaveDataRoot();

    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult $rawLoadAssetFile(char* buffer, uint64 bufferSize, char const* path, char* errorBuffer, uint64 errorBufferSize);

    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult $rawLoadDataFile(char* buffer, uint64 bufferSize, char const* path, char* errorBuffer, uint64 errorBufferSize);

    MCNAPI ::Bedrock::PlatformBootstrap::SaveResult $rawSaveDataFile(char const* buffer, uint64 bufferSize, char const* path, bool, char* errorBuffer, uint64 errorBufferSize);

    MCNAPI ::Bedrock::PlatformBootstrap::LoadResult $rawLoadFromCustomRoot(char* buffer, uint64 bufferSize, char const* fullPath, char* errorBuffer, uint64 errorBufferSize);

    MCNAPI ::Bedrock::PlatformBootstrap::CreateDirectoryResult $rawCreateDirectory(char const* path, char* errorBuffer, uint64 errorBufferSize);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
