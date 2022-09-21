/**
 * @file  MC/CreativeItemGroupCategory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CreativeItemGroupCategory.
 *
 */
class CreativeItemGroupCategory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMGROUPCATEGORY
public:
    class CreativeItemGroupCategory& operator=(class CreativeItemGroupCategory const &) = delete;
    CreativeItemGroupCategory(class CreativeItemGroupCategory const &) = delete;
#endif

public:
    /**
     * @hash   -968615177
     * @symbol ??0CreativeItemGroupCategory@@QEAA@XZ
     */
    MCAPI CreativeItemGroupCategory();
    /**
     * @hash   -169332701
     * @symbol ??0CreativeItemGroupCategory@@QEAA@PEAVCreativeItemRegistry@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CreativeItemCategory@@@Z
     */
    MCAPI CreativeItemGroupCategory(class CreativeItemRegistry *, std::string const &, enum CreativeItemCategory);
    /**
     * @hash   1329657039
     * @symbol ?addAnonymousGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@XZ
     */
    MCAPI class CreativeGroupInfo * addAnonymousGroup();
    /**
     * @hash   2051884137
     * @symbol ?addChildGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@AEBVHashedString@@AEBVItemInstance@@@Z
     */
    MCAPI class CreativeGroupInfo * addChildGroup(class HashedString const &, class ItemInstance const &);
    /**
     * @hash   -465366296
     * @symbol ?getChildGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@AEBVHashedString@@@Z
     */
    MCAPI class CreativeGroupInfo * getChildGroup(class HashedString const &);
    /**
     * @hash   -1456130848
     * @symbol ?getCreativeCategory@CreativeItemGroupCategory@@QEAA?AW4CreativeItemCategory@@XZ
     */
    MCAPI enum CreativeItemCategory getCreativeCategory();
    /**
     * @hash   947739339
     * @symbol ?getOrAddTailAnonymousGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@XZ
     */
    MCAPI class CreativeGroupInfo * getOrAddTailAnonymousGroup();

};