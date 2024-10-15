#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#include "mc/world/attribute/AttributeBuffType.h"

class InstantaneousAttributeBuff : public ::AttributeBuff {
public:
    // prevent constructor by default
    InstantaneousAttributeBuff& operator=(InstantaneousAttributeBuff const&);
    InstantaneousAttributeBuff(InstantaneousAttributeBuff const&);
    InstantaneousAttributeBuff();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InstantaneousAttributeBuff();

    // vIndex: 1
    virtual bool isInstantaneous() const;

    // vIndex: 2
    virtual bool isSerializable() const;

    MCAPI InstantaneousAttributeBuff(float amount, class ActorDamageSource const& source);

    MCAPI InstantaneousAttributeBuff(float amount, ::AttributeBuffType type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(float amount, ::AttributeBuffType type);

    MCAPI void* ctor$(float amount, class ActorDamageSource const& source);

    MCAPI void dtor$();

    MCAPI bool isInstantaneous$() const;

    MCAPI bool isSerializable$() const;

    // NOLINTEND
};
