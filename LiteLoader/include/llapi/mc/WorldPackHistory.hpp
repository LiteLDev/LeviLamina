/**
 * @file  MC/WorldPackHistory.hpp
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
     * @hash   -134517391
     * @symbol ??0WorldPackHistory@@QEAA@AEBV0@@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory const &);
    /**
     * @hash   200165131
     * @symbol ??0WorldPackHistory@@QEAA@$$QEAV0@@Z
     */
    MCAPI WorldPackHistory(class WorldPackHistory &&);
    /**
     * @hash   2127075290
     * @symbol ?getCanBeRedownloaded@WorldPackHistory@@QEBA_NXZ
     */
    MCAPI bool getCanBeRedownloaded() const;
    /**
     * @hash   98176280
     * @symbol ?getLocalizedNames@WorldPackHistory@@QEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const & getLocalizedNames() const;
    /**
     * @hash   2083872812
     * @symbol ?getPackIdVersion@WorldPackHistory@@QEBAAEBUPackIdVersion@@XZ
     */
    MCAPI struct PackIdVersion const & getPackIdVersion() const;
    /**
     * @hash   2094073758
     * @symbol ?getSourceUUID@WorldPackHistory@@QEBAAEBVUUID@mce@@XZ
     */
    MCAPI class mce::UUID const & getSourceUUID() const;
    /**
     * @hash   2078492022
     * @symbol ?getSubpackCount@WorldPackHistory@@QEBAHXZ
     */
    MCAPI int getSubpackCount() const;
    /**
     * @hash   -1992015346
     * @symbol ?getUnlocalizedName@WorldPackHistory@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getUnlocalizedName() const;
    /**
     * @hash   1189844476
     * @symbol ?hasLocalizedNames@WorldPackHistory@@QEBA_NXZ
     */
    MCAPI bool hasLocalizedNames() const;
    /**
     * @hash   789163038
     * @symbol ?hasSourceUUID@WorldPackHistory@@QEBA_NXZ
     */
    MCAPI bool hasSourceUUID() const;
    /**
     * @hash   -385348778
     * @symbol ?hasSubpacks@WorldPackHistory@@QEBA_NXZ
     */
    MCAPI bool hasSubpacks() const;
    /**
     * @hash   186859231
     * @symbol ?initializeFromJson@WorldPackHistory@@QEAA_NAEBVValue@Json@@@Z
     */
    MCAPI bool initializeFromJson(class Json::Value const &);

};