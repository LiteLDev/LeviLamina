#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuffType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Amplifier;
// clang-format on

class AttributeBuff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk709486;
    ::ll::UntypedStorage<4, 4>  mUnka53453;
    ::ll::UntypedStorage<8, 16> mUnkcb97c5;
    ::ll::UntypedStorage<8, 16> mUnk6e424f;
    ::ll::UntypedStorage<8, 16> mUnkbd76f4;
    ::ll::UntypedStorage<4, 4>  mUnkdeb322;
    ::ll::UntypedStorage<4, 4>  mUnk45a68a;
    ::ll::UntypedStorage<8, 8>  mUnk2c3d01;
    ::ll::UntypedStorage<4, 4>  mUnkcfe284;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeBuff(AttributeBuff const&);
    AttributeBuff();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AttributeBuff();

    // vIndex: 1
    virtual bool isInstantaneous() const = 0;

    // vIndex: 2
    virtual bool isSerializable() const = 0;

    // vIndex: 3
    virtual void setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributeBuff(float amount, int operand, ::AttributeBuffType type);

    MCAPI AttributeBuff(float amount, int operand, ::ActorDamageSource const& source, ::AttributeBuffType type);

    MCAPI float getAmount() const;

    MCFOLD uint64 getId() const;

    MCFOLD int getOperand() const;

    MCFOLD ::AttributeBuffType getType() const;

    MCAPI ::AttributeBuff& operator=(::AttributeBuff const&);

    MCAPI void setAmplificationAmount(int amplification, float scale);

    MCFOLD void setId(uint64 val);

    MCFOLD void setOperand(int val);

    MCAPI void setSource(::Actor* source);

    MCFOLD void setValueAmplifier(::std::shared_ptr<::Amplifier> amplifier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float amount, int operand, ::AttributeBuffType type);

    MCAPI void* $ctor(float amount, int operand, ::ActorDamageSource const& source, ::AttributeBuffType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
