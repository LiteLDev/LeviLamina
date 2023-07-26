/**
 * @file  AsynchronousIPResolver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AsynchronousIPResolver.
 *
 */
class AsynchronousIPResolver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCHRONOUSIPRESOLVER
public:
    class AsynchronousIPResolver& operator=(class AsynchronousIPResolver const &) = delete;
    AsynchronousIPResolver(class AsynchronousIPResolver const &) = delete;
    AsynchronousIPResolver() = delete;
#endif

public:
    /**
     * @symbol  ??0AsynchronousIPResolver\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI AsynchronousIPResolver(std::string);
    /**
     * @symbol  ?getIp\@AsynchronousIPResolver\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getIp() const;
    /**
     * @symbol  ?getOriginalUrl\@AsynchronousIPResolver\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getOriginalUrl() const;
    /**
     * @symbol  ?isDone\@AsynchronousIPResolver\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @symbol  ??1AsynchronousIPResolver\@\@QEAA\@XZ
     */
    MCAPI ~AsynchronousIPResolver();

//private:
    /**
     * @symbol  ?_resolve\@AsynchronousIPResolver\@\@AEAAXXZ
     */
    MCAPI void _resolve();

private:

};