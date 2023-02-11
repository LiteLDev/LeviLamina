/**
 * @file  SubpackInfoCollection.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   2044534268
     * @symbol  ?addSubpackInfo\@SubpackInfoCollection\@\@QEAAX$$QEAUSubpackInfo\@\@\@Z
     */
    MCAPI void addSubpackInfo(struct SubpackInfo &&);
    /**
     * @hash   1521866949
     * @symbol  ?getSubpackContentTier\@SubpackInfoCollection\@\@QEBA?AVContentTierInfo\@\@H\@Z
     */
    MCAPI class ContentTierInfo getSubpackContentTier(int) const;
    /**
     * @hash   1367030693
     * @symbol  ?getSubpackFolderName\@SubpackInfoCollection\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI std::string const & getSubpackFolderName(int) const;
    /**
     * @hash   -772840910
     * @symbol  ?getSubpackInfo\@SubpackInfoCollection\@\@QEBAAEBV?$vector\@USubpackInfo\@\@V?$allocator\@USubpackInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct SubpackInfo> const & getSubpackInfo() const;
    /**
     * @hash   -622209964
     * @symbol  ?hasSubpacks\@SubpackInfoCollection\@\@QEBA_NXZ
     */
    MCAPI bool hasSubpacks() const;

};