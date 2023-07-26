#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsynchronousIPResolver {

public:
    // prevent constructor by default
    AsynchronousIPResolver& operator=(AsynchronousIPResolver const&) = delete;
    AsynchronousIPResolver(AsynchronousIPResolver const&)            = delete;
    AsynchronousIPResolver()                                         = delete;

public:
    /**
     * @symbol
     * ??0AsynchronousIPResolver\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI AsynchronousIPResolver(std::string); // NOLINT
    /**
     * @symbol
     * ?getIp\@AsynchronousIPResolver\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getIp() const; // NOLINT
    /**
     * @symbol
     * ?getOriginalUrl\@AsynchronousIPResolver\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getOriginalUrl() const; // NOLINT
    /**
     * @symbol ?isDone\@AsynchronousIPResolver\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const; // NOLINT
    /**
     * @symbol ??1AsynchronousIPResolver\@\@QEAA\@XZ
     */
    MCAPI ~AsynchronousIPResolver(); // NOLINT

    // private:
    /**
     * @symbol ?_resolve\@AsynchronousIPResolver\@\@AEAAXXZ
     */
    MCAPI void _resolve(); // NOLINT

private:
};
