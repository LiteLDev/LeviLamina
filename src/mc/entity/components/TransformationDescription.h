#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct TransformationDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TransformationDescription& operator=(TransformationDescription const&);
    TransformationDescription(TransformationDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@TransformationDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1TransformationDescription@@UEAA@XZ
    virtual ~TransformationDescription();

    // vIndex: 2, symbol: ?deserializeData@TransformationDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // symbol: ??0TransformationDescription@@QEAA@XZ
    MCAPI TransformationDescription();

    // NOLINTEND
};
