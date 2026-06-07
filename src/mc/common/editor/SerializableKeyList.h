#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::ReplicatedAssociativeContainerUtil {

struct SerializableKeyList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkad4e69;
    ::ll::UntypedStorage<8, 32> mUnkaf423c;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableKeyList& operator=(SerializableKeyList const&);
    SerializableKeyList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SerializableKeyList(::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList const&);

    MCNAPI ::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList&
    operator=(::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList const&);
    // NOLINTEND
};

} // namespace Editor::ReplicatedAssociativeContainerUtil
