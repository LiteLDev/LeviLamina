#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/p2p/NetworkID.h"
#include "mc/deps/nether_net/realms/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace NetherNet {

struct NetworkID
: public ::std::variant<::std::monostate, ::NetherNet::P2P::NetworkID, ::NetherNet::Realms::NetworkID> {
public:
    // prevent constructor by default
    NetworkID();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NetworkID(::std::string const& str);

    MCAPI explicit NetworkID(::Json::Value const& value);

    MCAPI bool isValid() const;

    MCAPI ::std::string toCorrelationId() const;

#ifdef LL_PLAT_C
    MCAPI ::Json::Value toJson() const;
#endif

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& str);

    MCAPI void* $ctor(::Json::Value const& value);
    // NOLINTEND
};

} // namespace NetherNet
