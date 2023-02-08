/**
 * @file  DimensionDefinitionGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionDefinitionGroup.
 *
 */
class DimensionDefinitionGroup {

#define AFTER_EXTRA
public:
    struct DimensionDefinition{};
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDEFINITIONGROUP
public:
    class DimensionDefinitionGroup& operator=(class DimensionDefinitionGroup const &) = delete;
    DimensionDefinitionGroup(class DimensionDefinitionGroup const &) = delete;
    DimensionDefinitionGroup() = delete;
#endif

public:
    /**
     * @hash   -34954561
     * @symbol  ??0DimensionDefinitionGroup\@\@QEAA\@QEAVResourcePackManager\@\@_N\@Z
     */
    MCAPI DimensionDefinitionGroup(class ResourcePackManager *const, bool);
    /**
     * @hash   -605047498
     * @symbol  ?getDimensionDefinition\@DimensionDefinitionGroup\@\@QEBA?AV?$optional\@UDimensionDefinition\@DimensionDefinitionGroup\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<struct DimensionDefinitionGroup::DimensionDefinition> getDimensionDefinition(std::string const &) const;
    /**
     * @hash   1321172986
     * @symbol  ?isEmpty\@DimensionDefinitionGroup\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   -599566441
     * @symbol  ?tryAddDimensionDefinitionByString\@DimensionDefinitionGroup\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool tryAddDimensionDefinitionByString(std::string const &);
    /**
     * @hash   -1336650592
     * @symbol  ??1DimensionDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI ~DimensionDefinitionGroup();

};