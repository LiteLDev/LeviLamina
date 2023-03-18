/**
 * @file  WorldLimitChunkSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldLimitChunkSource.
 *
 */
class WorldLimitChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDLIMITCHUNKSOURCE
public:
    class WorldLimitChunkSource& operator=(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?getExistingChunk\@WorldLimitChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /**
     * @vftbl 7
     * @symbol ?createNewChunk\@WorldLimitChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @vftbl 22
     * @symbol ?isWithinWorldLimit\@WorldLimitChunkSource\@\@UEBA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /**
     * @vftbl 23
     * @symbol ?getChunkMap\@WorldLimitChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const * getChunkMap();
    /**
     * @vftbl 26
     * @symbol ?canCreateViews\@WorldLimitChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const;
    /**
     * @symbol ??0WorldLimitChunkSource\@\@QEAA\@V?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI WorldLimitChunkSource(std::unique_ptr<class ChunkSource>, class BlockPos const &, int, int);

};
