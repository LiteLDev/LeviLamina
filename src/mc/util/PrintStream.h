#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrintStream {

public:
    // prevent constructor by default
    PrintStream& operator=(PrintStream const&) = delete;
    PrintStream(PrintStream const&)            = delete;
    PrintStream()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?print\@PrintStream\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void print(std::string const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PRINTSTREAM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PrintStream(); // NOLINT
#endif
    /**
     * @symbol
     * ?println\@PrintStream\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void println(std::string const&); // NOLINT
};
