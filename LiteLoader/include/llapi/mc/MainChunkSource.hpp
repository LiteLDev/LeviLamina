/**
 * @file  MainChunkSource.hpp
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
 * @brief MC class MainChunkSource.
 *
 */
class MainChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAINCHUNKSOURCE
public:
    class MainChunkSource& operator=(class MainChunkSource const &) = delete;
    MainChunkSource(class MainChunkSource const &) = delete;
    MainChunkSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MainChunkSource();
    /**
     * @hash   1404704213
     * @vftbl  3
     * @symbol  ?getExistingChunk\@MainChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /**
     * @hash   397799092
     * @vftbl  4
     * @symbol  ?getRandomChunk\@MainChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random &);
    /**
     * @hash   -1549197616
     * @vftbl  5
     * @symbol  ?isChunkKnown\@MainChunkSource\@\@UEAA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isChunkKnown(class ChunkPos const &);
    /**
     * @hash   435619059
     * @vftbl  7
     * @symbol  ?createNewChunk\@MainChunkSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @hash   -1645059163
     * @vftbl  18
     * @symbol  ?acquireDiscarded\@MainChunkSource\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @hash   1794709129
     * @vftbl  23
     * @symbol  ?getChunkMap\@MainChunkSource\@\@UEAAPEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const * getChunkMap();
    /**
     * @hash   -1484731892
     * @vftbl  24
     * @symbol  ?getStorage\@MainChunkSource\@\@UEBAAEBV?$unordered_map\@VChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const & getStorage() const;
    /**
     * @hash   -1438970987
     * @vftbl  25
     * @symbol  ?clearDeletedEntities\@MainChunkSource\@\@UEAAXXZ
     */
    virtual void clearDeletedEntities();
    /**
     * @hash   -1484066053
     * @vftbl  26
     * @symbol  ?canCreateViews\@MainChunkSource\@\@UEBA_NXZ
     */
    virtual bool canCreateViews() const;
    /**
     * @vftbl  29
     * @symbol  ?setLevelChunk\@MainChunkSource\@\@UEAAXV?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@Z
     */
    virtual void setLevelChunk(class std::shared_ptr<class LevelChunk>);
    /**
     * @hash   855629894
     * @symbol  ??0MainChunkSource\@\@QEAA\@V?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI MainChunkSource(std::unique_ptr<class ChunkSource>);

};