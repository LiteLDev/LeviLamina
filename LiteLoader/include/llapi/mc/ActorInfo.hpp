/**
 * @file  ActorInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorInfo.
 *
 */
struct ActorInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINFO
public:
    ActorInfo() = delete;
#endif

public:
    /**
     * @hash   1964670789
     * @symbol  ??0ActorInfo\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorInfo(struct ActorInfo const &);
    /**
     * @hash   817353637
     * @symbol  ?load\@ActorInfo\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const *);
    /**
     * @hash   811428350
     * @symbol  ??4ActorInfo\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorInfo & operator=(struct ActorInfo const &);
    /**
     * @hash   1019360318
     * @symbol  ?save\@ActorInfo\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   -1853812849
     * @symbol  ??1ActorInfo\@\@QEAA\@XZ
     */
    MCAPI ~ActorInfo();

};