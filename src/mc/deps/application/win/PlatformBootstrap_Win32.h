#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/PlatformBootstrap.h"

namespace Bedrock {

class PlatformBootstrap_Win32 : public ::Bedrock::PlatformBootstrap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 260> mUnk1b447d;
    ::ll::UntypedStorage<1, 260> mUnk5872bb;
    ::ll::UntypedStorage<1, 260> mUnkbbc45c;
    ::ll::UntypedStorage<8, 8>   mUnk82acd3;
    ::ll::UntypedStorage<8, 8>   mUnk3b1aee;
    ::ll::UntypedStorage<8, 8>   mUnk60faae;
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
    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadAssetFile(
        char*       buffer,
        uint64      bufferSize,
        char const* path,
        char*       errorBuffer,
        uint64      errorBufferSize
    ) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadDataFile(
        char*       buffer,
        uint64      bufferSize,
        char const* path,
        char*       errorBuffer,
        uint64      errorBufferSize
    ) /*override*/;

    // vIndex: 6
    virtual ::Bedrock::PlatformBootstrap::SaveResult rawSaveDataFile(
        char const* buffer,
        uint64      bufferSize,
        char const* path,
        bool,
        char*  errorBuffer,
        uint64 errorBufferSize
    ) /*override*/;

    // vIndex: 7
    virtual ::Bedrock::PlatformBootstrap::LoadResult rawLoadFromCustomRoot(
        char*       buffer,
        uint64      bufferSize,
        char const* fullPath,
        char*       errorBuffer,
        uint64      errorBufferSize
    ) /*override*/;

    // vIndex: 8
    virtual ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    rawCreateDirectory(char const* path, char* errorBuffer, uint64 errorBufferSize) /*override*/;

    // vIndex: 0
    virtual ~PlatformBootstrap_Win32() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initialize();

    MCAPI ::std::string_view $getAssetRoot();

    MCAPI ::std::string_view $getSaveDataRoot();

    MCAPI ::Bedrock::PlatformBootstrap::LoadResult
    $rawLoadAssetFile(char* buffer, uint64 bufferSize, char const* path, char* errorBuffer, uint64 errorBufferSize);

    MCAPI ::Bedrock::PlatformBootstrap::LoadResult
    $rawLoadDataFile(char* buffer, uint64 bufferSize, char const* path, char* errorBuffer, uint64 errorBufferSize);

    MCAPI ::Bedrock::PlatformBootstrap::SaveResult $rawSaveDataFile(
        char const* buffer,
        uint64      bufferSize,
        char const* path,
        bool,
        char*  errorBuffer,
        uint64 errorBufferSize
    );

    MCAPI ::Bedrock::PlatformBootstrap::LoadResult $rawLoadFromCustomRoot(
        char*       buffer,
        uint64      bufferSize,
        char const* fullPath,
        char*       errorBuffer,
        uint64      errorBufferSize
    );

    MCAPI ::Bedrock::PlatformBootstrap::CreateDirectoryResult
    $rawCreateDirectory(char const* path, char* errorBuffer, uint64 errorBufferSize);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
