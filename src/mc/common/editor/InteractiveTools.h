#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Task.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
namespace Editor::InteractiveTools { struct ResultMetadata; }
namespace cereal { struct ReflectionCtx; }
namespace Editor::InteractiveTools { struct PreparedVolumeResultStream; }
namespace Editor::Services { class ClientVolumeRenderItem; }
// clang-format on

namespace Editor::InteractiveTools {
// functions
// NOLINTBEGIN
MCNAPI void bindExtrudeTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindSmartFillTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindTypes(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_C
MCNAPI ::std::function<void(::std::vector<::BlockPos> const&)> makeIncrementalPreviewPublisher(
    ::WeakRef<::Editor::RelativeVolumeListBlockVolume> const&    previewVolume,
    ::WeakRef<::Editor::Services::ClientVolumeRenderItem> const& renderItem,
    ::std::weak_ptr<bool>                                        lifetimeGuard
);

MCNAPI ::Editor::Task<void, ::Editor::CoroutineStatus> prepareVolumeResultStream(
    ::Editor::Coroutine::CoroutineTaskContext&                                context,
    ::Editor::RelativeVolumeListBlockVolume                                   volume,
    ::Editor::InteractiveTools::ResultMetadata                                metadata,
    ::std::string                                                             resultName,
    ::std::shared_ptr<::Editor::InteractiveTools::PreparedVolumeResultStream> output
);
#endif
// NOLINTEND

} // namespace Editor::InteractiveTools
