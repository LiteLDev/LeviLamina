#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class PersistentDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    PersistentDescription& operator=(PersistentDescription const&);
    PersistentDescription(PersistentDescription const&);
    PersistentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@PersistentDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@Description@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1PersistentDescription@@UEAA@XZ
    MCVAPI ~PersistentDescription();

    // NOLINTEND
};
