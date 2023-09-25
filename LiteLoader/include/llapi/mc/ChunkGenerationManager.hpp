/**
 * @file  ChunkGenerationManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ChunkGenerationManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKGENERATIONMANAGER
public:
    class ChunkGenerationManager& operator=(class ChunkGenerationManager const &) = delete;
    ChunkGenerationManager(class ChunkGenerationManager const &) = delete;
    ChunkGenerationManager() = delete;
#endif

public:
    /**
     * @symbol ?addServerChunksToPacket\@ChunkGenerationManager\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEAVNetworkChunkPublisherUpdatePacket\@\@\@Z
     */
    MCAPI void addServerChunksToPacket(class NetworkIdentifier const &, enum class SubClientId, class NetworkChunkPublisherUpdatePacket &);
    /**
     * @symbol ??1ChunkGenerationManager\@\@QEAA\@XZ
     */
    MCAPI ~ChunkGenerationManager();

};
