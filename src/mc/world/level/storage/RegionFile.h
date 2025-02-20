#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace RakNet { class BitStream; }
// clang-format on

class RegionFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>   mUnkca2fa5;
    ::ll::UntypedStorage<8, 32>   mUnk88d245;
    ::ll::UntypedStorage<4, 4096> mUnkc2201d;
    ::ll::UntypedStorage<4, 4096> mUnkc111dd;
    ::ll::UntypedStorage<8, 16>   mUnke50b19;
    // NOLINTEND

public:
    // prevent constructor by default
    RegionFile& operator=(RegionFile const&);
    RegionFile(RegionFile const&);
    RegionFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
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

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
