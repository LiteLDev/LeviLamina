#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class BaseGameTestFunction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_BASEGAMETESTFUNCTION
public:
    BaseGameTestFunction& operator=(BaseGameTestFunction const&) = delete;
    BaseGameTestFunction(BaseGameTestFunction const&)            = delete;
    BaseGameTestFunction()                                       = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETEST_BASEGAMETESTFUNCTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseGameTestFunction();
#endif
    /**
     * @symbol
     * ??0BaseGameTestFunction\@gametest\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00HHH_N1HHV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI
    BaseGameTestFunction(std::string, std::string, std::string, int, int, int, bool, bool, int, int, std::vector<std::string>);
    /**
     * @symbol
     * ?getBatchName\@BaseGameTestFunction\@gametest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getBatchName() const;
    /**
     * @symbol ?getRotate\@BaseGameTestFunction\@gametest\@\@QEBA_NXZ
     */
    MCAPI bool getRotate() const;
    /**
     * @symbol
     * ?getStructureName\@BaseGameTestFunction\@gametest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getStructureName() const;
    /**
     * @symbol
     * ?getTestName\@BaseGameTestFunction\@gametest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getTestName() const;
    /**
     * @symbol
     * ?hasTag\@BaseGameTestFunction\@gametest\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTag(std::string const&) const;

    // protected:
    /**
     * @symbol
     * ?_addTag\@BaseGameTestFunction\@gametest\@\@IEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _addTag(std::string);

protected:
};

}; // namespace gametest
