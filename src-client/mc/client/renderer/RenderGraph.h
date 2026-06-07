#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ScreenContext;
struct FrameRenderObject;
namespace mce { class RenderStage; }
// clang-format on

namespace mce {

class RenderGraph {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7d84d1;
    ::ll::UntypedStorage<8, 64> mUnk794996;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderGraph& operator=(RenderGraph const&);
    RenderGraph(RenderGraph const&);
    RenderGraph();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    addRenderStage(::EyeRenderingModeBit eyeRenderingModeBits, ::std::unique_ptr<::mce::RenderStage> renderStage);

    MCNAPI void addScreenToRenderGraph(::AbstractScene& abstractScreen, ::SubClientId const& subClientId);

    MCNAPI void cleanupRenderScreens();

    MCNAPI void cleanupRenderStage();

    MCNAPI void clearRenderGraph();

    MCNAPI void preRenderUpdate(::ScreenContext& screenContext);

    MCNAPI void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCNAPI ~RenderGraph();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
