#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/p2p/NetworkID.h"
#include "mc/deps/nether_net/player_messaging/NetworkID.h"
#include "mc/deps/nether_net/realms/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace NetherNet {

struct NetworkID : public ::std::variant<
                       ::std::monostate,
                       ::NetherNet::P2P::NetworkID,
                       ::NetherNet::Realms::NetworkID,
                       ::NetherNet::PlayerMessaging::NetworkID> {
public:
    // prevent constructor by default
    NetworkID();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkID(::std::string const& str);

    MCNAPI explicit NetworkID(::Json::Value const& value);

    MCNAPI uint64 getHash() const;

    MCNAPI bool isValid() const;

    MCNAPI ::std::string toString() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& str);

    MCNAPI void* $ctor(::Json::Value const& value);
    // NOLINTEND
};

} // namespace NetherNet
