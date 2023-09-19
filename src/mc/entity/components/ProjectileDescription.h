#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class ProjectileDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    ProjectileDescription& operator=(ProjectileDescription const&);
    ProjectileDescription(ProjectileDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@ProjectileDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@ProjectileDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1ProjectileDescription@@UEAA@XZ
    MCVAPI ~ProjectileDescription();

    // symbol: ??0ProjectileDescription@@QEAA@XZ
    MCAPI ProjectileDescription();

    // NOLINTEND
};
