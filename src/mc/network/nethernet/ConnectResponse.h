#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class ConnectResponse {
public:
    // prevent constructor by default
    ConnectResponse& operator=(ConnectResponse const&);
    ConnectResponse(ConnectResponse const&);
    ConnectResponse();

public:
    // NOLINTBEGIN
    // symbol:
    // ?GetSdp@ConnectResponse@NetherNet@@QEBA?AV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::SessionDescriptionInterface> GetSdp() const;

    // symbol:
    // ?ToString@ConnectResponse@NetherNet@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??1ConnectResponse@NetherNet@@QEAA@XZ
    MCAPI ~ConnectResponse();

    // symbol:
    // ?Create@ConnectResponse@NetherNet@@SA?AV12@_KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class NetherNet::ConnectResponse Create(uint64, std::string);

    // symbol:
    // ?TryParse@ConnectResponse@NetherNet@@SA?AV?$optional@VConnectResponse@NetherNet@@@std@@AEBV?$array@V?$basic_string_view@DU?$char_traits@D@std@@@std@@$02@4@@Z
    MCAPI static std::optional<class NetherNet::ConnectResponse> TryParse(std::array<std::string_view, 3> const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?kIdentifier@ConnectResponse@NetherNet@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const kIdentifier;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $kIdentifier() { return kIdentifier; }

    // NOLINTEND
};

}; // namespace NetherNet
