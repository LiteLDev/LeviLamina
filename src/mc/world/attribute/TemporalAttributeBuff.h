#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#include "mc/world/attribute/AttributeBuffType.h"

// auto generated forward declare list
// clang-format off
class Amplifier;
struct EffectDuration;
// clang-format on

class TemporalAttributeBuff : public ::AttributeBuff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk726ec5;
    ::ll::UntypedStorage<4, 4> mUnk2255be;
    ::ll::UntypedStorage<4, 4> mUnk176795;
    ::ll::UntypedStorage<1, 1> mUnk8e64c0;
    // NOLINTEND

public:
    // prevent constructor by default
    TemporalAttributeBuff& operator=(TemporalAttributeBuff const&);
    TemporalAttributeBuff();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TemporalAttributeBuff() /*override*/;

    // vIndex: 4
    virtual bool shouldBuff() const;

    // vIndex: 5
    virtual bool isComplete() const;

    // vIndex: 1
    virtual bool isInstantaneous() const /*override*/;

    // vIndex: 2
    virtual bool isSerializable() const /*override*/;

    // vIndex: 3
    virtual void setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TemporalAttributeBuff(::TemporalAttributeBuff const&);

    MCAPI TemporalAttributeBuff(
        float                amount,
        ::EffectDuration     duration,
        ::AttributeBuffType  type,
        bool                 serialize,
        ::std::string const& name
    );

    MCAPI float getBaseAmount() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TemporalAttributeBuff const&);

    MCAPI void*
    $ctor(float amount, ::EffectDuration duration, ::AttributeBuffType type, bool serialize, ::std::string const& name);
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

    MCAPI bool $isInstantaneous() const;

    MCAPI bool $isSerializable() const;

    MCAPI void $setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
