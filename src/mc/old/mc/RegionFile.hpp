/**
 * @file  RegionFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RegionFile.
 *
 */
class RegionFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGIONFILE
public:
    class RegionFile& operator=(class RegionFile const &) = delete;
    RegionFile(class RegionFile const &) = delete;
    RegionFile() = delete;
#endif

public:
    /**
     * @symbol  ??0RegionFile\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI RegionFile(class Core::Path const &);
    /**
     * @symbol  ?open\@RegionFile\@\@QEAA_NXZ
     */
    MCAPI bool open();
    /**
     * @symbol  ?readChunk\@RegionFile\@\@QEAA_NHHPEAPEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI bool readChunk(int, int, class RakNet::BitStream **);

};