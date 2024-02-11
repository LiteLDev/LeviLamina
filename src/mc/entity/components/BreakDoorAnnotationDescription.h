#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class BreakDoorAnnotationDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    BreakDoorAnnotationDescription& operator=(BreakDoorAnnotationDescription const&);
    BreakDoorAnnotationDescription(BreakDoorAnnotationDescription const&);
    BreakDoorAnnotationDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@BreakDoorAnnotationDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1BreakDoorAnnotationDescription@@UEAA@XZ
    virtual ~BreakDoorAnnotationDescription();

    // vIndex: 2, symbol: ?deserializeData@BreakDoorAnnotationDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
