#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/PrefabDBServerPlayerServiceProvider.h"
#include "mc/editor/PrefabDBServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace Editor::Prefabs { class VisiblePrefabInstance; }
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
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBService& operator=(PrefabDBService const&);
    PrefabDBService(PrefabDBService const&);
    PrefabDBService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PrefabDBService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    getInstancesInChunk(::DimensionType const&, ::ChunkPos const&) const /*override*/;

    // vIndex: 2
    virtual ::std::optional<::Editor::Prefabs::VisiblePrefabInstance>
        fetchVisibleInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance const>) const /*override*/;

    // vIndex: 2
    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> getTemplate(::mce::UUID const&) const /*override*/;

    // vIndex: 1
    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::mce::UUID const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
