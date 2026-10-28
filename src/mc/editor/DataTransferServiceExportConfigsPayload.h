#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceExportConfigsPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceExportConfigsPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf0a4ba;
    ::ll::UntypedStorage<8, 32> mUnke688d8;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceExportConfigsPayload& operator=(DataTransferServiceExportConfigsPayload const&);
    DataTransferServiceExportConfigsPayload(DataTransferServiceExportConfigsPayload const&);
    DataTransferServiceExportConfigsPayload();

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
