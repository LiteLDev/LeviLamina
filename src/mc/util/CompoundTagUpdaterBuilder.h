#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagUpdaterBuilder {

public:
    // prevent constructor by default
    CompoundTagUpdaterBuilder& operator=(CompoundTagUpdaterBuilder const&) = delete;
    CompoundTagUpdaterBuilder(CompoundTagUpdaterBuilder const&)            = delete;
    CompoundTagUpdaterBuilder()                                            = delete;

public:
    /**
     * @symbol
     * ?edit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAVCompoundTagEditHelper\@\@\@Z\@3\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder&
    edit(std::string const&, class std::function<void(class CompoundTagEditHelper&)>&&); // NOLINT
    /**
     * @symbol
     * ?match\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder& match(std::string const&, std::string); // NOLINT
    /**
     * @symbol
     * ?matchInteger\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder& matchInteger(std::string const&, __int64); // NOLINT
    /**
     * @symbol
     * ?matchLiteral\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder& matchLiteral(std::string const&, std::string); // NOLINT
    /**
     * @symbol ?popVisit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@XZ
     */
    MCAPI class CompoundTagUpdaterBuilder& popVisit(); // NOLINT
    /**
     * @symbol
     * ?remove\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder& remove(std::string const&); // NOLINT
    /**
     * @symbol
     * ?rename\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder& rename(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?tryEdit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAVCompoundTagEditHelper\@\@\@Z\@3\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder&
    tryEdit(std::string const&, class std::function<void(class CompoundTagEditHelper&)>&&); // NOLINT
    /**
     * @symbol
     * ?visit\@CompoundTagUpdaterBuilder\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder& visit(std::string const&); // NOLINT
};
