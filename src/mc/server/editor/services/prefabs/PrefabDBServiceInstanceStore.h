#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBServiceInstanceStore {
public:
    // PrefabDBServiceInstanceStore inner types declare
    // clang-format off
    struct InstanceList;
    // clang-format on

    // PrefabDBServiceInstanceStore inner types define
    struct InstanceList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkfe3976;
        // NOLINTEND

    public:
        // prevent constructor by default
        InstanceList& operator=(InstanceList const&);
        InstanceList(InstanceList const&);
        InstanceList();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void findInstancesOfTemplate(
            ::mce::UUID const&                                                   templateId,
            ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>& outInstances
        );

        MCNAPI ~InstanceList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbd6593;
    ::ll::UntypedStorage<4, 4>  mUnk67eca2;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBServiceInstanceStore& operator=(PrefabDBServiceInstanceStore const&);
    PrefabDBServiceInstanceStore(PrefabDBServiceInstanceStore const&);
    PrefabDBServiceInstanceStore();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addInstance(::OwnerPtr<::Editor::Prefabs::PrefabDBPrefabInstance> instance);

    MCNAPI bool deleteInstance(::mce::UUID const& instanceId);

    MCNAPI ::std::pair<::ChunkPos, ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    findInstance(::mce::UUID const& instanceId);

    MCNAPI void
    forEachInstance(::std::function<bool(::ChunkPos const&, ::Editor::Prefabs::PrefabDBPrefabInstance&)> func);

    MCNAPI ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    getInstancesInChunk(::ChunkPos const& chunkPos) const;
    // NOLINTEND
};

} // namespace Editor::Prefabs
