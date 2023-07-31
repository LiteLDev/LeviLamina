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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?getExistingChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    /**
     * @vftbl 7
     * @symbol
     * ?createNewChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool);
    /**
     * @vftbl 8
     * @symbol
     * ?getOrLoadChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual std::shared_ptr<class LevelChunk>
    getOrLoadChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool);
    /**
     * @vftbl 18
     * @symbol
     * ?acquireDiscarded\@NetworkChunkSource\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @vftbl 23
     * @symbol
     * ?getChunkMap\@NetworkChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const* getChunkMap();
    /**
     * @vftbl 24
     * @symbol
     * ?getStorage\@NetworkChunkSource\@\@UEBAAEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual std::unordered_map<class ChunkPos, std::weak_ptr<class LevelChunk>> const& getStorage() const;
    /**
     * @vftbl 26
     * @symbol ?canCreateViews\@NetworkChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const;
    /**
     * @vftbl 30
     * @symbol ?canLaunchTasks\@NetworkChunkSource\@\@UEBA_NXZ
     */
    virtual bool canLaunchTasks() const;
    /**
     * @symbol ??0NetworkChunkSource\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI NetworkChunkSource(class Dimension&);
    // NOLINTEND
};
