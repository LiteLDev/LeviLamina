#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace RakNet { class BitStream; }
// clang-format on

class RegionFile {
public:
    // prevent constructor by default
    RegionFile& operator=(RegionFile const&);
    RegionFile(RegionFile const&);
    RegionFile();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RegionFile() = default;

    MCAPI explicit RegionFile(class Core::Path const& basePath);

    MCAPI bool open();

    MCAPI bool readChunk(int x, int z, class RakNet::BitStream** destChunkData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
