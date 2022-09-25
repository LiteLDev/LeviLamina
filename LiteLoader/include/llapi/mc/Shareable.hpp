/**
 * @file  Shareable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure Shareable.
 *
 */
struct Shareable {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREABLE
public:
    struct Shareable& operator=(struct Shareable const &) = delete;
    Shareable(struct Shareable const &) = delete;
    Shareable() = delete;
#endif

public:
    /**
     * @hash   1683355250
     * @symbol ?setCraftInto@Shareable@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setCraftInto(std::string const &);
    /**
     * @hash   1925224082
     * @symbol ?setItem@Shareable@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setItem(std::string const &);

};