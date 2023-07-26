#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockComponentGroupDescription {

public:
    /**
     * @symbol ??0BlockComponentGroupDescription\@\@QEAA\@XZ
     */
    MCAPI BlockComponentGroupDescription(); // NOLINT
    /**
     * @symbol ??0BlockComponentGroupDescription\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockComponentGroupDescription(struct BlockComponentGroupDescription&&); // NOLINT
    /**
     * @symbol ??0BlockComponentGroupDescription\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockComponentGroupDescription(struct BlockComponentGroupDescription const&); // NOLINT
    /**
     * @symbol
     * ?foreachDescription\@BlockComponentGroupDescription\@\@QEBAXV?$function\@$$A6AXAEBUBlockComponentDescription\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void foreachDescription(class std::function<void(struct BlockComponentDescription const&)>) const; // NOLINT
    /**
     * @symbol
     * ?getComponentDescription\@BlockComponentGroupDescription\@\@QEBAPEAUBlockComponentDescription\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct BlockComponentDescription* getComponentDescription(std::string const&) const; // NOLINT
    /**
     * @symbol ??4BlockComponentGroupDescription\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct BlockComponentGroupDescription& operator=(struct BlockComponentGroupDescription const&); // NOLINT
    /**
     * @symbol ??4BlockComponentGroupDescription\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockComponentGroupDescription& operator=(struct BlockComponentGroupDescription&&); // NOLINT
    /**
     * @symbol ??1BlockComponentGroupDescription\@\@QEAA\@XZ
     */
    MCAPI ~BlockComponentGroupDescription(); // NOLINT
};
