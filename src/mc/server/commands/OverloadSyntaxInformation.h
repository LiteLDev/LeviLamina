#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverloadSyntaxInformation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERLOADSYNTAXINFORMATION
public:
    OverloadSyntaxInformation& operator=(OverloadSyntaxInformation const&) = delete;
    OverloadSyntaxInformation(OverloadSyntaxInformation const&)            = delete;
    OverloadSyntaxInformation()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ??0OverloadSyntaxInformation\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@II\@Z
     */
    MCAPI OverloadSyntaxInformation(std::string const&, unsigned int, unsigned int);
};
