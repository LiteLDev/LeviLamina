#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PrefabSource.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/server/editor/serviceproviders/PrefabDBServerPlayerServiceProvider.h"
#include "mc/server/editor/serviceproviders/PrefabDBServiceProvider.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class BlockSource;
class ChunkPos;
class Dimension;
class Vec3;
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class EditorManagerServer; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace Editor::Prefabs { class VisiblePrefabInstance; }
namespace Editor::Prefabs { struct PrefabDBInstanceChangeEvent; }
namespace Editor::Prefabs { struct PrefabDBTemplateChangeEvent; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class PrefabDBService : public ::Editor::Services::IEditorService,
                        public ::Editor::Prefabs::PrefabDBServiceProvider,
                        public ::Editor::Prefabs::PrefabDBServerPlayerServiceProvider,
                        public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3e21f6;
    ::ll::UntypedStorage<8, 32> mUnk26e0d3;
    ::ll::UntypedStorage<8, 64> mUnk8132d3;
    ::ll::UntypedStorage<8, 64> mUnk50d9ea;
    ::ll::UntypedStorage<8, 16> mUnkaab249;
    ::ll::UntypedStorage<8, 16> mUnk156c5f;
    ::ll::UntypedStorage<8, 48> mUnk7e0a09;
    ::ll::UntypedStorage<8, 48> mUnk811b7b;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBService& operator=(PrefabDBService const&);
    PrefabDBService(PrefabDBService const&);
    PrefabDBService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    getInstancesInChunk(::DimensionType const& dimension, ::ChunkPos const& chunkPos) const /*override*/;

