/**
 * @file  WorldPackHistory.hpp
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
 * @brief MC class WorldPackHistory.
 *
 */
class WorldPackHistory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDPACKHISTORY
public:
    class WorldPackHistory& operator=(class WorldPackHistory const &) = delete;
    WorldPackHistory() = delete;
#endif

public:
    /**
     * @hash   -1775833103
     * @symbol  ??0WorldPackHistory\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory const &);
    /**
     * @hash   -1229745957
     * @symbol  ??0WorldPackHistory\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory &&);
    /**
     * @hash   485759578
     * @symbol  ?getCanBeRedownloaded\@WorldPackHistory\@\@QEBA_NXZ
     */
    MCAPI bool getCanBeRedownloaded() const;
    /**
     * @hash   -747396088
     * @symbol  ?getLocalizedNames\@WorldPackHistory\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const & getLocalizedNames() const;
    /**
     * @hash   -2114471700
     * @symbol  ?getPackIdVersion\@WorldPackHistory\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const & getPackIdVersion() const;
    /**
     * @hash   -2094630002
     * @symbol  ?getSourceUUID\@WorldPackHistory\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const & getSourceUUID() const;
    /**
     * @hash   437176310
     * @symbol  ?getSubpackCount\@WorldPackHistory\@\@QEBAHXZ
     */
    MCAPI int getSubpackCount() const;
    /**
     * @hash   -1861580738
     * @symbol  ?getUnlocalizedName\@WorldPackHistory\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getUnlocalizedName() const;
    /**
     * @hash   -451471236
     * @symbol  ?hasLocalizedNames\@WorldPackHistory\@\@QEBA_NXZ
     */
    MCAPI bool hasLocalizedNames() const;
    /**
     * @hash   -852152674
     * @symbol  ?hasSourceUUID\@WorldPackHistory\@\@QEBA_NXZ
     */
    MCAPI bool hasSourceUUID() const;
    /**
     * @hash   -2026664490
     * @symbol  ?hasSubpacks\@WorldPackHistory\@\@QEBA_NXZ
     */
    MCAPI bool hasSubpacks() const;
    /**
     * @hash   -1454456481
     * @symbol  ?initializeFromJson\@WorldPackHistory\@\@QEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool initializeFromJson(class Json::Value const &);

};