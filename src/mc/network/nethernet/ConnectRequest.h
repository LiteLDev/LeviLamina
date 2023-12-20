#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class ConnectRequest {
public:
    // prevent constructor by default
    ConnectRequest& operator=(ConnectRequest const&);
    ConnectRequest(ConnectRequest const&);
    ConnectRequest();

public:
    // NOLINTBEGIN
    // symbol:
    // ?GetSdp@ConnectRequest@NetherNet@@QEBA?AV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::SessionDescriptionInterface> GetSdp() const;

    // symbol:
    // ?ToString@ConnectRequest@NetherNet@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??1ConnectRequest@NetherNet@@QEAA@XZ
    MCAPI ~ConnectRequest();

    // symbol:
    // ?Create@ConnectRequest@NetherNet@@SA?AV12@_KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class NetherNet::ConnectRequest Create(uint64, std::string);

    // symbol:
    // ?TryParse@ConnectRequest@NetherNet@@SA?AV?$optional@VConnectRequest@NetherNet@@@std@@AEBV?$array@V?$basic_string_view@DU?$char_traits@D@std@@@std@@$02@4@@Z
    MCAPI static std::optional<class NetherNet::ConnectRequest> TryParse(std::array<std::string_view, 3> const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?kIdentifier@ConnectRequest@NetherNet@@0V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const kIdentifier;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $kIdentifier() { return kIdentifier; }

    // NOLINTEND
};

}; // namespace NetherNet
