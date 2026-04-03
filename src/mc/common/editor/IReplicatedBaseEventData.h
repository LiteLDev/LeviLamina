#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IReplicatedObjectBase.h"

namespace Editor {

class IReplicatedBaseEventData : public ::Editor::IReplicatedObjectBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void triggerEventFromPayload() const = 0;

    virtual ~IReplicatedBaseEventData() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
