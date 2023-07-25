#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ErrorMessage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_ERRORMESSAGE
public:
    ErrorMessage& operator=(ErrorMessage const&) = delete;
    ErrorMessage(ErrorMessage const&)            = delete;
    ErrorMessage()                               = delete;
#endif

public:
    /**
     * @symbol
     * ??0ErrorMessage\@CodeBuilder\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UMCRESULT\@\@0\@Z
     */
    MCAPI ErrorMessage(std::string const&, struct MCRESULT, std::string const&);
    /**
     * @symbol
     * ??0ErrorMessage\@CodeBuilder\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UMCRESULT\@\@\@Z
     */
    MCAPI ErrorMessage(std::string const&, struct MCRESULT);
    /**
     * @symbol ??1ErrorMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~ErrorMessage();
};

}; // namespace CodeBuilder
