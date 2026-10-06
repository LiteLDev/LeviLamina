#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace RakNet { class BitStream; }
// clang-format on

class RegionFile {
public:
    // RegionFile inner types define
    using FreeSectorMap = ::std::map<int, bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Core::File>                      mFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mFileName;
    ::ll::TypedStorage<4, 4096, ::std::array<int, 1024>>         mOffsets;
    ::ll::TypedStorage<4, 4096, ::std::array<int, 1024>>         mEmptyChunk;
    ::ll::TypedStorage<8, 16, ::std::map<int, bool>>             mSectorFree;
    // NOLINTEND

public:
    // prevent constructor by default
    RegionFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RegionFile() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RegionFile(::Core::Path const& basePath);

    MCAPI bool open();

    MCAPI bool readChunk(int x, int z, ::RakNet::BitStream** destChunkData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& basePath);
    // NOLINTEND
};
