/**
 * @file  PrintStream.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PrintStream.
 *
 */
class PrintStream {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRINTSTREAM
public:
    class PrintStream& operator=(class PrintStream const &) = delete;
    PrintStream(class PrintStream const &) = delete;
    PrintStream() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PrintStream();
    /**
     * @vftbl  1
     * @symbol  ?print\@PrintStream\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void print(std::string const &);

};