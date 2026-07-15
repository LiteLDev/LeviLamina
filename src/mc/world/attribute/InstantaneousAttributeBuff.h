#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"

class InstantaneousAttributeBuff : public ::AttributeBuff {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InstantaneousAttributeBuff() /*override*/;

    virtual bool isInstantaneous() const /*override*/;

    virtual bool isSerializable() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isInstantaneous() const;

    MCFOLD bool $isSerializable() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
