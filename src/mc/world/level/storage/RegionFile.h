#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace RakNet { class BitStream; }
// clang-format on

class RegionFile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGIONFILE
public:
    RegionFile& operator=(RegionFile const&) = delete;
    RegionFile(RegionFile const&)            = delete;
    RegionFile()                             = delete;
#endif

public:
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
};
