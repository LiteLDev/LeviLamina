#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class OpenDoorAnnotationDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    OpenDoorAnnotationDescription& operator=(OpenDoorAnnotationDescription const&);
    OpenDoorAnnotationDescription(OpenDoorAnnotationDescription const&);
    OpenDoorAnnotationDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~OpenDoorAnnotationDescription();

    // NOLINTEND
};
