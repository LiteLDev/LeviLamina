#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/attribute/AttributeBuffType.h"

class AttributeBuff {
public:
    // prevent constructor by default
    AttributeBuff& operator=(AttributeBuff const&);
    AttributeBuff(AttributeBuff const&);
    AttributeBuff();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AttributeBuff();

    // vIndex: 1
    virtual bool isInstantaneous() const = 0;

    // vIndex: 2
    virtual bool isSerializable() const = 0;

    // vIndex: 3
    virtual void setDurationAmplifier(std::shared_ptr<class Amplifier> amplifier);

    MCAPI float getAmount() const;

    MCAPI uint64 getId() const;

    MCAPI int getOperand() const;

    MCAPI ::AttributeBuffType getType() const;

    MCAPI bool operator==(class AttributeBuff const& rhs) const;

    MCAPI void setAmplificationAmount(int amplification, float scale);

    MCAPI void setId(uint64 val);

    MCAPI void setOperand(int val);

    MCAPI void setSource(class Actor* source);

    MCAPI void setValueAmplifier(std::shared_ptr<class Amplifier> amplifier);

    MCAPI static ::ActorDamageCause buffTypeToDamageCause(::AttributeBuffType type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI AttributeBuff(float amount, int operand, ::AttributeBuffType type);

    MCAPI AttributeBuff(float amount, int operand, class ActorDamageSource const& source, ::AttributeBuffType type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(float amount, int operand, ::AttributeBuffType type);

    MCAPI void* ctor$(float amount, int operand, class ActorDamageSource const& source, ::AttributeBuffType type);

    MCAPI void dtor$();

    MCAPI void setDurationAmplifier$(std::shared_ptr<class Amplifier> amplifier);

    // NOLINTEND
};
