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
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~BreakDoorAnnotationDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void deserializeData$(struct DeserializeDataParams deserializeDataParams);

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
