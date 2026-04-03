#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/renoir/RendererBackend.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct ShaderGroup; }
// clang-format on

namespace OreUI {

class IRenderingBackend : public ::renoir::RendererBackend {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeStaticResources(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&) = 0;

    virtual void onAppPreSuspended() = 0;

    virtual ~IRenderingBackend() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
