#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/AttributeBuffType.h"

class AttributeBuff {
public:
    // prevent constructor by default
    AttributeBuff& operator=(AttributeBuff const&);
    AttributeBuff(AttributeBuff const&);
    AttributeBuff();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AttributeBuff@@UEAA@XZ
    virtual ~AttributeBuff();

    // vIndex: 1, symbol: ?isInstantaneous@InstantaneousAttributeBuff@@UEBA_NXZ
    virtual bool isInstantaneous() const = 0;

    // vIndex: 2, symbol: ?isSerializable@InstantaneousAttributeBuff@@UEBA_NXZ
    virtual bool isSerializable() const = 0;

    // vIndex: 3, symbol: ?setDurationAmplifier@AttributeBuff@@UEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
    virtual void setDurationAmplifier(std::shared_ptr<class Amplifier> amplifier);

    // symbol: ?getAmount@AttributeBuff@@QEBAMXZ
    MCAPI float getAmount() const;

    // symbol: ?getId@AttributeBuff@@QEBA_KXZ
    MCAPI uint64 getId() const;

    // symbol: ?getOperand@AttributeBuff@@QEBAHXZ
    MCAPI int getOperand() const;

    // symbol: ?getType@AttributeBuff@@QEBA?AW4AttributeBuffType@@XZ
    MCAPI ::AttributeBuffType getType() const;

    // symbol: ??8AttributeBuff@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class AttributeBuff const& rhs) const;

    // symbol: ?setAmplificationAmount@AttributeBuff@@QEAAXHM@Z
    MCAPI void setAmplificationAmount(int amplification, float scale);

    // symbol: ?setId@AttributeBuff@@QEAAX_K@Z
    MCAPI void setId(uint64 val);

    // symbol: ?setOperand@AttributeBuff@@QEAAXH@Z
    MCAPI void setOperand(int val);

    // symbol: ?setSource@AttributeBuff@@QEAAXPEAVActor@@@Z
    MCAPI void setSource(class Actor* source);

    // symbol: ?setValueAmplifier@AttributeBuff@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
    MCAPI void setValueAmplifier(std::shared_ptr<class Amplifier> amplifier);

    // symbol: ?buffTypeToDamageCause@AttributeBuff@@SA?AW4ActorDamageCause@@W4AttributeBuffType@@@Z
    MCAPI static ::ActorDamageCause buffTypeToDamageCause(::AttributeBuffType type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0AttributeBuff@@IEAA@MHW4AttributeBuffType@@@Z
    MCAPI AttributeBuff(float amount, int operand, ::AttributeBuffType type);

    // symbol: ??0AttributeBuff@@IEAA@MHAEBVActorDamageSource@@W4AttributeBuffType@@@Z
    MCAPI AttributeBuff(float amount, int operand, class ActorDamageSource const& source, ::AttributeBuffType type);

    // NOLINTEND
};
