#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

class WorldLimitChunkSource : public ::ChunkSource {

public:
    // prevent constructor by default
    WorldLimitChunkSource& operator=(WorldLimitChunkSource const&) = delete;
    WorldLimitChunkSource(WorldLimitChunkSource const&)            = delete;
    WorldLimitChunkSource()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getExistingChunk\@WorldLimitChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?createNewChunk\@WorldLimitChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool); // NOLINT
    /**
     * @vftbl 22
     * @symbol ?isWithinWorldLimit\@WorldLimitChunkSource\@\@UEBA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isWithinWorldLimit(class ChunkPos const&) const; // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?getChunkMap\@WorldLimitChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<
        class ChunkPos,
        class std::weak_ptr<class LevelChunk>,
        struct std::hash<class ChunkPos>,
        struct std::equal_to<class ChunkPos>,
        class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const*
    getChunkMap(); // NOLINT
    /**
     * @vftbl 26
     * @symbol ?canCreateViews\@WorldLimitChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const; // NOLINT
    /**
     * @symbol
     * ??0WorldLimitChunkSource\@\@QEAA\@V?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI WorldLimitChunkSource(std::unique_ptr<class ChunkSource>, class BlockPos const&, int, int); // NOLINT
};
