#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagEditHelper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGEDITHELPER
public:
    CompoundTagEditHelper& operator=(CompoundTagEditHelper const&) = delete;
    CompoundTagEditHelper(CompoundTagEditHelper const&)            = delete;
    CompoundTagEditHelper()                                        = delete;
#endif

public:
    /**
     * @symbol ?getParent\@CompoundTagEditHelper\@\@QEBAPEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const* getParent() const;
    /**
     * @symbol
     * ?replaceWith\@CompoundTagEditHelper\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void replaceWith(std::string const&, std::unique_ptr<class Tag>);
    /**
     * @symbol ??1CompoundTagEditHelper\@\@QEAA\@XZ
     */
    MCAPI ~CompoundTagEditHelper();

    // private:
    /**
     * @symbol
     * ?pushChild\@CompoundTagEditHelper\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void pushChild(std::string const&);

private:
};
