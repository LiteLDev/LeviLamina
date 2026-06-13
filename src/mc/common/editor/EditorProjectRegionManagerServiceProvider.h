#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct Bounds;
struct DimensionType;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ProjectRegion; }
namespace Editor { struct ProjectRegionConfig; }
namespace Editor { struct ProjectRegionManagerChunkProcessingState; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorProjectRegionManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorProjectRegionManagerServiceProvider() = default;

    virtual ::WeakRef<::Editor::ProjectRegion> createRegion(
        ::Dimension&                         dimension,
        ::Editor::ProjectRegionConfig const& config,
        ::std::optional<uint64>              ownerId
    ) = 0;

    virtual ::std::vector<::WeakRef<::Editor::ProjectRegion>> getAllRegions() const = 0;

    virtual ::Scripting::Result_deprecated<void> destroyRegion(::mce::UUID const& id) = 0;

    virtual ::WeakRef<::Editor::ProjectRegion> getRegion(::mce::UUID const& id) const = 0;

    virtual ::Scripting::Result_deprecated<void> regenerateRegion(
        ::DimensionType                dimensionType,
        ::std::vector<::Bounds> const& boundsList,
        bool                           regenerateWorldWithExcludedBounds
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    pruneRegion(::DimensionType dimensionType, ::std::vector<::Bounds> const& boundsList) = 0;

    virtual bool isProcessingChunks() const = 0;

    virtual ::std::optional<::Editor::ProjectRegionManagerChunkProcessingState> getChunkProcessingState() const = 0;

    virtual ::Bedrock::PubSub::Subscription registerChunkProcessingChangeListener(
        ::std::function<void(::Scripting::Result_deprecated<::Editor::ProjectRegionManagerChunkProcessingState> const&)>
            callback
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
