#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AttributeBuffType.h"
#include "mc/world/attribute/AttributeBuff.h"

class TemporalAttributeBuff : public ::AttributeBuff {
public:
    // prevent constructor by default
    TemporalAttributeBuff();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TemporalAttributeBuff@@UEAA@XZ
    virtual ~TemporalAttributeBuff();

    // vIndex: 1, symbol: ?isInstantaneous@TemporalAttributeBuff@@UEBA_NXZ
    virtual bool isInstantaneous() const;

    // vIndex: 2, symbol: ?isSerializable@TemporalAttributeBuff@@UEBA_NXZ
    virtual bool isSerializable() const;

    // vIndex: 3, symbol: ?setDurationAmplifier@TemporalAttributeBuff@@UEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
    virtual void setDurationAmplifier(std::shared_ptr<class Amplifier> amplifier);

    // vIndex: 4, symbol: ?shouldBuff@TemporalAttributeBuff@@UEBA_NXZ
    virtual bool shouldBuff() const;

    // vIndex: 5, symbol: ?isComplete@TemporalAttributeBuff@@UEBA_NXZ
    virtual bool isComplete() const;

    // symbol: ??0TemporalAttributeBuff@@QEAA@AEBV0@@Z
    MCAPI TemporalAttributeBuff(class TemporalAttributeBuff const&);

    // symbol:
    // ??0TemporalAttributeBuff@@QEAA@MHW4AttributeBuffType@@_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI TemporalAttributeBuff(
        float               amount,
        int                 duration,
        ::AttributeBuffType type,
        bool                serialize,
        std::string const&  name
    );

    // symbol: ?getBaseAmount@TemporalAttributeBuff@@QEBAMXZ
    MCAPI float getBaseAmount() const;

    // symbol: ??4TemporalAttributeBuff@@QEAAAEAV0@AEBV0@@Z
    MCAPI class TemporalAttributeBuff& operator=(class TemporalAttributeBuff const&);

    // NOLINTEND
};
