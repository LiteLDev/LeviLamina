#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/renoir/RendererBackend.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderGroup; }
// clang-format on

namespace OreUI {

class IRenderingBackend : public ::renoir::RendererBackend {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeStaticResources(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&) = 0;

    virtual void onAppPreSuspended() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
