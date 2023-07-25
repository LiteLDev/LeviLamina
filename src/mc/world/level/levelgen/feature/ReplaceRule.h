#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplaceRule {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLACERULE
public:
    ReplaceRule& operator=(ReplaceRule const&) = delete;
    ReplaceRule(ReplaceRule const&)            = delete;
    ReplaceRule()                              = delete;
#endif

public:
    /**
     * @symbol
     * ??0ReplaceRule\@\@QEAA\@VBlockDescriptor\@\@V?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ReplaceRule(class BlockDescriptor, std::vector<class BlockDescriptor>);
    /**
     * @symbol ??1ReplaceRule\@\@QEAA\@XZ
     */
    MCAPI ~ReplaceRule();
};
