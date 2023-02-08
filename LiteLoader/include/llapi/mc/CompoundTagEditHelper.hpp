/**
 * @file  CompoundTagEditHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundTagEditHelper.
 *
 */
class CompoundTagEditHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGEDITHELPER
public:
    class CompoundTagEditHelper& operator=(class CompoundTagEditHelper const &) = delete;
    CompoundTagEditHelper(class CompoundTagEditHelper const &) = delete;
    CompoundTagEditHelper() = delete;
#endif

public:
    /**
     * @hash   -1733752319
     * @symbol  ?getParent\@CompoundTagEditHelper\@\@QEBAPEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const * getParent() const;
    /**
     * @hash   -2039708477
     * @symbol  ?replaceWith\@CompoundTagEditHelper\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void replaceWith(std::string const &, std::unique_ptr<class Tag>);
    /**
     * @hash   -772581709
     * @symbol  ??1CompoundTagEditHelper\@\@QEAA\@XZ
     */
    MCAPI ~CompoundTagEditHelper();

//private:
    /**
     * @hash   -944802315
     * @symbol  ?pushChild\@CompoundTagEditHelper\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void pushChild(std::string const &);

private:

};