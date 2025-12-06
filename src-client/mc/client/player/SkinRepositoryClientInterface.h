#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinRepositoryClientInterface {
public:
    // SkinRepositoryClientInterface inner types declare
    // clang-format off
    struct PersonaProfileLoadingState;
    struct SkinEntitlementChangeListener;
    // clang-format on

    // SkinRepositoryClientInterface inner types define
    enum class SyncState : uint {};

    struct PersonaProfileLoadingState {
    public:
        // PersonaProfileLoadingState inner types define
        enum class State : uint {};
    };

    struct SkinEntitlementChangeListener {};
};
