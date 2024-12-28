#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class EmptySampleServiceProvider {
public:
    // prevent constructor by default
    EmptySampleServiceProvider& operator=(EmptySampleServiceProvider const&);
    EmptySampleServiceProvider(EmptySampleServiceProvider const&);
    EmptySampleServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EmptySampleServiceProvider();

    // vIndex: 1
    virtual void SampleMethod() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
