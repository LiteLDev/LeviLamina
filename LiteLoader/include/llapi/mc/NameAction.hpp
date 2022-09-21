/**
 * @file  MC/NameAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure NameAction.
 *
 */
struct NameAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAMEACTION
public:
    struct NameAction& operator=(struct NameAction const &) = delete;
    NameAction() = delete;
#endif

public:
    /**
     * @hash   725302479
     * @symbol ??0NameAction@@QEAA@AEBU0@@Z
     */
    MCAPI NameAction(struct NameAction const &);
    /**
     * @hash   457522638
     * @symbol ?addNameFilterByName@NameAction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addNameFilterByName(std::string const &);
    /**
     * @hash   -1507518197
     * @symbol ??1NameAction@@QEAA@XZ
     */
    MCAPI ~NameAction();

};