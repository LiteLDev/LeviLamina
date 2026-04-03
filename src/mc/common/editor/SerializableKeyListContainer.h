#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::ReplicatedAssociativeContainerUtil {

struct SerializableKeyListContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1c72e7;
    ::ll::UntypedStorage<8, 24> mUnk88cdc5;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableKeyListContainer& operator=(SerializableKeyListContainer const&);
    SerializableKeyListContainer(SerializableKeyListContainer const&);
    SerializableKeyListContainer();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::ReplicatedAssociativeContainerUtil
