#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreativeItemGroupCategory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMGROUPCATEGORY
public:
    CreativeItemGroupCategory& operator=(CreativeItemGroupCategory const&) = delete;
    CreativeItemGroupCategory(CreativeItemGroupCategory const&)            = delete;
    CreativeItemGroupCategory()                                            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVEITEMGROUPCATEGORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CreativeItemGroupCategory();
#endif
    /**
     * @symbol ?addAnonymousGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo* addAnonymousGroup();
    /**
     * @symbol
     * ?addChildGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@AEBVHashedString\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class CreativeGroupInfo* addChildGroup(class HashedString const&, class ItemInstance const&);
    /**
     * @symbol ?getChildGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class CreativeGroupInfo* getChildGroup(class HashedString const&);
    /**
     * @symbol ?getCreativeCategory\@CreativeItemGroupCategory\@\@QEAA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory();
    /**
     * @symbol ?getOrAddTailAnonymousGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo* getOrAddTailAnonymousGroup();
};
