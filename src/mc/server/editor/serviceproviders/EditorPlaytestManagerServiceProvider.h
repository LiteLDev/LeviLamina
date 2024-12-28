#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class EditorPlaytestManagerServiceProvider {
public:
    // prevent constructor by default
    EditorPlaytestManagerServiceProvider& operator=(EditorPlaytestManagerServiceProvider const&);
    EditorPlaytestManagerServiceProvider(EditorPlaytestManagerServiceProvider const&);
    EditorPlaytestManagerServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlaytestManagerServiceProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
