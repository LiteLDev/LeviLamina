/**
 * @file  PackInstanceId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PackInstanceId.
 *
 */
struct PackInstanceId {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKINSTANCEID
public:
    struct PackInstanceId& operator=(struct PackInstanceId const &) = delete;
    PackInstanceId(struct PackInstanceId const &) = delete;
    PackInstanceId() = delete;
#endif

public:
    /**
     * @hash   -2067459617
     * @symbol ??0PackInstanceId@@QEAA@AEBUPackIdVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI PackInstanceId(struct PackIdVersion const &, std::string const &);
    /**
     * @hash   1467013503
     * @symbol ??0PackInstanceId@@QEAA@$$QEAU0@@Z
     */
    MCAPI PackInstanceId(struct PackInstanceId &&);
    /**
     * @hash   1961687267
     * @symbol ??1PackInstanceId@@QEAA@XZ
     */
    MCAPI ~PackInstanceId();

};