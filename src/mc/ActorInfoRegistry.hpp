/**
 * @file  ActorInfoRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInfoRegistry.
 *
 */
class ActorInfoRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINFOREGISTRY
public:
    class ActorInfoRegistry& operator=(class ActorInfoRegistry const &) = delete;
    ActorInfoRegistry(class ActorInfoRegistry const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ActorInfoRegistry\@\@QEAA\@XZ
     */
    MCAPI ActorInfoRegistry();
    /**
     * @symbol  ?getActorInfo\@ActorInfoRegistry\@\@QEBAAEBUActorInfo\@\@I\@Z
     */
    MCAPI struct ActorInfo const & getActorInfo(unsigned int) const;
    /**
     * @symbol  ?getActorInfoId\@ActorInfoRegistry\@\@QEBAIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned int getActorInfoId(std::string const &) const;
    /**
     * @symbol  ?getActorInfoId\@ActorInfoRegistry\@\@QEBAIAEB_K\@Z
     */
    MCAPI unsigned int getActorInfoId(unsigned __int64 const &) const;
    /**
     * @symbol  ?getActorInfoList\@ActorInfoRegistry\@\@QEBA?AV?$vector\@UActorInfo\@\@V?$allocator\@UActorInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorInfo> getActorInfoList() const;
    /**
     * @symbol  ?isSpawnEggAvailable\@ActorInfoRegistry\@\@QEAA_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isSpawnEggAvailable(std::string);
    /**
     * @symbol  ?registerActorInfo\@ActorInfoRegistry\@\@QEAAXAEBUActorInfo\@\@\@Z
     */
    MCAPI void registerActorInfo(struct ActorInfo const &);
    /**
     * @symbol  ?setSpawnEggAvailable\@ActorInfoRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setSpawnEggAvailable(std::string, bool);

};