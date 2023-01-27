/**
 * @file  NetworkChunkSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkChunkSource.
 *
 */
class NetworkChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKSOURCE
public:
    class NetworkChunkSource& operator=(class NetworkChunkSource const &) = delete;
    NetworkChunkSource(class NetworkChunkSource const &) = delete;
    NetworkChunkSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetworkChunkSource();
    /**
     * @hash   1094419360
     * @vftbl  3
     * @symbol  ?getExistingChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /**
     * @hash   1631057902
     * @vftbl  7
     * @symbol  ?createNewChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @hash   1916360345
     * @vftbl  8
     * @symbol  ?getOrLoadChunk\@NetworkChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getOrLoadChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @hash   -381307856
     * @vftbl  18
     * @symbol  ?acquireDiscarded\@NetworkChunkSource\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @hash   1767682206
     * @vftbl  23
     * @symbol  ?getChunkMap\@NetworkChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const * getChunkMap();
    /**
     * @hash   1574943905
     * @vftbl  24
     * @symbol  ?getStorage\@NetworkChunkSource\@\@UEBAAEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const & getStorage() const;
    /**
     * @hash   -1685917104
     * @vftbl  26
     * @symbol  ?canCreateViews\@NetworkChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const;
    /**
     * @hash   2010960631
     * @symbol  ??0NetworkChunkSource\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI NetworkChunkSource(class Dimension &);

};