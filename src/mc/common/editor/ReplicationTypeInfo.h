#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class IReplicatedObjectBase; }
namespace Editor::Network { class PayloadServiceProvider; }
// clang-format on

namespace Editor::Services {

struct ReplicationTypeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8c5438;
    ::ll::UntypedStorage<4, 4>  mUnkc7b302;
    ::ll::UntypedStorage<1, 1>  mUnk5d7728;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplicationTypeInfo& operator=(ReplicationTypeInfo const&);
    ReplicationTypeInfo(ReplicationTypeInfo const&);
    ReplicationTypeInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReplicationTypeInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
