#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AttributeBuffType.h"
#include "mc/world/attribute/AttributeBuff.h"

class InstantaneousAttributeBuff : public ::AttributeBuff {
public:
    // prevent constructor by default
    InstantaneousAttributeBuff& operator=(InstantaneousAttributeBuff const&);
    InstantaneousAttributeBuff(InstantaneousAttributeBuff const&);
    InstantaneousAttributeBuff();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isInstantaneous@InstantaneousAttributeBuff@@UEBA_NXZ
    virtual bool isInstantaneous() const;

    // vIndex: 2, symbol: ?isSerializable@InstantaneousAttributeBuff@@UEBA_NXZ
    virtual bool isSerializable() const;

    // symbol: ??1InstantaneousAttributeBuff@@UEAA@XZ
    MCVAPI ~InstantaneousAttributeBuff();

    // symbol: ??0InstantaneousAttributeBuff@@QEAA@MW4AttributeBuffType@@@Z
    MCAPI InstantaneousAttributeBuff(float, ::AttributeBuffType);

    // symbol: ??0InstantaneousAttributeBuff@@QEAA@MAEBVActorDamageSource@@@Z
    MCAPI InstantaneousAttributeBuff(float, class ActorDamageSource const&);

    // NOLINTEND
};
