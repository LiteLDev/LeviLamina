#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#include "mc/world/attribute/AttributeBuffType.h"

class TemporalAttributeBuff : public ::AttributeBuff {
public:
    // prevent constructor by default
    TemporalAttributeBuff();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TemporalAttributeBuff();

    // vIndex: 1
    virtual bool isInstantaneous() const;

    // vIndex: 2
    virtual bool isSerializable() const;

    // vIndex: 3
    virtual void setDurationAmplifier(std::shared_ptr<class Amplifier> amplifier);

    // vIndex: 4
    virtual bool shouldBuff() const;

    // vIndex: 5
    virtual bool isComplete() const;

    MCAPI TemporalAttributeBuff(class TemporalAttributeBuff const&);

    MCAPI TemporalAttributeBuff(
        float               amount,
        int                 duration,
        ::AttributeBuffType type,
        bool                serialize,
        std::string const&  name
    );

    MCAPI float getBaseAmount() const;

    MCAPI class TemporalAttributeBuff& operator=(class TemporalAttributeBuff const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(float amount, int duration, ::AttributeBuffType type, bool serialize, std::string const& name);

    MCAPI void* ctor$(class TemporalAttributeBuff const&);

    MCAPI void dtor$();

    MCAPI bool isComplete$() const;

    MCAPI bool isInstantaneous$() const;

    MCAPI bool isSerializable$() const;

    MCAPI void setDurationAmplifier$(std::shared_ptr<class Amplifier> amplifier);

    MCAPI bool shouldBuff$() const;

    // NOLINTEND
};
