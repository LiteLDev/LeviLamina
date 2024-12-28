#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/utils/ErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct View; }
// clang-format on

namespace NetherNet {

class AesContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk967e22;
    ::ll::UntypedStorage<8, 24> mUnk5eff5e;
    ::ll::UntypedStorage<8, 24> mUnk4b4b42;
    // NOLINTEND

public:
    // prevent constructor by default
    AesContext& operator=(AesContext const&);
    AesContext(AesContext const&);
    AesContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::NetherNet::ErrorOr<::NetherNet::View, ::std::error_code> Open(::NetherNet::View envelope);

    MCAPI ::NetherNet::ErrorOr<::NetherNet::View, ::std::error_code> Seal(::NetherNet::View plaintext);
    // NOLINTEND
};

} // namespace NetherNet
