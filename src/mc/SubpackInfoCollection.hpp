/**
 * @file  SubpackInfoCollection.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?addSubpackInfo\@SubpackInfoCollection\@\@QEAAX$$QEAUSubpackInfo\@\@\@Z
     */
    MCAPI void addSubpackInfo(struct SubpackInfo &&);
    /**
     * @symbol  ?getSubpackContentTier\@SubpackInfoCollection\@\@QEBA?AVContentTierInfo\@\@H\@Z
     */
    MCAPI class ContentTierInfo getSubpackContentTier(int) const;
    /**
     * @symbol  ?getSubpackFolderName\@SubpackInfoCollection\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI std::string const & getSubpackFolderName(int) const;
    /**
     * @symbol  ?getSubpackInfo\@SubpackInfoCollection\@\@QEBAAEBV?$vector\@USubpackInfo\@\@V?$allocator\@USubpackInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct SubpackInfo> const & getSubpackInfo() const;
    /**
     * @symbol  ?hasSubpacks\@SubpackInfoCollection\@\@QEBA_NXZ
     */
    MCAPI bool hasSubpacks() const;

};