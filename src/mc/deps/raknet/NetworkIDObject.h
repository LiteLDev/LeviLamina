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
    virtual ~NetworkIDObject() = default;

    virtual void SetNetworkIDManager(::RakNet::NetworkIDManager*);

    virtual ::RakNet::NetworkIDManager* GetNetworkIDManager() const;

    virtual uint64 GetNetworkID();

    virtual void SetNetworkID(uint64);

    virtual void SetParent(void*);

    virtual void* GetParent() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
