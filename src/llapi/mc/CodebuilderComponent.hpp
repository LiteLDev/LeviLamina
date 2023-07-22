/**
 * @file  CodebuilderComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CodebuilderComponent.
 *
 */
class CodebuilderComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERCOMPONENT
public:
    class CodebuilderComponent& operator=(class CodebuilderComponent const &) = delete;
    CodebuilderComponent(class CodebuilderComponent const &) = delete;
    CodebuilderComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getCodeStatus\@CodebuilderComponent\@\@QEBA?AW4CodeStatus\@CodeBuilderExecutionState\@\@XZ
     */
    MCAPI enum class CodeBuilderExecutionState::CodeStatus getCodeStatus() const;
    /**
     * @symbol  ?resetCodeStatus\@CodebuilderComponent\@\@QEAAXXZ
     */
    MCAPI void resetCodeStatus();
    /**
     * @symbol  ?setCodeStatus\@CodebuilderComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCodeStatus(std::string const &);
    /**
     * @symbol  ?stringToCodeStatus\@CodebuilderComponent\@\@QEBA?AW4CodeStatus\@CodeBuilderExecutionState\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CodeBuilderExecutionState::CodeStatus stringToCodeStatus(std::string const &) const;

};