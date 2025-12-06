#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace mce {

class RendererDebugLayerOutputManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // RendererDebugLayerOutputManager inner types declare
    // clang-format off
    struct ErrorState;
    // clang-format on

    // RendererDebugLayerOutputManager inner types define
    struct ErrorState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf99ad1;
        // NOLINTEND

    public:
        // prevent constructor by default
        ErrorState& operator=(ErrorState const&);
        ErrorState(ErrorState const&);
        ErrorState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke4a53e;
    ::ll::UntypedStorage<8, 40> mUnkf7b7db;
    ::ll::UntypedStorage<2, 2>  mUnkc57680;
    // NOLINTEND

public:
    // prevent constructor by default
    RendererDebugLayerOutputManager& operator=(RendererDebugLayerOutputManager const&);
    RendererDebugLayerOutputManager(RendererDebugLayerOutputManager const&);
    RendererDebugLayerOutputManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RendererDebugLayerOutputManager() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
