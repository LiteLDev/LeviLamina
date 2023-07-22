/**
 * @file  NpcActionsContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?cloneActions\@NpcActionsContainer\@\@QEBA?AV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NpcAction>> cloneActions() const;
    /**
     * @symbol  ?getActionAt\@NpcActionsContainer\@\@QEAAPEAVNpcAction\@\@_K\@Z
     */
    MCAPI class NpcAction * getActionAt(unsigned __int64);
    /**
     * @symbol  ?getActionCount\@NpcActionsContainer\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getActionCount() const;
    /**
     * @symbol  ?getActions\@NpcActionsContainer\@\@QEAAAEAV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NpcAction>> & getActions();
    /**
     * @symbol  ?getActions\@NpcActionsContainer\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class NpcAction>> const & getActions() const;
    /**
     * @symbol  ?getUrlCount\@NpcActionsContainer\@\@QEBAHXZ
     */
    MCAPI int getUrlCount() const;
    /**
     * @symbol  ??1NpcActionsContainer\@\@QEAA\@XZ
     */
    MCAPI ~NpcActionsContainer();

};