/**
 * @file  MC/SubpackInfoCollection.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SubpackInfoCollection.
 *
 */
class SubpackInfoCollection {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBPACKINFOCOLLECTION
public:
    class SubpackInfoCollection& operator=(class SubpackInfoCollection const &) = delete;
    SubpackInfoCollection(class SubpackInfoCollection const &) = delete;
    SubpackInfoCollection() = delete;
#endif

public:
    /**
     * @hash   -621002964
     * @symbol ?addSubpackInfo@SubpackInfoCollection@@QEAAX$$QEAUSubpackInfo@@@Z
     */
    MCAPI void addSubpackInfo(struct SubpackInfo &&);
    /**
     * @hash   -1143670283
     * @symbol ?getSubpackContentTier@SubpackInfoCollection@@QEBA?AVContentTierInfo@@H@Z
     */
    MCAPI class ContentTierInfo getSubpackContentTier(int) const;
    /**
     * @hash   -1298506539
     * @symbol ?getSubpackFolderName@SubpackInfoCollection@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI std::string const & getSubpackFolderName(int) const;
    /**
     * @hash   -869463694
     * @symbol ?getSubpackInfo@SubpackInfoCollection@@QEBAAEBV?$vector@USubpackInfo@@V?$allocator@USubpackInfo@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct SubpackInfo> const & getSubpackInfo() const;
    /**
     * @hash   1436256628
     * @symbol ?hasSubpacks@SubpackInfoCollection@@QEBA_NXZ
     */
    MCAPI bool hasSubpacks() const;

};