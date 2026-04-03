#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceDeferredExperimentEnabledPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceDeferredExperimentEnabledPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk726f68;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceDeferredExperimentEnabledPayload&
    operator=(DataTransferServiceDeferredExperimentEnabledPayload const&);
    DataTransferServiceDeferredExperimentEnabledPayload(DataTransferServiceDeferredExperimentEnabledPayload const&);
    DataTransferServiceDeferredExperimentEnabledPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataTransferServiceDeferredExperimentEnabledPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
