#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagEditHelper {

public:
    // prevent constructor by default
    CompoundTagEditHelper& operator=(CompoundTagEditHelper const&) = delete;
    CompoundTagEditHelper(CompoundTagEditHelper const&)            = delete;
    CompoundTagEditHelper()                                        = delete;

public:
    /**
     * @symbol ?getParent\@CompoundTagEditHelper\@\@QEBAPEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const* getParent() const; // NOLINT
    /**
     * @symbol
     * ?replaceWith\@CompoundTagEditHelper\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void replaceWith(std::string const&, std::unique_ptr<class Tag>); // NOLINT
    /**
     * @symbol ??1CompoundTagEditHelper\@\@QEAA\@XZ
     */
    MCAPI ~CompoundTagEditHelper(); // NOLINT

    // private:
    /**
     * @symbol
     * ?pushChild\@CompoundTagEditHelper\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void pushChild(std::string const&); // NOLINT

private:
};
