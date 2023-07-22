/**
 * @file  HardcodedSpawnAreaRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HardcodedSpawnAreaRegistry.
 *
 */
class HardcodedSpawnAreaRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HARDCODEDSPAWNAREAREGISTRY
public:
    class HardcodedSpawnAreaRegistry& operator=(class HardcodedSpawnAreaRegistry const &) = delete;
    HardcodedSpawnAreaRegistry(class HardcodedSpawnAreaRegistry const &) = delete;
#endif

public:
    /**
     * @symbol  ??0HardcodedSpawnAreaRegistry\@\@QEAA\@XZ
     */
    MCAPI HardcodedSpawnAreaRegistry();
    /**
     * @symbol  ?getMobSpawnsForType\@HardcodedSpawnAreaRegistry\@\@QEBAAEBV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@W4HardcodedSpawnAreaType\@\@\@Z
     */
    MCAPI std::vector<class MobSpawnerData> const & getMobSpawnsForType(enum class HardcodedSpawnAreaType) const;
    /**
     * @symbol  ?initMobSpawnsForType\@HardcodedSpawnAreaRegistry\@\@QEAAXW4HardcodedSpawnAreaType\@\@$$QEAV?$vector\@VMobSpawnerData\@\@V?$allocator\@VMobSpawnerData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initMobSpawnsForType(enum class HardcodedSpawnAreaType, std::vector<class MobSpawnerData> &&);

};