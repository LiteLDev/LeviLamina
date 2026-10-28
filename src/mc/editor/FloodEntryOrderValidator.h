#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/InteractiveToolError.h"

// auto generated forward declare list
// clang-format off
namespace Editor::InteractiveTools { struct FloodEntry; }
namespace Editor::InteractiveTools { struct FloodOperationMetadata; }
// clang-format on

namespace Editor::InteractiveTools {

class FloodEntryOrderValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnk1baf99;
    ::ll::UntypedStorage<8, 64> mUnkd9ee57;
    ::ll::UntypedStorage<1, 1>  mUnk4cf831;
    ::ll::UntypedStorage<4, 4>  mUnk4a92d7;
    ::ll::UntypedStorage<4, 4>  mUnk8c8540;
    ::ll::UntypedStorage<4, 4>  mUnk315649;
    ::ll::UntypedStorage<4, 4>  mUnkeab419;
    ::ll::UntypedStorage<4, 4>  mUnk9986c7;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodEntryOrderValidator& operator=(FloodEntryOrderValidator const&);
    FloodEntryOrderValidator(FloodEntryOrderValidator const&);
    FloodEntryOrderValidator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FloodEntryOrderValidator(::Editor::InteractiveTools::FloodOperationMetadata const& metadata);

    MCNAPI ::Editor::InteractiveTools::InteractiveToolError
    add(::Editor::InteractiveTools::FloodEntry const& entry, uint index);

    MCNAPI ~FloodEntryOrderValidator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::InteractiveTools::FloodOperationMetadata const& metadata);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::InteractiveTools
