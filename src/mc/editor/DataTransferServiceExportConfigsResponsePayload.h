#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceExportConfigsResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceExportConfigsResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfcd948;
    ::ll::UntypedStorage<1, 1>  mUnkb32772;
    ::ll::UntypedStorage<8, 32> mUnk90d60c;
    ::ll::UntypedStorage<8, 40> mUnk7cb0a4;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DataTransferServiceExportConfigsResponsePayload& operator=(DataTransferServiceExportConfigsResponsePayload const&);
    DataTransferServiceExportConfigsResponsePayload(DataTransferServiceExportConfigsResponsePayload const&);
    DataTransferServiceExportConfigsResponsePayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DataTransferServiceExportConfigsResponsePayload(DataTransferServiceExportConfigsResponsePayload const&);
    DataTransferServiceExportConfigsResponsePayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Editor::Network::DataTransferServiceExportConfigsResponsePayload&
    operator=(::Editor::Network::DataTransferServiceExportConfigsResponsePayload const&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
