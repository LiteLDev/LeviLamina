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
    virtual ~RakNetRandomSync() = default;

    virtual void SerializeConstruction(::RakNet::BitStream*);

    virtual bool DeserializeConstruction(::RakNet::BitStream*);

    virtual void Serialize(::RakNet::BitStream*);

    virtual void Deserialize(::RakNet::BitStream*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
