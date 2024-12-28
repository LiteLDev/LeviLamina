#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EditorWidgetDisplayEntityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8d9f7b;
    ::ll::UntypedStorage<8, 16> mUnk4cd5f4;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorWidgetDisplayEntityComponent& operator=(EditorWidgetDisplayEntityComponent const&);
    EditorWidgetDisplayEntityComponent(EditorWidgetDisplayEntityComponent const&);
    EditorWidgetDisplayEntityComponent();
};
