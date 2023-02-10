/**
 * @file  PackReport.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackReport.
 *
 */
class PackReport {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKREPORT
public:
    class PackReport& operator=(class PackReport const &) = delete;
#endif

public:
    /**
     * @hash   1022309169
     * @symbol  ??0PackReport\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PackReport(class PackReport const &);
    /**
     * @hash   -315382599
     * @symbol  ??0PackReport\@\@QEAA\@XZ
     */
    MCAPI PackReport();
    /**
     * @hash   -572914987
     * @symbol  ?getErrors\@PackReport\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VPackError\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VPackError\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class PackError>> const & getErrors() const;
    /**
     * @hash   -1504343654
     * @symbol  ?getIdentity\@PackReport\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const & getIdentity() const;
    /**
     * @hash   1117049026
     * @symbol  ?getLocation\@PackReport\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const & getLocation() const;
    /**
     * @hash   213366668
     * @symbol  ?getOriginalName\@PackReport\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getOriginalName() const;
    /**
     * @hash   -1798583410
     * @symbol  ?getOriginalVersion\@PackReport\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getOriginalVersion() const;
    /**
     * @hash   634528522
     * @symbol  ?getPackType\@PackReport\@\@QEBA?AW4PackType\@\@XZ
     */
    MCAPI enum class PackType getPackType() const;
    /**
     * @hash   -812544663
     * @symbol  ?hasErrors\@PackReport\@\@QEAA_NW4PackErrorType\@\@\@Z
     */
    MCAPI bool hasErrors(enum class PackErrorType);
    /**
     * @hash   292533216
     * @symbol  ?hasErrors\@PackReport\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @hash   -1331450620
     * @symbol  ?serialize\@PackReport\@\@QEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value &);
    /**
     * @hash   -1488901469
     * @symbol  ?setAttemptedUpgrade\@PackReport\@\@QEAAXXZ
     */
    MCAPI void setAttemptedUpgrade();
    /**
     * @hash   -1576391572
     * @symbol  ?setIdentity\@PackReport\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void setIdentity(struct PackIdVersion const &);
    /**
     * @hash   794032990
     * @symbol  ?setLocation\@PackReport\@\@QEAAXAEBVResourceLocation\@\@\@Z
     */
    MCAPI void setLocation(class ResourceLocation const &);
    /**
     * @hash   -76260598
     * @symbol  ?setOriginalIdentity\@PackReport\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void setOriginalIdentity(std::string const &, std::string const &);
    /**
     * @hash   1844883776
     * @symbol  ?setPackType\@PackReport\@\@QEAAXW4PackType\@\@\@Z
     */
    MCAPI void setPackType(enum class PackType);
    /**
     * @hash   544142563
     * @symbol  ?setUpgradeSuccess\@PackReport\@\@QEAAXXZ
     */
    MCAPI void setUpgradeSuccess();
    /**
     * @hash   -892431448
     * @symbol  ?wasUpgraded\@PackReport\@\@QEBA_NXZ
     */
    MCAPI bool wasUpgraded() const;
    /**
     * @hash   223611335
     * @symbol  ??1PackReport\@\@QEAA\@XZ
     */
    MCAPI ~PackReport();

};