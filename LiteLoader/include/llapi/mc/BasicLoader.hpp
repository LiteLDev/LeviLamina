/**
 * @file  BasicLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BasicLoader.
 *
 */
class BasicLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASICLOADER
public:
    class BasicLoader& operator=(class BasicLoader const &) = delete;
    BasicLoader(class BasicLoader const &) = delete;
    BasicLoader() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASICLOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BasicLoader();
#endif
    /**
     * @symbol ?getErrors\@BasicLoader\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getErrors() const;

};
