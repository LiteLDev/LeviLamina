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
    virtual ~EditorPlaytestManagerServiceProvider() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
