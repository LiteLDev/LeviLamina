#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/IReplicatedObjectBase.h"

namespace Editor {

class IReplicatedBaseEventData : public ::Editor::IReplicatedObjectBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void triggerEventFromPayload() const = 0;
    // NOLINTEND
};

} // namespace Editor
