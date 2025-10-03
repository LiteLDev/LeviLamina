#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakNetRandom.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

namespace RakNet {

class RakNetRandomSync {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<uint>> usedValues;
    ::ll::TypedStorage<4, 4, uint>                           seed;
    ::ll::TypedStorage<4, 4, uint>                           callCount;
    ::ll::TypedStorage<4, 4, uint>                           usedValueBufferCount;
    ::ll::TypedStorage<8, 2520, ::RakNet::RakNetRandom>      rnr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakNetRandomSync() = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
