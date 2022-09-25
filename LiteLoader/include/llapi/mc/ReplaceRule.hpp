/**
 * @file  ReplaceRule.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ReplaceRule.
 *
 */
struct ReplaceRule {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLACERULE
public:
    struct ReplaceRule& operator=(struct ReplaceRule const &) = delete;
    ReplaceRule(struct ReplaceRule const &) = delete;
    ReplaceRule() = delete;
#endif

public:
    /**
     * @hash   1049944880
     * @symbol ??0ReplaceRule@@QEAA@VBlockDescriptor@@V?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
     */
    MCAPI ReplaceRule(class BlockDescriptor, std::vector<class BlockDescriptor>);
    /**
     * @hash   -859939636
     * @symbol ??1ReplaceRule@@QEAA@XZ
     */
    MCAPI ~ReplaceRule();

};