#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceRegisterCollectionPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceRegisterCollectionPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke5c60e;
    ::ll::UntypedStorage<8, 32> mUnkaab0d6;
    ::ll::UntypedStorage<8, 32> mUnk711ab7;
    ::ll::UntypedStorage<1, 1>  mUnk128784;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRegisterCollectionPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataTransferServiceRegisterCollectionPayload(
        ::Editor::Network::DataTransferServiceRegisterCollectionPayload const&
    );

#ifdef LL_PLAT_C
    MCNAPI DataTransferServiceRegisterCollectionPayload(
        ::std::string const& collectionUniqueIdentifier,
        ::std::string const& collectionNameStringId,
        ::std::string const& jsonSchema,
        bool                 hasPerBiomeConfig
    );
#endif

    MCNAPI ::Editor::Network::DataTransferServiceRegisterCollectionPayload&
    operator=(::Editor::Network::DataTransferServiceRegisterCollectionPayload&&);

    MCNAPI ::Editor::Network::DataTransferServiceRegisterCollectionPayload&
    operator=(::Editor::Network::DataTransferServiceRegisterCollectionPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::DataTransferServiceRegisterCollectionPayload const&);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::string const& collectionUniqueIdentifier,
        ::std::string const& collectionNameStringId,
        ::std::string const& jsonSchema,
        bool                 hasPerBiomeConfig
    );
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
