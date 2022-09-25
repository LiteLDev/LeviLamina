/**
 * @file  FunctionEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FunctionEntry.
 *
 */
class FunctionEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUNCTIONENTRY
public:
    class FunctionEntry& operator=(class FunctionEntry const &) = delete;
    FunctionEntry(class FunctionEntry const &) = delete;
    FunctionEntry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FunctionEntry();
    /**
     * @hash   1992042748
     * @vftbl  1
     * @symbol ?execute@FunctionEntry@@UEAAXAEAVFunctionManager@@AEBVCommandOrigin@@W4FunctionQueueOrder@@@Z
     */
    virtual void execute(class FunctionManager &, class CommandOrigin const &, enum FunctionQueueOrder);
    /**
     * @hash   1015304179
     * @symbol ??0FunctionEntry@@QEAA@W4FunctionState@@@Z
     */
    MCAPI FunctionEntry(enum FunctionState);
    /**
     * @hash   -1392035469
     * @symbol ??0FunctionEntry@@QEAA@$$QEAV?$vector@V?$unique_ptr@VIFunctionEntry@@U?$default_delete@VIFunctionEntry@@@std@@@std@@V?$allocator@V?$unique_ptr@VIFunctionEntry@@U?$default_delete@VIFunctionEntry@@@std@@@std@@@2@@std@@W4FunctionState@@@Z
     */
    MCAPI FunctionEntry(std::vector<std::unique_ptr<class IFunctionEntry>> &&, enum FunctionState);
    /**
     * @hash   778981590
     * @symbol ?getErrorState@FunctionEntry@@QEBA?AW4FunctionState@@XZ
     */
    MCAPI enum FunctionState getErrorState() const;

};