#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuffType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class Amplifier;
// clang-format on

class AttributeBuff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAmount;
    ::ll::TypedStorage<4, 4, ::AttributeBuffType> mType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorDamageSource>> mSource;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>> mValueAmplifier;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>> mDurationAmplifier;
    ::ll::TypedStorage<4, 4, float> mScale;
    ::ll::TypedStorage<4, 4, int> mAmplification;
    ::ll::TypedStorage<8, 8, uint64> mId;
    ::ll::TypedStorage<4, 4, int> mOperand;
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

    MCAPI ::AttributeBuff& operator=(::AttributeBuff const&);
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
    MCNAPI static void** $vftable();
    // NOLINTEND

};
