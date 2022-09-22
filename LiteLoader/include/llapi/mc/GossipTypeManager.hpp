/**
 * @file  GossipTypeManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GossipTypeManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOSSIPTYPEMANAGER
public:
    class GossipTypeManager& operator=(class GossipTypeManager const &) = delete;
    GossipTypeManager(class GossipTypeManager const &) = delete;
    GossipTypeManager() = delete;
#endif

public:
    /**
     * @symbol ??0GossipTypeManager@@QEAA@AEBVLevelData@@@Z
     */
    MCAPI GossipTypeManager(class LevelData const &);
    /**
     * @symbol ?readGossipData@GossipTypeManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void readGossipData(std::string const &);
    /**
     * @symbol ?shouldUseGossip@GossipTypeManager@@QEBA_NXZ
     */
    MCAPI bool shouldUseGossip() const;
    /**
     * @symbol ?GOSSIP_VERSION@GossipTypeManager@@2VBaseGameVersion@@B
     */
    MCAPI static class BaseGameVersion const GOSSIP_VERSION;

};