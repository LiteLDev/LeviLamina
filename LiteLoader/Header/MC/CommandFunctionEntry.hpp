// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
    /*0*/ virtual ~CommandFunctionEntry();
    /*1*/ virtual void execute(class FunctionManager &, class CommandOrigin const &, enum FunctionQueueOrder);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDFUNCTIONENTRY
public:
#endif
    MCAPI CommandFunctionEntry(std::unique_ptr<class Command>);



};