#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

struct PrefabDBTemplateChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk780915;
    ::ll::UntypedStorage<8, 16> mUnke92f8b;
    ::ll::UntypedStorage<8, 16> mUnk7b3034;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBTemplateChangeEvent& operator=(PrefabDBTemplateChangeEvent const&);
    PrefabDBTemplateChangeEvent(PrefabDBTemplateChangeEvent const&);
    PrefabDBTemplateChangeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PrefabDBTemplateChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
