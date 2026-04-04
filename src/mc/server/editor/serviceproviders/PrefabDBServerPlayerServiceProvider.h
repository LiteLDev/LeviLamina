#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/WeakRef.h"
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
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace Editor::Prefabs { class VisiblePrefabInstance; }
namespace Editor::Prefabs { struct PrefabDBInstanceChangeEvent; }
namespace Editor::Prefabs { struct PrefabDBTemplateChangeEvent; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBServerPlayerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBServerPlayerServiceProvider() = default;

    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    getInstancesInChunk(::DimensionType const& dimension, ::ChunkPos const& chunkPos) const = 0;

    virtual ::std::optional<::Editor::Prefabs::VisiblePrefabInstance> generateVisibleInstanceDataFromPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance const> instanceRef
    ) const = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> getTemplate(::mce::UUID const& templateId) const = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::mce::UUID const& templateId) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::std::string_view name) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> createPrefabTemplate(
        ::std::string const&                name,
        ::std::string const&                displayName,
        ::std::string const&                description,
        ::std::string const&                notes,
        ::std::vector<::std::string> const& tags
    ) = 0;

    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBTemplate const>> getTemplates() const = 0;

    virtual bool deleteTemplate(::mce::UUID const& templateId) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> cloneTemplate(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> templateToCopyRef,
        ::std::string const&                                 newName,
        ::std::optional<::std::string> const&                optNewDisplayName
    ) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> createPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> prefabTemplateRef,
        ::DimensionType const&                         dimension,
        ::Vec3 const&                                  position,
        ::Mirror                                       mirror,
        ::Rotation                                     rotation
    ) = 0;

    virtual void deletePrefabInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef) = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToTemplateChanges(
        ::std::function<void(::Editor::Prefabs::PrefabDBTemplateChangeEvent const&)> callback
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToInstanceChanges(
        ::std::function<void(::Editor::Prefabs::PrefabDBInstanceChangeEvent const&)> callback
    ) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>
    getInstance(::DimensionType const& dimension, ::mce::UUID const& instanceId) = 0;

    virtual void bakePrefabInstanceToWorld(
        ::BlockSource&                                       region,
        ::BlockPalette const&                                globalBlockPalette,
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef,
        ::std::optional<::std::string_view>                  optionalCapturePath
    ) = 0;

    virtual void bake(
        ::WeakEntityRef                           weakPlayerRef,
        ::std::function<void(bool)>               completionCallback,
        ::std::function<void(::std::string_view)> logger
    ) = 0;

    virtual void unbake(
        ::WeakEntityRef                           weakPlayerRef,
        ::std::function<void(bool)>               completionCallback,
        ::std::function<void(::std::string_view)> logger
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Prefabs
