#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class DirectoryDeltaTransfer : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 512> mUnka4d623;
    ::ll::UntypedStorage<8, 8>   mUnked563f;
    ::ll::UntypedStorage<8, 8>   mUnk3c6231;
    ::ll::UntypedStorage<4, 4>   mUnke176ed;
    ::ll::UntypedStorage<1, 1>   mUnk72cd45;
    ::ll::UntypedStorage<8, 8>   mUnke3e796;
    ::ll::UntypedStorage<4, 4>   mUnkd7b139;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryDeltaTransfer& operator=(DirectoryDeltaTransfer const&);
    DirectoryDeltaTransfer(DirectoryDeltaTransfer const&);
    DirectoryDeltaTransfer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DirectoryDeltaTransfer() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
