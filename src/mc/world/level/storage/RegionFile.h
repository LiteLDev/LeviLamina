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
    RegionFile& operator=(RegionFile const&) = delete;
    RegionFile(RegionFile const&)            = delete;
    RegionFile()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RegionFile\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI RegionFile(class Core::Path const&);
    /**
     * @symbol ?open\@RegionFile\@\@QEAA_NXZ
     */
    MCAPI bool open();
    /**
     * @symbol ?readChunk\@RegionFile\@\@QEAA_NHHPEAPEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI bool readChunk(int, int, class RakNet::BitStream**);
    // NOLINTEND
};
