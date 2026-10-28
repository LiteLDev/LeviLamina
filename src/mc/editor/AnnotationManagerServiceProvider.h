#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Annotations { class AnnotationInstance; }
namespace Editor::Annotations { class AnnotationMetadata; }
namespace Editor::Annotations { class TextAnnotationInstance; }
namespace Editor::Annotations { struct AnnotationChangeEvent; }
namespace Editor::Annotations { struct TextAnnotationData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Annotations {

class AnnotationManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnnotationManagerServiceProvider() = default;

    virtual ::WeakRef<::Editor::Annotations::TextAnnotationInstance> createTextAnnotation(
        ::DimensionType const&                           dimension,
        ::Vec3 const&                                    position,
        ::Editor::Annotations::TextAnnotationData const& settings
    ) = 0;

    virtual void deleteAnnotation(::mce::UUID const& id) = 0;

    virtual void deleteAnnotations(::std::vector<::mce::UUID> const& ids) = 0;

    virtual ::WeakRef<::Editor::Annotations::AnnotationInstance> getAnnotation(::mce::UUID const& id) = 0;

    virtual ::WeakRef<::Editor::Annotations::AnnotationInstance>
    acquireLeasedInstance(::mce::UUID const& id, ::ActorUniqueID ownerId) = 0;

    virtual void releaseLeasedInstance(::mce::UUID const& id, ::ActorUniqueID ownerId) = 0;

    virtual void releaseLeasedInstances(::ActorUniqueID ownerId) = 0;

    virtual ::WeakRef<::Editor::Annotations::AnnotationMetadata> getMetadata(::mce::UUID const& id) const = 0;

    virtual ::std::vector<::WeakRef<::Editor::Annotations::AnnotationMetadata>> getAllMetadata() const = 0;

    virtual ::std::vector<::WeakRef<::Editor::Annotations::AnnotationMetadata>>
    getMetadataInChunkRange(::std::unordered_set<::ChunkPos> const& chunks, ::DimensionType const& dimension) const = 0;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToChanges(::std::function<void(::Editor::Annotations::AnnotationChangeEvent const&)> callback) = 0;
    // NOLINTEND
};

} // namespace Editor::Annotations
