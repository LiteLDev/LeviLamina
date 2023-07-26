#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DebugAssertException {

public:
    // prevent constructor by default
    DebugAssertException& operator=(DebugAssertException const&) = delete;
    DebugAssertException()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?what\@DebugAssertException\@\@UEBAPEBDXZ
     */
    virtual char const* what() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEBUGASSERTEXCEPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DebugAssertException(); // NOLINT
#endif
    /**
     * @symbol ??0DebugAssertException\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI DebugAssertException(class DebugAssertException const&); // NOLINT
    /**
     * @symbol ??0DebugAssertException\@\@QEAA\@PEBD0H00\@Z
     */
    MCAPI DebugAssertException(char const*, char const*, int, char const*, char const*); // NOLINT

    // private:

private:
    /**
     * @symbol ?WHAT\@DebugAssertException\@\@0QEBDEB
     */
    MCAPI static char const* const WHAT; // NOLINT
};
