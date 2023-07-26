#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

class NetworkChunkSource : public ::ChunkSource {

public:
    // prevent constructor by default
    NetworkChunkSource& operator=(NetworkChunkSource const&) = delete;
    NetworkChunkSource(NetworkChunkSource const&)            = delete;
    NetworkChunkSource()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getExistingChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?createNewChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getOrLoadChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk>
    getOrLoadChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool); // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?acquireDiscarded\@NetworkChunkSource\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>); // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?getChunkMap\@NetworkChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<
        class ChunkPos,
        class std::weak_ptr<class LevelChunk>,
        struct std::hash<class ChunkPos>,
        struct std::equal_to<class ChunkPos>,
        class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const*
    getChunkMap(); // NOLINT
    /**
     * @vftbl 24
     * @symbol
     * ?getStorage\@NetworkChunkSource\@\@UEBAAEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<
        class ChunkPos,
        class std::weak_ptr<class LevelChunk>,
        struct std::hash<class ChunkPos>,
        struct std::equal_to<class ChunkPos>,
        class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const&
    getStorage() const; // NOLINT
    /**
     * @vftbl 26
     * @symbol ?canCreateViews\@NetworkChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol ?canLaunchTasks\@NetworkChunkSource\@\@UEBA_NXZ
     */
    virtual bool canLaunchTasks() const; // NOLINT
    /**
     * @symbol ??0NetworkChunkSource\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI NetworkChunkSource(class Dimension&); // NOLINT
};
