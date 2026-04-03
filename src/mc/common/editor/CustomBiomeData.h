#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct CustomBiomeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk81fa1a;
    ::ll::UntypedStorage<8, 16> mUnkc4f1cc;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomBiomeData& operator=(CustomBiomeData const&);
    CustomBiomeData(CustomBiomeData const&);
    CustomBiomeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CustomBiomeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
