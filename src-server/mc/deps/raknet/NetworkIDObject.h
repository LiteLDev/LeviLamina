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
    ::ll::UntypedStorage<8, 8> mUnk4d7ab7;
    ::ll::UntypedStorage<8, 8> mUnk85a4bf;
    ::ll::UntypedStorage<8, 8> mUnk1b8045;
    ::ll::UntypedStorage<8, 8> mUnk84044f;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkIDObject& operator=(NetworkIDObject const&);
    NetworkIDObject(NetworkIDObject const&);
    NetworkIDObject();

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

}
