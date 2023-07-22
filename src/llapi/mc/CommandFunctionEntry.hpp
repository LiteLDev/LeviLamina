/**
 * @file  CommandFunctionEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandFunctionEntry.
 *
 */
class CommandFunctionEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDFUNCTIONENTRY
public:
    class CommandFunctionEntry& operator=(class CommandFunctionEntry const &) = delete;
    CommandFunctionEntry(class CommandFunctionEntry const &) = delete;
    CommandFunctionEntry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CommandFunctionEntry();
    /**
     * @vftbl  1
     * @symbol  ?execute\@CommandFunctionEntry\@\@UEAAXAEAVFunctionManager\@\@AEBVCommandOrigin\@\@W4FunctionQueueOrder\@\@\@Z
     */
    virtual void execute(class FunctionManager &, class CommandOrigin const &, enum class FunctionQueueOrder);
    /**
     * @symbol  ??0CommandFunctionEntry\@\@QEAA\@V?$unique_ptr\@VCommand\@\@U?$default_delete\@VCommand\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI CommandFunctionEntry(std::unique_ptr<class Command>);

};