#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/editor/InteractiveToolError.h"
#include "mc/editor/Task.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::BlockUtils::FloodLevel { struct FloodResult; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
namespace Editor::InteractiveTools { struct FloodCommitResult; }
namespace Editor::InteractiveTools { struct FloodEntry; }
namespace Editor::InteractiveTools { struct FloodOperationMetadata; }
namespace Editor::InteractiveTools { struct ResultMetadata; }
namespace cereal { struct ReflectionCtx; }
namespace Editor::InteractiveTools { struct PreparedVolumeResultStream; }
namespace Editor::Services { class ClientVolumeRenderItem; }
// clang-format on

namespace Editor::InteractiveTools {
// functions
// NOLINTBEGIN
MCNAPI void bindExtrudeTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindFloodResultTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindFloodTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindSmartFillTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindTypes(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_C
MCNAPI ::std::string_view getErrorCanonicalString(::Editor::InteractiveTools::InteractiveToolError error);

MCNAPI ::std::function<void(::std::vector<::BlockPos> const&)> makeIncrementalPreviewPublisher(
    ::WeakRef<::Editor::RelativeVolumeListBlockVolume> const&    previewVolume,
    ::WeakRef<::Editor::Services::ClientVolumeRenderItem> const& renderItem,
    ::std::weak_ptr<bool>                                        lifetimeGuard
);
#endif

MCNAPI bool matchesAuthoritativeFloodResult(
    ::Editor::BlockUtils::FloodLevel::FloodResult const& authoritative,
    ::Editor::InteractiveTools::FloodCommitResult const& committed
);

#ifdef LL_PLAT_C
MCNAPI ::Editor::Task<void, ::Editor::CoroutineStatus> prepareFloodEntryResultStream(
    ::Editor::Coroutine::CoroutineTaskContext&                                context,
    ::std::vector<::Editor::InteractiveTools::FloodEntry>                     entries,
    ::Editor::InteractiveTools::ResultMetadata                                metadata,
    ::std::string                                                             resultName,
    ::std::shared_ptr<::Editor::InteractiveTools::PreparedVolumeResultStream> output
);

MCNAPI ::Editor::Task<void, ::Editor::CoroutineStatus> prepareVolumeResultStream(
    ::Editor::Coroutine::CoroutineTaskContext&                                context,
    ::Editor::RelativeVolumeListBlockVolume                                   volume,
    ::Editor::InteractiveTools::ResultMetadata                                metadata,
    ::std::string                                                             resultName,
    ::std::shared_ptr<::Editor::InteractiveTools::PreparedVolumeResultStream> output
);
#endif

MCNAPI ::Editor::InteractiveTools::InteractiveToolError
validateFloodOperationMetadata(::Editor::InteractiveTools::FloodOperationMetadata const& metadata);
// NOLINTEND

} // namespace Editor::InteractiveTools
