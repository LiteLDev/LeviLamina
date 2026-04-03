#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct Bounds;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { struct ProjectRegionManagerChunkProcessingState; }
// clang-format on

namespace Editor::Services {

class EditorProjectRegionManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorProjectRegionManagerServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void>
    regenerateRegion(::DimensionType, ::std::vector<::Bounds> const&, bool) = 0;

    virtual ::Scripting::Result_deprecated<void> pruneRegion(::DimensionType, ::std::vector<::Bounds> const&) = 0;

    virtual bool isProcessingChunks() const = 0;

    virtual ::std::optional<::Editor::ProjectRegionManagerChunkProcessingState> getChunkProcessingState() const = 0;

    virtual ::Bedrock::PubSub::Subscription registerChunkProcessingChangeListener(
        ::std::function<void(::Scripting::Result_deprecated<::Editor::ProjectRegionManagerChunkProcessingState> const&)>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
