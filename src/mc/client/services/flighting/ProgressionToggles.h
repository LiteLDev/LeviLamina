#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace flighting {

class ProgressionToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb81845;
    ::ll::UntypedStorage<8, 8> mUnkb18b50;
    // NOLINTEND

public:
    // prevent constructor by default
    ProgressionToggles& operator=(ProgressionToggles const&);
    ProgressionToggles(ProgressionToggles const&);
    ProgressionToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProgressionToggles() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace flighting
