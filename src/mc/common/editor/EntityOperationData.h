#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace Editor::Transactions {

struct EntityOperationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk25d71f;
    ::ll::UntypedStorage<8, 8> mUnk670f46;
    ::ll::UntypedStorage<8, 8> mUnk879540;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityOperationData& operator=(EntityOperationData const&);
    EntityOperationData(EntityOperationData const&);
    EntityOperationData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EntityOperationData(::Actor* entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor* entity);
    // NOLINTEND
};

} // namespace Editor::Transactions
