/**
 * @file  OverloadSyntaxInformation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class OverloadSyntaxInformation.
 *
 */
class OverloadSyntaxInformation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERLOADSYNTAXINFORMATION
public:
    class OverloadSyntaxInformation& operator=(class OverloadSyntaxInformation const &) = delete;
    OverloadSyntaxInformation(class OverloadSyntaxInformation const &) = delete;
    OverloadSyntaxInformation() = delete;
#endif

public:
    /**
     * @hash   2123126742
     * @symbol ??0OverloadSyntaxInformation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@II@Z
     */
    MCAPI OverloadSyntaxInformation(std::string const &, unsigned int, unsigned int);

};