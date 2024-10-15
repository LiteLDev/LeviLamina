#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TempEPtrBase {
public:
    // prevent constructor by default
    TempEPtrBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void invalidate();

    // vIndex: 1
    virtual ~TempEPtrBase();

    MCAPI TempEPtrBase(class TempEPtrBase const& e);

    MCAPI bool isValid() const;

    MCAPI class TempEPtrBase& operator=(class TempEPtrBase const& e);

    MCAPI void unset();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Actor* _lock() const;

    MCAPI void _set(class Actor* e);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class TempEPtrBase const& e);

    MCAPI void dtor$();

    MCAPI void invalidate$();

    // NOLINTEND
};
