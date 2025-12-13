#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::DataStore { struct PayloadDescription; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataStoreEventPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::DataStoreEventPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk798e01;
    ::ll::UntypedStorage<4, 4>   mUnk85f380;
    ::ll::UntypedStorage<8, 40>  mUnk450d39;
    ::ll::UntypedStorage<8, 120> mUnkc59689;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreEventPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreEventPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStoreEventPayload(::Editor::Network::DataStoreEventPayload const&);

    MCNAPI DataStoreEventPayload(
        ::HashedString const&                          dataTag,
        ::Editor::DataStore::EventType                 eventType,
        ::std::optional<::std::string>                 payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

    MCNAPI ::Editor::Network::DataStoreEventPayload& operator=(::Editor::Network::DataStoreEventPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::DataStoreEventPayload const&);

    MCNAPI void* $ctor(
        ::HashedString const&                          dataTag,
        ::Editor::DataStore::EventType                 eventType,
        ::std::optional<::std::string>                 payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );
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
