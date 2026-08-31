#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class EmptySampleServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptySampleServiceProvider() = default;

    virtual void SampleMethod() const = 0;
    // NOLINTEND
};

} // namespace Editor::Services
