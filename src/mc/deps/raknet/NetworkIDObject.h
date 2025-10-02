#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class NetworkIDManager; }
// clang-format on

namespace RakNet {

class NetworkIDObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                      networkID;
    ::ll::TypedStorage<8, 8, ::RakNet::NetworkIDManager*> networkIDManager;
    ::ll::TypedStorage<8, 8, void*>                       parent;
    ::ll::TypedStorage<8, 8, ::RakNet::NetworkIDObject*>  nextInstanceForNetworkIDManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkIDObject() = default;

    // vIndex: 1
    virtual void SetNetworkIDManager(::RakNet::NetworkIDManager*);

    // vIndex: 2
    virtual ::RakNet::NetworkIDManager* GetNetworkIDManager() const;

    // vIndex: 3
    virtual uint64 GetNetworkID();

    // vIndex: 4
    virtual void SetNetworkID(uint64);

    // vIndex: 5
    virtual void SetParent(void*);

    // vIndex: 6
    virtual void* GetParent() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
