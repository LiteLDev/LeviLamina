/**
 * @file  EduSharedUriResource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EduSharedUriResource.
 *
 */
struct EduSharedUriResource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUSHAREDURIRESOURCE
public:
    struct EduSharedUriResource& operator=(struct EduSharedUriResource const &) = delete;
    EduSharedUriResource(struct EduSharedUriResource const &) = delete;
#endif

public:
    /**
     * @hash   -1374095317
     * @symbol ??0EduSharedUriResource@@QEAA@XZ
     */
    MCAPI EduSharedUriResource();
    /**
     * @hash   2134756732
     * @symbol ??0EduSharedUriResource@@QEAA@AEBVCompoundTag@@@Z
     */
    MCAPI EduSharedUriResource(class CompoundTag const &);
    /**
     * @hash   812540441
     * @symbol ??1EduSharedUriResource@@QEAA@XZ
     */
    MCAPI ~EduSharedUriResource();
    /**
     * @hash   1141483417
     * @symbol ?toTag@EduSharedUriResource@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBU1@@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> toTag(struct EduSharedUriResource const &);

};