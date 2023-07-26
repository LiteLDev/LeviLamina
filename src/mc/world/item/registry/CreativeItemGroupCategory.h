#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreativeItemGroupCategory {

public:
    // prevent constructor by default
    CreativeItemGroupCategory& operator=(CreativeItemGroupCategory const&) = delete;
    CreativeItemGroupCategory(CreativeItemGroupCategory const&)            = delete;
    CreativeItemGroupCategory()                                            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVEITEMGROUPCATEGORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CreativeItemGroupCategory(); // NOLINT
#endif
    /**
     * @symbol ?addAnonymousGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo* addAnonymousGroup(); // NOLINT
    /**
     * @symbol
     * ?addChildGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@AEBVHashedString\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class CreativeGroupInfo* addChildGroup(class HashedString const&, class ItemInstance const&); // NOLINT
    /**
     * @symbol ?getChildGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class CreativeGroupInfo* getChildGroup(class HashedString const&); // NOLINT
    /**
     * @symbol ?getCreativeCategory\@CreativeItemGroupCategory\@\@QEAA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory(); // NOLINT
    /**
     * @symbol ?getOrAddTailAnonymousGroup\@CreativeItemGroupCategory\@\@QEAAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo* getOrAddTailAnonymousGroup(); // NOLINT
};
