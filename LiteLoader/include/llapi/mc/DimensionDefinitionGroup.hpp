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
     * @symbol  ??0DimensionDefinitionGroup\@\@QEAA\@QEAVResourcePackManager\@\@_N\@Z
     */
    MCAPI DimensionDefinitionGroup(class ResourcePackManager *const, bool);
    /**
     * @symbol  ?getDimensionDefinition\@DimensionDefinitionGroup\@\@QEBA?AV?$optional\@UDimensionDefinition\@DimensionDefinitionGroup\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<struct DimensionDefinitionGroup::DimensionDefinition> getDimensionDefinition(std::string const &) const;
    /**
     * @symbol  ?isEmpty\@DimensionDefinitionGroup\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol  ?tryAddDimensionDefinitionByString\@DimensionDefinitionGroup\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool tryAddDimensionDefinitionByString(std::string const &);
    /**
     * @symbol  ??1DimensionDefinitionGroup\@\@QEAA\@XZ
     */
    MCAPI ~DimensionDefinitionGroup();

};