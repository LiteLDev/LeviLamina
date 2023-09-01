#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TripodCameraDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TripodCameraDescription& operator=(TripodCameraDescription const&) = delete;
    TripodCameraDescription(TripodCameraDescription const&)            = delete;
    TripodCameraDescription()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@TripodCameraDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@Description@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1TripodCameraDescription@@UEAA@XZ
    MCVAPI ~TripodCameraDescription();

    // NOLINTEND
};
