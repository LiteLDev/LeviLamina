/**
 * @file  OverloadSyntaxInformation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct OverloadSyntaxInformation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERLOADSYNTAXINFORMATION
public:
    struct OverloadSyntaxInformation& operator=(struct OverloadSyntaxInformation const &) = delete;
    OverloadSyntaxInformation(struct OverloadSyntaxInformation const &) = delete;
    OverloadSyntaxInformation() = delete;
#endif

public:
    /**
     * @symbol  ??0OverloadSyntaxInformation\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@II\@Z
     */
    MCAPI OverloadSyntaxInformation(std::string const &, unsigned int, unsigned int);

};