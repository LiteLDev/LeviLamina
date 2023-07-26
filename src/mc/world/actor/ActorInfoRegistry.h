#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInfoRegistry {

public:
    // prevent constructor by default
    ActorInfoRegistry& operator=(ActorInfoRegistry const&) = delete;
    ActorInfoRegistry(ActorInfoRegistry const&)            = delete;

public:
    /**
     * @symbol ??0ActorInfoRegistry\@\@QEAA\@XZ
     */
    MCAPI ActorInfoRegistry(); // NOLINT
    /**
     * @symbol ?getActorInfo\@ActorInfoRegistry\@\@QEBAAEBUActorInfo\@\@I\@Z
     */
    MCAPI struct ActorInfo const& getActorInfo(unsigned int) const; // NOLINT
    /**
     * @symbol ?getActorInfoId\@ActorInfoRegistry\@\@QEBAIAEB_K\@Z
     */
    MCAPI unsigned int getActorInfoId(unsigned __int64 const&) const; // NOLINT
    /**
     * @symbol
     * ?getActorInfoId\@ActorInfoRegistry\@\@QEBAIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned int getActorInfoId(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getActorInfoList\@ActorInfoRegistry\@\@QEBA?AV?$vector\@UActorInfo\@\@V?$allocator\@UActorInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorInfo> getActorInfoList() const; // NOLINT
    /**
     * @symbol
     * ?isSpawnEggAvailable\@ActorInfoRegistry\@\@QEAA_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isSpawnEggAvailable(std::string); // NOLINT
    /**
     * @symbol ?registerActorInfo\@ActorInfoRegistry\@\@QEAAXAEBUActorInfo\@\@\@Z
     */
    MCAPI void registerActorInfo(struct ActorInfo const&); // NOLINT
    /**
     * @symbol
     * ?setSpawnEggAvailable\@ActorInfoRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setSpawnEggAvailable(std::string, bool); // NOLINT
};
