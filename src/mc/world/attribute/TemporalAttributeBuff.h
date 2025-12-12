#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class Amplifier;
// clang-format on

class TemporalAttributeBuff : public ::AttributeBuff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EffectDuration> mDuration;
    ::ll::TypedStorage<4, 4, int>              mLifeTimer;
    ::ll::TypedStorage<4, 4, float>            mBaseAmount;
    ::ll::TypedStorage<1, 1, bool>             mIsSerializable;
    // NOLINTEND

public:
    // prevent constructor by default
    TemporalAttributeBuff& operator=(TemporalAttributeBuff const&);
    TemporalAttributeBuff();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TemporalAttributeBuff() /*override*/;

    virtual bool shouldBuff() const;

    virtual bool isComplete() const;

    virtual bool isInstantaneous() const /*override*/;

    virtual bool isSerializable() const /*override*/;

    virtual void setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TemporalAttributeBuff(::TemporalAttributeBuff const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TemporalAttributeBuff const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldBuff() const;

    MCAPI bool $isComplete() const;

    MCFOLD bool $isInstantaneous() const;

    MCAPI bool $isSerializable() const;

    MCAPI void $setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
