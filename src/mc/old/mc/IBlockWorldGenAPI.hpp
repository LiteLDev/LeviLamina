/**
 * @file  IBlockWorldGenAPI.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IBlockWorldGenAPI.
 *
 */
class IBlockWorldGenAPI {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IBLOCKWORLDGENAPI
public:
    class IBlockWorldGenAPI& operator=(class IBlockWorldGenAPI const &) = delete;
    IBlockWorldGenAPI(class IBlockWorldGenAPI const &) = delete;
    IBlockWorldGenAPI() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IBLOCKWORLDGENAPI
    /**
     * @symbol  ?canGetChunk\@IBlockWorldGenAPI\@\@UEBA_NXZ
     */
    MCVAPI bool canGetChunk() const;
    /**
     * @symbol  ?getChunk\@IBlockWorldGenAPI\@\@UEAAPEAVLevelChunk\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI class LevelChunk * getChunk(class ChunkPos const &);
#endif

};