#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#include "mc/world/attribute/AttributeBuffType.h"

class InstantaneousAttributeBuff : public ::AttributeBuff {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InstantaneousAttributeBuff() /*override*/;

    // vIndex: 1
    virtual bool isInstantaneous() const /*override*/;

    // vIndex: 2
    virtual bool isSerializable() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InstantaneousAttributeBuff(float amount, ::AttributeBuffType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float amount, ::AttributeBuffType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInstantaneous() const;

    MCNAPI bool $isSerializable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
