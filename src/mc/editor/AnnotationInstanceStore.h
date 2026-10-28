#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class ChunkKey;
namespace Editor::Annotations { class AnnotationInstance; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class AnnotationInstanceStore {
public:
    // AnnotationInstanceStore inner types declare
    // clang-format off
    struct InstanceIndexEntry;
    struct InstanceList;
    // clang-format on

    // AnnotationInstanceStore inner types define
    struct InstanceIndexEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 12> mUnkc53c10;
        ::ll::UntypedStorage<8, 16> mUnka44ea3;
        // NOLINTEND

    public:
        // prevent constructor by default
        InstanceIndexEntry& operator=(InstanceIndexEntry const&);
        InstanceIndexEntry(InstanceIndexEntry const&);
        InstanceIndexEntry();
    };

    struct InstanceList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk2981b1;
        // NOLINTEND

    public:
        // prevent constructor by default
        InstanceList& operator=(InstanceList const&);
        InstanceList(InstanceList const&);
        InstanceList();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk54a60f;
    ::ll::UntypedStorage<8, 64> mUnk4dffb7;
    ::ll::UntypedStorage<8, 64> mUnk12a107;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationInstanceStore& operator=(AnnotationInstanceStore const&);
    AnnotationInstanceStore(AnnotationInstanceStore const&);
    AnnotationInstanceStore();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addInstance(
        ::ChunkKey const&                                     chunkKey,
        ::OwnerPtr<::Editor::Annotations::AnnotationInstance> instance,
        bool                                                  chunkLoaded
    );

    MCNAPI bool isChunkLoaded(::ChunkKey const& chunkKey) const;

    MCNAPI bool moveInstance(::mce::UUID const& id, ::ChunkKey const& chunkKey, bool chunkLoaded);

    MCNAPI bool removeInstance(::mce::UUID const& id);
    // NOLINTEND
};

} // namespace Editor::Services
