#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    SerializableKeyList(SerializableKeyList const&);
    SerializableKeyList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList&
    operator=(::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList&&);

    MCNAPI ::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList&
    operator=(::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList const&);

    MCNAPI bool operator==(::Editor::ReplicatedAssociativeContainerUtil::SerializableKeyList const&) const;
    // NOLINTEND
};

} // namespace Editor::ReplicatedAssociativeContainerUtil
