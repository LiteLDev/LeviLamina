#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

class MainChunkSource : public ::ChunkSource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAINCHUNKSOURCE
public:
    MainChunkSource& operator=(MainChunkSource const&) = delete;
    MainChunkSource(MainChunkSource const&)            = delete;
    MainChunkSource()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?getExistingChunk\@MainChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    /**
     * @vftbl 4
     * @symbol ?getRandomChunk\@MainChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    /**
     * @vftbl 5
     * @symbol ?isChunkKnown\@MainChunkSource\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isChunkKnown(class ChunkPos const&);
    /**
     * @vftbl 7
     * @symbol
     * ?createNewChunk\@MainChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool);
    /**
     * @vftbl 18
     * @symbol
     * ?acquireDiscarded\@MainChunkSource\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @vftbl 23
     * @symbol
     * ?getChunkMap\@MainChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<
        class ChunkPos,
        class std::weak_ptr<class LevelChunk>,
        struct std::hash<class ChunkPos>,
        struct std::equal_to<class ChunkPos>,
        class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const*
    getChunkMap();
    /**
     * @vftbl 24
     * @symbol
     * ?getStorage\@MainChunkSource\@\@UEBAAEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<
        class ChunkPos,
        class std::weak_ptr<class LevelChunk>,
        struct std::hash<class ChunkPos>,
        struct std::equal_to<class ChunkPos>,
        class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const&
    getStorage() const;
    /**
     * @vftbl 25
     * @symbol ?clearDeletedEntities\@MainChunkSource\@\@UEAAXXZ
     */
    virtual void clearDeletedEntities();
    /**
     * @vftbl 26
     * @symbol ?canCreateViews\@MainChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const;
    /**
     * @vftbl 29
     * @symbol ?setLevelChunk\@MainChunkSource\@\@UEAAXV?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@Z
     */
    virtual void setLevelChunk(class std::shared_ptr<class LevelChunk>);
    /**
     * @symbol
     * ??0MainChunkSource\@\@QEAA\@V?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI MainChunkSource(std::unique_ptr<class ChunkSource>);
};
