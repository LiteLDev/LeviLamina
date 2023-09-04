#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TrustDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TrustDescription& operator=(TrustDescription const&) = delete;
    TrustDescription(TrustDescription const&)            = delete;
    TrustDescription()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@TrustDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@Description@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1TrustDescription@@UEAA@XZ
    MCVAPI ~TrustDescription();

    // NOLINTEND
};
