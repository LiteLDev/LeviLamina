/**
 * @file  CompoundTagUpdaterBuilder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundTagUpdaterBuilder.
 *
 */
class CompoundTagUpdaterBuilder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGUPDATERBUILDER
public:
    class CompoundTagUpdaterBuilder& operator=(class CompoundTagUpdaterBuilder const &) = delete;
    CompoundTagUpdaterBuilder(class CompoundTagUpdaterBuilder const &) = delete;
    CompoundTagUpdaterBuilder() = delete;
#endif

public:
    /**
     * @hash   692023275
     * @symbol  ?edit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAVCompoundTagEditHelper\@\@\@Z\@3\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & edit(std::string const &, class std::function<void (class CompoundTagEditHelper &)> &&);
    /**
     * @hash   1558672602
     * @symbol  ?match\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & match(std::string const &, std::string);
    /**
     * @hash   -481285134
     * @symbol  ?matchLiteral\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & matchLiteral(std::string const &, std::string);
    /**
     * @hash   265013852
     * @symbol  ?popVisit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@XZ
     */
    MCAPI class CompoundTagUpdaterBuilder & popVisit();
    /**
     * @hash   1810389317
     * @symbol  ?remove\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & remove(std::string const &);
    /**
     * @hash   -1731739853
     * @symbol  ?rename\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & rename(std::string const &, std::string const &);
    /**
     * @hash   1141223897
     * @symbol  ?tryEdit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAVCompoundTagEditHelper\@\@\@Z\@3\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & tryEdit(std::string const &, class std::function<void (class CompoundTagEditHelper &)> &&);
    /**
     * @hash   383279639
     * @symbol  ?visit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & visit(std::string const &);

};