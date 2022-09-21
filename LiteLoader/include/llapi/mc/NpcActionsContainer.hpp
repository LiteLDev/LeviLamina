/**
 * @file  MC/NpcActionsContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure NpcActionsContainer.
 *
 */
struct NpcActionsContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCACTIONSCONTAINER
public:
    struct NpcActionsContainer& operator=(struct NpcActionsContainer const &) = delete;
    NpcActionsContainer(struct NpcActionsContainer const &) = delete;
    NpcActionsContainer() = delete;
#endif

public:
    /**
     * @hash   -1787262799
     * @symbol ?cloneActions@NpcActionsContainer@@QEBA?AV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NpcAction>> cloneActions() const;
    /**
     * @hash   234273831
     * @symbol ?getActionAt@NpcActionsContainer@@QEAAPEAVNpcAction@@_K@Z
     */
    MCAPI class NpcAction * getActionAt(unsigned __int64);
    /**
     * @hash   941096033
     * @symbol ?getActionCount@NpcActionsContainer@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getActionCount() const;
    /**
     * @hash   1291587021
     * @symbol ?getActions@NpcActionsContainer@@QEAAAEAV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NpcAction>> & getActions();
    /**
     * @hash   1615472135
     * @symbol ?getActions@NpcActionsContainer@@QEBAAEBV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NpcAction>> const & getActions() const;
    /**
     * @hash   1901985252
     * @symbol ?getUrlCount@NpcActionsContainer@@QEBAHXZ
     */
    MCAPI int getUrlCount() const;
    /**
     * @hash   -2013148687
     * @symbol ??1NpcActionsContainer@@QEAA@XZ
     */
    MCAPI ~NpcActionsContainer();

};