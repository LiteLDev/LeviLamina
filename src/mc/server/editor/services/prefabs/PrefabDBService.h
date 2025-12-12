#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/server/editor/serviceproviders/PrefabDBServerPlayerServiceProvider.h"
#include "mc/server/editor/serviceproviders/PrefabDBServiceProvider.h"

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
    virtual ~PrefabDBService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    getInstancesInChunk(::DimensionType const&, ::ChunkPos const&) const /*override*/;

    virtual ::std::optional<::Editor::Prefabs::VisiblePrefabInstance>
        fetchVisibleInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance const>) const /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> getTemplate(::mce::UUID const&) const /*override*/;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::mce::UUID const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
