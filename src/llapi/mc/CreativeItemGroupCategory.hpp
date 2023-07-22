/**
 * @file  CreativeItemGroupCategory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0CreativeItemGroupCategory\@\@QEAA\@XZ
     */
    MCAPI CreativeItemGroupCategory();
    /**
     * @symbol  ??0CreativeItemGroupCategory\@\@QEAA\@PEAVCreativeItemRegistry\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CreativeItemCategory\@\@\@Z
     */
    MCAPI CreativeItemGroupCategory(class CreativeItemRegistry *, std::string const &, enum class CreativeItemCategory);
    /**
     * @symbol  ?addAnonymousGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo * addAnonymousGroup();
    /**
     * @symbol  ?addChildGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@AEBVHashedString\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class CreativeGroupInfo * addChildGroup(class HashedString const &, class ItemInstance const &);
    /**
     * @symbol  ?getChildGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class CreativeGroupInfo * getChildGroup(class HashedString const &);
    /**
     * @symbol  ?getCreativeCategory\@CreativeItemGroupCategory\@\@QEAA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory();
    /**
     * @symbol  ?getOrAddTailAnonymousGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo * getOrAddTailAnonymousGroup();

};