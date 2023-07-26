#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TempEPtrBase {

public:
    // prevent constructor by default
    TempEPtrBase() = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?invalidate\@TempEPtrBase\@\@EEAAXXZ
     */
    virtual void invalidate(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEMPEPTRBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TempEPtrBase(); // NOLINT
#endif
    /**
     * @symbol ??0TempEPtrBase\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI TempEPtrBase(class TempEPtrBase const&); // NOLINT
    /**
     * @symbol ?isValid\@TempEPtrBase\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??4TempEPtrBase\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class TempEPtrBase& operator=(class TempEPtrBase const&); // NOLINT
    /**
     * @symbol ?unset\@TempEPtrBase\@\@QEAAXXZ
     */
    MCAPI void unset(); // NOLINT

    // protected:
    /**
     * @symbol ?_lock\@TempEPtrBase\@\@IEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* _lock() const; // NOLINT
    /**
     * @symbol ?_set\@TempEPtrBase\@\@IEAAXPEAVActor\@\@\@Z
     */
    MCAPI void _set(class Actor*); // NOLINT

protected:
};
