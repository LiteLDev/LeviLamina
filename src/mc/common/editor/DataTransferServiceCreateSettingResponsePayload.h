#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceCreateSettingResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceCreateSettingResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3d04fc;
    ::ll::UntypedStorage<8, 32> mUnk6801a5;
    ::ll::UntypedStorage<8, 32> mUnkf1aa37;
    ::ll::UntypedStorage<8, 32> mUnk5b2bba;
    ::ll::UntypedStorage<1, 1>  mUnkb5fa8e;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceCreateSettingResponsePayload(DataTransferServiceCreateSettingResponsePayload const&);
    DataTransferServiceCreateSettingResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~DataTransferServiceCreateSettingResponsePayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~DataTransferServiceCreateSettingResponsePayload() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::DataTransferServiceCreateSettingResponsePayload&
    operator=(::Editor::Network::DataTransferServiceCreateSettingResponsePayload&&);

    MCNAPI ::Editor::Network::DataTransferServiceCreateSettingResponsePayload&
    operator=(::Editor::Network::DataTransferServiceCreateSettingResponsePayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
