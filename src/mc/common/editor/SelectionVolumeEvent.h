#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Selection {

struct SelectionVolumeEvent {
public:
    // SelectionVolumeEvent inner types define
    enum class EventType : int {
        Error        = 0,
        SetVolume    = 1,
        AddVolume    = 2,
        RemoveVolume = 3,
        Translate    = 4,
        Move         = 5,
        Clear        = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7624f8;
    ::ll::UntypedStorage<8, 8> mUnk5296e6;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionVolumeEvent& operator=(SelectionVolumeEvent const&);
    SelectionVolumeEvent(SelectionVolumeEvent const&);
    SelectionVolumeEvent();
};

} // namespace Editor::Selection
