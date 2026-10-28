#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/AnnotationChangeType.h"
#include "mc/editor/AnnotationInstanceHandler.h"
#include "mc/editor/AnnotationManagerServiceProvider.h"
#include "mc/editor/AnnotationMetadataHandler.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class ChunkKey;
class ChunkPos;
class ChunkSource;
class HashedString;
class LevelChunk;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Annotations { class AnnotationInstance; }
namespace Editor::Annotations { class AnnotationMetadata; }
namespace Editor::Annotations { class TextAnnotationInstance; }
namespace Editor::Annotations { struct AnnotationChangeEvent; }
namespace Editor::Annotations { struct TextAnnotationData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class AnnotationManagerService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Annotations::AnnotationManagerServiceProvider,
                                 public ::Editor::Annotations::AnnotationMetadataHandler,
                                 public ::Editor::Annotations::AnnotationInstanceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnkcaa446;
    ::ll::UntypedStorage<8, 64>  mUnk6aa005;
    ::ll::UntypedStorage<8, 64>  mUnk9d8c9d;
    ::ll::UntypedStorage<8, 64>  mUnk5e35b6;
    ::ll::UntypedStorage<8, 192> mUnkaa4a67;
    ::ll::UntypedStorage<8, 64>  mUnkfd37b5;
    ::ll::UntypedStorage<8, 32>  mUnkb6a410;
    ::ll::UntypedStorage<8, 32>  mUnk6297db;
    ::ll::UntypedStorage<8, 64>  mUnkfe929f;
    ::ll::UntypedStorage<8, 64>  mUnk8759d4;
    ::ll::UntypedStorage<8, 64>  mUnka14ccf;
    ::ll::UntypedStorage<8, 16>  mUnkff577e;
    ::ll::UntypedStorage<8, 16>  mUnk519317;
    ::ll::UntypedStorage<8, 16>  mUnkc22f55;
    ::ll::UntypedStorage<8, 16>  mUnk57ff8f;
    ::ll::UntypedStorage<8, 48>  mUnke1cfa4;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationManagerService& operator=(AnnotationManagerService const&);
    AnnotationManagerService(AnnotationManagerService const&);
    AnnotationManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnnotationManagerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::WeakRef<::Editor::Annotations::TextAnnotationInstance> createTextAnnotation(
        ::DimensionType const&                           dimension,
        ::Vec3 const&                                    position,
        ::Editor::Annotations::TextAnnotationData const& settings
    ) /*override*/;

    virtual void deleteAnnotation(::mce::UUID const& id) /*override*/;

    virtual void deleteAnnotations(::std::vector<::mce::UUID> const& ids) /*override*/;

    virtual ::WeakRef<::Editor::Annotations::AnnotationInstance> getAnnotation(::mce::UUID const& id) /*override*/;

    virtual ::WeakRef<::Editor::Annotations::AnnotationInstance>
    acquireLeasedInstance(::mce::UUID const& id, ::ActorUniqueID ownerId) /*override*/;

    virtual void releaseLeasedInstance(::mce::UUID const& id, ::ActorUniqueID ownerId) /*override*/;

    virtual void releaseLeasedInstances(::ActorUniqueID ownerId) /*override*/;

    virtual ::WeakRef<::Editor::Annotations::AnnotationMetadata> getMetadata(::mce::UUID const& id) const /*override*/;

    virtual ::std::vector<::WeakRef<::Editor::Annotations::AnnotationMetadata>> getAllMetadata() const /*override*/;

    virtual ::std::vector<::WeakRef<::Editor::Annotations::AnnotationMetadata>>
    getMetadataInChunkRange(::std::unordered_set<::ChunkPos> const& chunks, ::DimensionType const& dimension) const
        /*override*/;

    virtual ::Bedrock::PubSub::Subscription subscribeToChanges(
        ::std::function<void(::Editor::Annotations::AnnotationChangeEvent const&)> callback
    ) /*override*/;

    virtual void onUpdate(::Editor::Annotations::AnnotationMetadata const& metadata) /*override*/;

    virtual void onUpdate(::Editor::Annotations::AnnotationInstance const& instance) /*override*/;

    virtual ::std::optional<::HashedString>
    validateName(::Editor::Annotations::AnnotationMetadata const& metadata, ::HashedString const& name) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnnotationManagerService(
        ::Editor::ServiceProviderCollection& providers,
        ::Core::PathBuffer<::std::string>    annotationPath
    );

    MCNAPI void _deleteAnnotation(::mce::UUID const& id);

    MCNAPI ::HashedString _getUniqueAnnotationName(::HashedString const& name) const;

    MCNAPI bool _loadInstance(::mce::UUID const& id, ::ChunkKey const& chunkKey, bool chunkLoaded);

    MCNAPI void _onChunkDiscarded(::LevelChunk& chunk);

    MCNAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk& chunk, int);

    MCNAPI void _publishUpdate(::mce::UUID const& id, ::Editor::Annotations::AnnotationChangeType type);

    MCNAPI bool _saveAndRemoveInstance(::mce::UUID const& id);

    MCNAPI void _saveDirtyAnnotations();

    MCNAPI void _updateMetadataIndex(::mce::UUID const& id);

    MCNAPI bool _writeData(::Editor::Annotations::AnnotationInstance const& instance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& serviceName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Editor::ServiceProviderCollection& providers, ::Core::PathBuffer<::std::string> annotationPath);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::WeakRef<::Editor::Annotations::TextAnnotationInstance> $createTextAnnotation(
        ::DimensionType const&                           dimension,
        ::Vec3 const&                                    position,
        ::Editor::Annotations::TextAnnotationData const& settings
    );

    MCNAPI void $deleteAnnotation(::mce::UUID const& id);

    MCNAPI void $deleteAnnotations(::std::vector<::mce::UUID> const& ids);

    MCNAPI ::WeakRef<::Editor::Annotations::AnnotationInstance> $getAnnotation(::mce::UUID const& id);

    MCNAPI ::WeakRef<::Editor::Annotations::AnnotationInstance>
    $acquireLeasedInstance(::mce::UUID const& id, ::ActorUniqueID ownerId);

    MCNAPI void $releaseLeasedInstance(::mce::UUID const& id, ::ActorUniqueID ownerId);

    MCNAPI void $releaseLeasedInstances(::ActorUniqueID ownerId);

    MCNAPI ::WeakRef<::Editor::Annotations::AnnotationMetadata> $getMetadata(::mce::UUID const& id) const;

    MCNAPI ::std::vector<::WeakRef<::Editor::Annotations::AnnotationMetadata>> $getAllMetadata() const;

    MCNAPI ::std::vector<::WeakRef<::Editor::Annotations::AnnotationMetadata>>
    $getMetadataInChunkRange(::std::unordered_set<::ChunkPos> const& chunks, ::DimensionType const& dimension) const;

    MCNAPI ::Bedrock::PubSub::Subscription
    $subscribeToChanges(::std::function<void(::Editor::Annotations::AnnotationChangeEvent const&)> callback);

    MCNAPI void $onUpdate(::Editor::Annotations::AnnotationMetadata const& metadata);

    MCNAPI void $onUpdate(::Editor::Annotations::AnnotationInstance const& instance);

    MCNAPI ::std::optional<::HashedString>
    $validateName(::Editor::Annotations::AnnotationMetadata const& metadata, ::HashedString const& name);


    // NOLINTEND
};

} // namespace Editor::Services
