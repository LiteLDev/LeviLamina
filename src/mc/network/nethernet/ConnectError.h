#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/nethernet/ESessionError.h"

namespace NetherNet {

class ConnectError {
public:
    // prevent constructor by default
    ConnectError& operator=(ConnectError const&);
    ConnectError(ConnectError const&);
    ConnectError();

public:
    // NOLINTBEGIN
    // symbol: ?ToString@ConnectError@NetherNet@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ?Create@ConnectError@NetherNet@@SA?AV12@_KW4ESessionError@2@@Z
    MCAPI static class NetherNet::ConnectError Create(uint64, ::NetherNet::ESessionError);

    // symbol:
    // ?TryParse@ConnectError@NetherNet@@SA?AV?$optional@VConnectError@NetherNet@@@std@@AEBV?$array@V?$basic_string_view@DU?$char_traits@D@std@@@std@@$02@4@@Z
    MCAPI static std::optional<class NetherNet::ConnectError> TryParse(std::array<std::string_view, 3> const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?kIdentifier@ConnectError@NetherNet@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const kIdentifier;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $kIdentifier() { return kIdentifier; }

    // NOLINTEND
};

}; // namespace NetherNet
