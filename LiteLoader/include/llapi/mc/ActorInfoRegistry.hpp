/**
 * @file  ActorInfoRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -948005940
     * @symbol  ??0ActorInfoRegistry\@\@QEAA\@XZ
     */
    MCAPI ActorInfoRegistry();
    /**
     * @hash   1156021261
     * @symbol  ?getActorInfo\@ActorInfoRegistry\@\@QEBAAEBUActorInfo\@\@I\@Z
     */
    MCAPI struct ActorInfo const & getActorInfo(unsigned int) const;
    /**
     * @hash   103339919
     * @symbol  ?getActorInfoId\@ActorInfoRegistry\@\@QEBAIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned int getActorInfoId(std::string const &) const;
    /**
     * @hash   -681811705
     * @symbol  ?getActorInfoId\@ActorInfoRegistry\@\@QEBAIAEB_K\@Z
     */
    MCAPI unsigned int getActorInfoId(unsigned __int64 const &) const;
    /**
     * @hash   -805553836
     * @symbol  ?getActorInfoList\@ActorInfoRegistry\@\@QEBA?AV?$vector\@UActorInfo\@\@V?$allocator\@UActorInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorInfo> getActorInfoList() const;
    /**
     * @hash   -1705162087
     * @symbol  ?isSpawnEggAvailable\@ActorInfoRegistry\@\@QEAA_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isSpawnEggAvailable(std::string);
    /**
     * @hash   2047623612
     * @symbol  ?registerActorInfo\@ActorInfoRegistry\@\@QEAAXAEBUActorInfo\@\@\@Z
     */
    MCAPI void registerActorInfo(struct ActorInfo const &);
    /**
     * @hash   -370576637
     * @symbol  ?setSpawnEggAvailable\@ActorInfoRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setSpawnEggAvailable(std::string, bool);

};