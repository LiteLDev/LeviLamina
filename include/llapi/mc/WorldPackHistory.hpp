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
     * @symbol  ??0WorldPackHistory\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory const &);
    /**
     * @symbol  ??0WorldPackHistory\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory &&);
    /**
     * @symbol  ?getCanBeRedownloaded\@WorldPackHistory\@\@QEBA_NXZ
     */
    MCAPI bool getCanBeRedownloaded() const;
    /**
     * @symbol  ?getLocalizedNames\@WorldPackHistory\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const & getLocalizedNames() const;
    /**
     * @symbol  ?getPackIdVersion\@WorldPackHistory\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const & getPackIdVersion() const;
    /**
     * @symbol  ?getSourceUUID\@WorldPackHistory\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const & getSourceUUID() const;
    /**
     * @symbol  ?getSubpackCount\@WorldPackHistory\@\@QEBAHXZ
     */
    MCAPI int getSubpackCount() const;
    /**
     * @symbol  ?getUnlocalizedName\@WorldPackHistory\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getUnlocalizedName() const;
    /**
     * @symbol  ?hasLocalizedNames\@WorldPackHistory\@\@QEBA_NXZ
     */
    MCAPI bool hasLocalizedNames() const;
    /**
     * @symbol  ?hasSourceUUID\@WorldPackHistory\@\@QEBA_NXZ
     */
    MCAPI bool hasSourceUUID() const;
    /**
     * @symbol  ?hasSubpacks\@WorldPackHistory\@\@QEBA_NXZ
     */
    MCAPI bool hasSubpacks() const;
    /**
     * @symbol  ?initializeFromJson\@WorldPackHistory\@\@QEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool initializeFromJson(class Json::Value const &);

};