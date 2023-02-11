/**
 * @file  LegacyPackIdVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure LegacyPackIdVersion.
 *
 */
struct LegacyPackIdVersion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYPACKIDVERSION
public:
    struct LegacyPackIdVersion& operator=(struct LegacyPackIdVersion const &) = delete;
    LegacyPackIdVersion(struct LegacyPackIdVersion const &) = delete;
    LegacyPackIdVersion() = delete;
#endif

public:
    /**
     * @hash   1599125550
     * @symbol  ??0LegacyPackIdVersion\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI LegacyPackIdVersion(std::string const &, std::string const &);
    /**
     * @hash   -653161644
     * @symbol  ?getUpgradedPackId\@LegacyPackIdVersion\@\@QEBA?AUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion getUpgradedPackId() const;
    /**
     * @hash   -1549608857
     * @symbol  ??1LegacyPackIdVersion\@\@QEAA\@XZ
     */
    MCAPI ~LegacyPackIdVersion();

};