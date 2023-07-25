#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class BasicLoader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_BASICLOADER
public:
    BasicLoader& operator=(BasicLoader const&) = delete;
    BasicLoader(BasicLoader const&)            = delete;
    BasicLoader()                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_BASICLOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BasicLoader();
#endif
    /**
     * @symbol
     * ?getErrors\@BasicLoader\@cereal\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getErrors() const;
};

}; // namespace cereal
