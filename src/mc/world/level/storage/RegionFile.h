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
    // vIndex: 0, symbol: __gen_??1RegionFile@@UEAA@XZ
    virtual ~RegionFile() = default;

    // symbol: ??0RegionFile@@QEAA@AEBVPath@Core@@@Z
    MCAPI explicit RegionFile(class Core::Path const& basePath);

    // symbol: ?open@RegionFile@@QEAA_NXZ
    MCAPI bool open();

    // symbol: ?readChunk@RegionFile@@QEAA_NHHPEAPEAVBitStream@RakNet@@@Z
    MCAPI bool readChunk(int x, int z, class RakNet::BitStream** destChunkData);

    // NOLINTEND
};
