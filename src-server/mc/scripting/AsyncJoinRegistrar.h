#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/scripting/IAsyncJoinRegistrar.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class ConnectionRequest;
class Minecraft;
class NetworkIdentifier;
class SubClientConnectionRequest;
// clang-format on

class AsyncJoinRegistrar : public ::IAsyncJoinRegistrar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk13f0d8;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncJoinRegistrar(AsyncJoinRegistrar const&);
    AsyncJoinRegistrar();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~AsyncJoinRegistrar() /*override*/ = default;

    // vIndex: 0
    virtual ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> registerAsyncJoinCallback(::brstd::move_only_function<void(::NetworkIdentifier const&, ::std::variant<::std::reference_wrapper<::ConnectionRequest const>, ::std::reference_wrapper<::SubClientConnectionRequest const>> const&, ::SubClientId, ::std::shared_ptr<::AsyncVerdictPromise>)> joinCallback) /*override*/;

    // vIndex: 1
    virtual bool isPaused() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncJoinRegistrar(::Minecraft& minecraft);

    MCNAPI ::AsyncJoinRegistrar& operator=(::AsyncJoinRegistrar const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Minecraft& minecraft);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> $registerAsyncJoinCallback(::brstd::move_only_function<void(::NetworkIdentifier const&, ::std::variant<::std::reference_wrapper<::ConnectionRequest const>, ::std::reference_wrapper<::SubClientConnectionRequest const>> const&, ::SubClientId, ::std::shared_ptr<::AsyncVerdictPromise>)> joinCallback);

    MCNAPI bool $isPaused();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
