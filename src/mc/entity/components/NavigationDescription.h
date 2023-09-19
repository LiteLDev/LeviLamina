#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct NavigationDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    NavigationDescription& operator=(NavigationDescription const&);
    NavigationDescription(NavigationDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@NavigationFlyDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@NavigationDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1NavigationDescription@@UEAA@XZ
    MCVAPI ~NavigationDescription();

    // symbol: ??0NavigationDescription@@QEAA@XZ
    MCAPI NavigationDescription();

    // NOLINTEND
};
