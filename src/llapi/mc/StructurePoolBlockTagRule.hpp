/**
 * @file  StructurePoolBlockTagRule.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockTagRule.
 *
 */
class StructurePoolBlockTagRule {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKTAGRULE
public:
    class StructurePoolBlockTagRule& operator=(class StructurePoolBlockTagRule const &) = delete;
    StructurePoolBlockTagRule(class StructurePoolBlockTagRule const &) = delete;
    StructurePoolBlockTagRule() = delete;
#endif

public:
    /**
     * @symbol  ??0StructurePoolBlockTagRule\@\@QEAA\@$$QEAV?$unique_ptr\@VIStructurePoolBlockTagPredicate\@\@U?$default_delete\@VIStructurePoolBlockTagPredicate\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@1\@Z
     */
    MCAPI StructurePoolBlockTagRule(std::unique_ptr<class IStructurePoolBlockTagPredicate> &&, std::string, std::string);
    /**
     * @symbol  ?processRule\@StructurePoolBlockTagRule\@\@QEBA_NAEBVBlock\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI bool processRule(class Block const &, class CompoundTag &) const;

};