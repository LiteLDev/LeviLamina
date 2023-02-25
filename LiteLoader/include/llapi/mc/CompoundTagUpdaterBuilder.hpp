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
     * @symbol  ?edit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAVCompoundTagEditHelper\@\@\@Z\@3\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & edit(std::string const &, class std::function<void (class CompoundTagEditHelper &)> &&);
    /**
     * @symbol  ?match\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & match(std::string const &, std::string);
    /**
     * @symbol  ?matchLiteral\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & matchLiteral(std::string const &, std::string);
    /**
     * @symbol  ?popVisit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@XZ
     */
    MCAPI class CompoundTagUpdaterBuilder & popVisit();
    /**
     * @symbol  ?remove\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & remove(std::string const &);
    /**
     * @symbol  ?rename\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & rename(std::string const &, std::string const &);
    /**
     * @symbol  ?tryEdit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAVCompoundTagEditHelper\@\@\@Z\@3\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & tryEdit(std::string const &, class std::function<void (class CompoundTagEditHelper &)> &&);
    /**
     * @symbol  ?visit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder & visit(std::string const &);

};