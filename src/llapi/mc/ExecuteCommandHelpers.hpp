/**
 * @file  ExecuteCommandHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ExecuteCommandHelpers.
 *
 */
namespace ExecuteCommandHelpers {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?handleResult\@ExecuteCommandHelpers\@\@YAXAEBVCommand\@\@AEBV?$vector\@PEBVActor\@\@V?$allocator\@PEBVActor\@\@\@std\@\@\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void handleResult(class Command const &, std::vector<class Actor const *> const &, class CommandOutput &);
    /**
     * @symbol  ?runCommand\@ExecuteCommandHelpers\@\@YAXAEBVCommand\@\@AEBVCommandOrigin\@\@AEBVActor\@\@AEAV?$vector\@PEBVActor\@\@V?$allocator\@PEBVActor\@\@\@std\@\@\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void runCommand(class Command const &, class CommandOrigin const &, class Actor const &, std::vector<class Actor const *> &, class CommandOutput &);

};