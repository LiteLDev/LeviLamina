#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#include "mc/world/attribute/AttributeBuffType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

class InstantaneousAttributeBuff : public ::AttributeBuff {
public:
    // prevent constructor by default
    InstantaneousAttributeBuff& operator=(InstantaneousAttributeBuff const&);
    InstantaneousAttributeBuff(InstantaneousAttributeBuff const&);
    InstantaneousAttributeBuff();

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
    MCAPI InstantaneousAttributeBuff(float amount, ::ActorDamageSource const& source);

    MCAPI InstantaneousAttributeBuff(float amount, ::AttributeBuffType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float amount, ::ActorDamageSource const& source);

    MCAPI void* $ctor(float amount, ::AttributeBuffType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isInstantaneous() const;

    MCAPI bool $isSerializable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
