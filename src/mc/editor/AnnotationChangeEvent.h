#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Annotations {

struct AnnotationChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk86576c;
    ::ll::UntypedStorage<4, 4>  mUnk125a38;
    ::ll::UntypedStorage<8, 16> mUnkd4fc45;
    ::ll::UntypedStorage<8, 16> mUnk951fcc;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationChangeEvent& operator=(AnnotationChangeEvent const&);
    AnnotationChangeEvent(AnnotationChangeEvent const&);
    AnnotationChangeEvent();
};

} // namespace Editor::Annotations
