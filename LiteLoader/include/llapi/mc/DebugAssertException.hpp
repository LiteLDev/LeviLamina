/**
 * @file  DebugAssertException.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DebugAssertException.
 *
 */
class DebugAssertException {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGASSERTEXCEPTION
public:
    class DebugAssertException& operator=(class DebugAssertException const &) = delete;
    DebugAssertException() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?what\@DebugAssertException\@\@UEBAPEBDXZ
     */
    virtual char const * what() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEBUGASSERTEXCEPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DebugAssertException();
#endif
    /**
     * @symbol ??0DebugAssertException\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI DebugAssertException(class DebugAssertException const &);
    /**
     * @symbol ??0DebugAssertException\@\@QEAA\@PEBD00H00\@Z
     */
    MCAPI DebugAssertException(char const *, char const *, char const *, int, char const *, char const *);
    /**
     * @symbol ?isEnabled\@DebugAssertException\@\@SA_NXZ
     */
    MCAPI static bool isEnabled();

//private:

private:
    /**
     * @symbol ?WHAT\@DebugAssertException\@\@0QEBDEB
     */
    MCAPI static char const *const WHAT;

};
