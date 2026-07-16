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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DataTransferServiceCreateSettingResponsePayload& operator=(DataTransferServiceCreateSettingResponsePayload const&);
    DataTransferServiceCreateSettingResponsePayload(DataTransferServiceCreateSettingResponsePayload const&);
    DataTransferServiceCreateSettingResponsePayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DataTransferServiceCreateSettingResponsePayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI DataTransferServiceCreateSettingResponsePayload(
        ::Editor::Network::DataTransferServiceCreateSettingResponsePayload const&
    );

    MCNAPI ::Editor::Network::DataTransferServiceCreateSettingResponsePayload&
    operator=(::Editor::Network::DataTransferServiceCreateSettingResponsePayload&&);

    MCNAPI ::Editor::Network::DataTransferServiceCreateSettingResponsePayload&
    operator=(::Editor::Network::DataTransferServiceCreateSettingResponsePayload const&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Editor::Network::DataTransferServiceCreateSettingResponsePayload const&);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
