#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPropertiesDescription {
public:
    // prevent constructor by default
    ActorPropertiesDescription& operator=(ActorPropertiesDescription const&);
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

    // NOLINTEND
};
