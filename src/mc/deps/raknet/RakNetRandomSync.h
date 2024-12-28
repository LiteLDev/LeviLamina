#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

namespace RakNet {

class RakNetRandomSync {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>   mUnk29fa5e;
    ::ll::UntypedStorage<4, 4>    mUnk8bb28b;
    ::ll::UntypedStorage<4, 4>    mUnk5c3494;
    ::ll::UntypedStorage<4, 4>    mUnk9c386f;
    ::ll::UntypedStorage<8, 2520> mUnk804ec3;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetRandomSync& operator=(RakNetRandomSync const&);
    RakNetRandomSync(RakNetRandomSync const&);
    RakNetRandomSync();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakNetRandomSync();

    // vIndex: 1
    virtual void SerializeConstruction(::RakNet::BitStream*);

    // vIndex: 2
    virtual bool DeserializeConstruction(::RakNet::BitStream*);

    // vIndex: 3
    virtual void Serialize(::RakNet::BitStream*);

    // vIndex: 4
    virtual void Deserialize(::RakNet::BitStream*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $SerializeConstruction(::RakNet::BitStream*);

    MCAPI bool $DeserializeConstruction(::RakNet::BitStream*);

    MCAPI void $Serialize(::RakNet::BitStream*);

    MCAPI void $Deserialize(::RakNet::BitStream*);
    // NOLINTEND
};

} // namespace RakNet
