/**
 * @file  MC/PackReport.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   527821865
     * @symbol ??0PackReport@@QEAA@XZ
     */
    MCAPI PackReport();
    /**
     * @hash   1145044993
     * @symbol ??0PackReport@@QEAA@AEBV0@@Z
     */
    MCAPI PackReport(class PackReport const &);
    /**
     * @hash   -679178523
     * @symbol ?getErrors@PackReport@@QEBAAEBV?$vector@V?$shared_ptr@VPackError@@@std@@V?$allocator@V?$shared_ptr@VPackError@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class PackError>> const & getErrors() const;
    /**
     * @hash   -661200694
     * @symbol ?getIdentity@PackReport@@QEBAAEBUPackIdVersion@@XZ
     */
    MCAPI struct PackIdVersion const & getIdentity() const;
    /**
     * @hash   1020426242
     * @symbol ?getLocation@PackReport@@QEBAAEBVResourceLocation@@XZ
     */
    MCAPI class ResourceLocation const & getLocation() const;
    /**
     * @hash   -40198948
     * @symbol ?getOriginalName@PackReport@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getOriginalName() const;
    /**
     * @hash   -2130279074
     * @symbol ?getOriginalVersion@PackReport@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getOriginalVersion() const;
    /**
     * @hash   1477671482
     * @symbol ?getPackType@PackReport@@QEBA?AW4PackType@@XZ
     */
    MCAPI enum PackType getPackType() const;
    /**
     * @hash   30598297
     * @symbol ?hasErrors@PackReport@@QEAA_NW4PackErrorType@@@Z
     */
    MCAPI bool hasErrors(enum PackErrorType);
    /**
     * @hash   1135676176
     * @symbol ?hasErrors@PackReport@@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @hash   -488307660
     * @symbol ?serialize@PackReport@@QEAAXAEAVValue@Json@@@Z
     */
    MCAPI void serialize(class Json::Value &);
    /**
     * @hash   -645758509
     * @symbol ?setAttemptedUpgrade@PackReport@@QEAAXXZ
     */
    MCAPI void setAttemptedUpgrade();
    /**
     * @hash   -733248612
     * @symbol ?setIdentity@PackReport@@QEAAXAEBUPackIdVersion@@@Z
     */
    MCAPI void setIdentity(struct PackIdVersion const &);
    /**
     * @hash   1637175950
     * @symbol ?setLocation@PackReport@@QEAAXAEBVResourceLocation@@@Z
     */
    MCAPI void setLocation(class ResourceLocation const &);
    /**
     * @hash   766882362
     * @symbol ?setOriginalIdentity@PackReport@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI void setOriginalIdentity(std::string const &, std::string const &);
    /**
     * @hash   -1606940560
     * @symbol ?setPackType@PackReport@@QEAAXW4PackType@@@Z
     */
    MCAPI void setPackType(enum PackType);
    /**
     * @hash   1387285523
     * @symbol ?setUpgradeSuccess@PackReport@@QEAAXXZ
     */
    MCAPI void setUpgradeSuccess();
    /**
     * @hash   -49288488
     * @symbol ?wasUpgraded@PackReport@@QEBA_NXZ
     */
    MCAPI bool wasUpgraded() const;
    /**
     * @hash   130079127
     * @symbol ??1PackReport@@QEAA@XZ
     */
    MCAPI ~PackReport();

};