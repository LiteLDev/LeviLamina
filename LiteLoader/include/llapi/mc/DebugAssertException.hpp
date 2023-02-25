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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DebugAssertException();
    /**
     * @vftbl  1
     * @symbol  ?what\@DebugAssertException\@\@UEBAPEBDXZ
     */
    virtual char const * what() const;
    /**
     * @symbol  ??0DebugAssertException\@\@QEAA\@PEBD00H00\@Z
     */
    MCAPI DebugAssertException(char const *, char const *, char const *, int, char const *, char const *);
    /**
     * @symbol  ??0DebugAssertException\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI DebugAssertException(class DebugAssertException const &);
    /**
     * @symbol  ?isEnabled\@DebugAssertException\@\@SA_NXZ
     */
    MCAPI static bool isEnabled();

//private:

private:
    /**
     * @symbol  ?WHAT\@DebugAssertException\@\@0QEBDEB
     */
    MCAPI static char const *const WHAT;

};