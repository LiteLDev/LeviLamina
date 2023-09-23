#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPropertiesDescription {
public:
    // prevent constructor by default
    ActorPropertiesDescription(ActorPropertiesDescription const&);
    ActorPropertiesDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getJsonName@ActorPropertiesDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // symbol: ??1ActorPropertiesDescription@@UEAA@XZ
    MCVAPI ~ActorPropertiesDescription();

    // symbol: ??4ActorPropertiesDescription@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ActorPropertiesDescription& operator=(struct ActorPropertiesDescription const&);

    // NOLINTEND
};
