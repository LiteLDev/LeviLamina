/**
 * @file  PackSourceReport.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackSourceReport.
 *
 */
class PackSourceReport {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCEREPORT
public:
    class PackSourceReport& operator=(class PackSourceReport const &) = delete;
#endif

public:
    /**
     * @hash   1635634116
     * @symbol ??0PackSourceReport@@QEAA@XZ
     */
    MCAPI PackSourceReport();
    /**
     * @hash   -746905247
     * @symbol ??0PackSourceReport@@QEAA@AEBV0@@Z
     */
    MCAPI PackSourceReport(class PackSourceReport const &);
    /**
     * @hash   649180419
     * @symbol ?addReport@PackSourceReport@@QEAAXAEBUPackIdVersion@@$$QEAVPackReport@@@Z
     */
    MCAPI void addReport(struct PackIdVersion const &, class PackReport &&);
    /**
     * @hash   -512091415
     * @symbol ?getReports@PackSourceReport@@QEBAAEBV?$unordered_map@UPackIdVersion@@VPackReport@@U?$hash@UPackIdVersion@@@std@@U?$equal_to@UPackIdVersion@@@4@V?$allocator@U?$pair@$$CBUPackIdVersion@@VPackReport@@@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<struct PackIdVersion, class PackReport, struct std::hash<struct PackIdVersion>, struct std::equal_to<struct PackIdVersion>, class std::allocator<struct std::pair<struct PackIdVersion const, class PackReport>>> const & getReports() const;
    /**
     * @hash   1816953706
     * @symbol ?hasErrors@PackSourceReport@@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @hash   1621279794
     * @symbol ??1PackSourceReport@@QEAA@XZ
     */
    MCAPI ~PackSourceReport();

};