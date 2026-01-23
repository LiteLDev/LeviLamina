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
    getInstancesInChunk(::DimensionType const&, ::ChunkPos const&) const = 0;

    virtual ::std::optional<::Editor::Prefabs::VisiblePrefabInstance> generateVisibleInstanceDataFromPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance const>
    ) const = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> getTemplate(::mce::UUID const&) const = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::mce::UUID const&) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::std::string_view) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> createPrefabTemplate(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::vector<::std::string> const&
    ) = 0;

    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBTemplate const>> getTemplates() const = 0;

    virtual bool deleteTemplate(::mce::UUID const&) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> cloneTemplate(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const>,
        ::std::string const&,
        ::std::optional<::std::string> const&
    ) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> createPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate>,
        ::DimensionType const&,
        ::Vec3 const&,
        ::Mirror,
        ::Rotation
    ) = 0;

    virtual void deletePrefabInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>) = 0;

    virtual ::Bedrock::PubSub::Subscription
        subscribeToTemplateChanges(::std::function<void(::Editor::Prefabs::PrefabDBTemplateChangeEvent const&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription
        subscribeToInstanceChanges(::std::function<void(::Editor::Prefabs::PrefabDBInstanceChangeEvent const&)>) = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>
    getInstance(::DimensionType const&, ::mce::UUID const&) = 0;

    virtual void bakePrefabInstanceToWorld(
        ::BlockSource&,
        ::BlockPalette const&,
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>,
        ::std::optional<::std::string_view>
    ) = 0;

    virtual void bake(::WeakEntityRef, ::std::function<void(bool)>, ::std::function<void(::std::string_view)>) = 0;

    virtual void unbake(::WeakEntityRef, ::std::function<void(bool)>, ::std::function<void(::std::string_view)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Prefabs