    virtual ::std::optional<::Editor::Prefabs::VisiblePrefabInstance> generateVisibleInstanceDataFromPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance const> instanceRef
    ) const /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> getTemplate(::mce::UUID const& templateId) const
        /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::mce::UUID const& templateId) /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::std::string_view name) /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> createPrefabTemplate(
        ::std::string const&                name,
        ::std::string const&                displayName,
        ::std::string const&                description,
        ::std::string const&                notes,
        ::std::vector<::std::string> const& tags
    ) /*override*/;

    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBTemplate const>> getTemplates() const /*override*/;

    virtual bool deleteTemplate(::mce::UUID const& templateId) /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> cloneTemplate(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> templateToCopyRef,
        ::std::string const&                                 newName,
        ::std::optional<::std::string> const&                optNewDisplayName
    ) /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> createPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> prefabTemplateRef,
        ::DimensionType const&                         dimension,
        ::Vec3 const&                                  position,
        ::Mirror                                       mirror,
        ::Rotation                                     rotation
    ) /*override*/;

    virtual void deletePrefabInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef) /*override*/;

    virtual ::Bedrock::PubSub::Subscription subscribeToInstanceChanges(
        ::std::function<void(::Editor::Prefabs::PrefabDBInstanceChangeEvent const&)> callback
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription subscribeToTemplateChanges(
        ::std::function<void(::Editor::Prefabs::PrefabDBTemplateChangeEvent const&)> callback
    ) /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>
    getInstance(::DimensionType const& dimension, ::mce::UUID const& instanceId) /*override*/;

    virtual void bakePrefabInstanceToWorld(
        ::BlockSource&                                       region,
        ::BlockPalette const&                                globalBlockPalette,
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef,
        ::std::optional<::std::string_view>                  optionalCapturePath
    ) /*override*/;

    virtual void bake(
        ::WeakEntityRef                           weakPlayerRef,
        ::std::function<void(bool)>               completionCallback,
        ::std::function<void(::std::string_view)> logger
    ) /*override*/;

    virtual void unbake(
        ::WeakEntityRef                           weakPlayerRef,
        ::std::function<void(bool)>               completionCallback,
        ::std::function<void(::std::string_view)> logger
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PrefabDBService(::Editor::ServiceProviderCollection& serviceProviders);

    MCNAPI ::StackRefResult<::Editor::Prefabs::PrefabDBPrefabInstance> _createPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> prefabTemplateRef,
        ::DimensionType const&                         dimension,
        ::Vec3 const&                                  position,
        ::Mirror                                       mirror,
        ::Rotation                                     rotation
    );

    MCNAPI ::StackRefResult<::Editor::Prefabs::PrefabDBTemplate> _createPrefabTemplate(
        ::std::string const&                   name,
        ::std::string const&                   displayName,
        ::std::string const&                   description,
        ::std::string const&                   notes,
        ::std::vector<::std::string> const&    tags,
        ::Editor::Prefabs::PrefabSource const& source
    );

    MCNAPI bool
    _loadPrefabDBInstances(::Core::PathBuffer<::std::string> const& dbPath, ::std::vector<::std::string>& errorLog);

    MCNAPI bool _loadPrefabDBTemplates(
        ::Editor::Prefabs::PrefabSource          source,
        ::Core::PathBuffer<::std::string> const& dbPath,
        ::std::vector<::std::string>&            errorLog
    );

    MCNAPI void _onTickEvent(::Editor::EditorManagerServer&);

    MCNAPI void
    _propagateDirtyTemplateChangesToInstances(::WeakRef<::Editor::Prefabs::PrefabDBTemplate> templateWeakRef);

    MCNAPI void _validateDatabase(::std::vector<::std::string>& outErrors);

    MCNAPI void _writePrefabInstanceToStorage(
        ::Core::PathBuffer<::std::string> const&         dbPath,
        ::Editor::Prefabs::PrefabDBPrefabInstance const& prefabInstance,
        ::std::vector<::std::string>&                    outErrors
    );

    MCNAPI void _writePrefabTemplateToStorage(
        ::Core::PathBuffer<::std::string> const&   dbPath,
        ::Editor::Prefabs::PrefabDBTemplate const& prefabTemplate,
        ::std::vector<::std::string>&              outErrors
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    $getInstancesInChunk(::DimensionType const& dimension, ::ChunkPos const& chunkPos) const;

    MCNAPI ::std::optional<::Editor::Prefabs::VisiblePrefabInstance> $generateVisibleInstanceDataFromPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance const> instanceRef
    ) const;

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> $getTemplate(::mce::UUID const& templateId) const;

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> $getTemplate(::mce::UUID const& templateId);

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> $getTemplate(::std::string_view name);

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> $createPrefabTemplate(
        ::std::string const&                name,
        ::std::string const&                displayName,
        ::std::string const&                description,
        ::std::string const&                notes,
        ::std::vector<::std::string> const& tags
    );

    MCNAPI ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBTemplate const>> $getTemplates() const;

    MCNAPI bool $deleteTemplate(::mce::UUID const& templateId);

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> $cloneTemplate(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> templateToCopyRef,
        ::std::string const&                                 newName,
        ::std::optional<::std::string> const&                optNewDisplayName
    );

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> $createPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> prefabTemplateRef,
        ::DimensionType const&                         dimension,
        ::Vec3 const&                                  position,
        ::Mirror                                       mirror,
        ::Rotation                                     rotation
    );

    MCNAPI void $deletePrefabInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef);

    MCNAPI ::Bedrock::PubSub::Subscription
    $subscribeToInstanceChanges(::std::function<void(::Editor::Prefabs::PrefabDBInstanceChangeEvent const&)> callback);

    MCNAPI ::Bedrock::PubSub::Subscription
    $subscribeToTemplateChanges(::std::function<void(::Editor::Prefabs::PrefabDBTemplateChangeEvent const&)> callback);

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>
    $getInstance(::DimensionType const& dimension, ::mce::UUID const& instanceId);

    MCNAPI void $bakePrefabInstanceToWorld(
        ::BlockSource&                                       region,
        ::BlockPalette const&                                globalBlockPalette,
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef,
        ::std::optional<::std::string_view>                  optionalCapturePath
    );

    MCNAPI void $bake(
        ::WeakEntityRef                           weakPlayerRef,
        ::std::function<void(bool)>               completionCallback,
        ::std::function<void(::std::string_view)> logger
    );

    MCNAPI void $unbake(
        ::WeakEntityRef                           weakPlayerRef,
        ::std::function<void(bool)>               completionCallback,
        ::std::function<void(::std::string_view)> logger
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPrefabDBServiceProvider();

    MCNAPI static void** $vftableForPrefabDBServerPlayerServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
