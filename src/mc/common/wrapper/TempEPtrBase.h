#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TempEPtrBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPEPTRBASE
public:
    TempEPtrBase() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?invalidate\@TempEPtrBase\@\@EEAAXXZ
     */
    virtual void invalidate();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEMPEPTRBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TempEPtrBase();
#endif
    /**
     * @symbol ??0TempEPtrBase\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI TempEPtrBase(class TempEPtrBase const&);
    /**
     * @symbol ?isValid\@TempEPtrBase\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??4TempEPtrBase\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class TempEPtrBase& operator=(class TempEPtrBase const&);
    /**
     * @symbol ?unset\@TempEPtrBase\@\@QEAAXXZ
     */
    MCAPI void unset();

    // protected:
    /**
     * @symbol ?_lock\@TempEPtrBase\@\@IEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* _lock() const;
    /**
     * @symbol ?_set\@TempEPtrBase\@\@IEAAXPEAVActor\@\@\@Z
     */
    MCAPI void _set(class Actor*);

protected:
};
