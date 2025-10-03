#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssignSynchedActorDataComponent {
public:
    // AssignSynchedActorDataComponent inner types declare
    // clang-format off
    struct Args;
    // clang-format on

    // AssignSynchedActorDataComponent inner types define
    struct Args {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk53a7d2;
        ::ll::UntypedStorage<8, 16> mUnke7a314;
        // NOLINTEND

    public:
        // prevent constructor by default
        Args& operator=(Args const&);
        Args(Args const&);
        Args();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AssignSynchedActorDataComponent::Args>> mValuesToAssign;
    // NOLINTEND
};
