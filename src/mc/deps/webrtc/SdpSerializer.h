#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class SimulcastDescription; }
namespace cricket { struct RidDescription; }
// clang-format on

namespace webrtc {

class SdpSerializer {
public:
    // prevent constructor by default
    SdpSerializer& operator=(SdpSerializer const&);
    SdpSerializer(SdpSerializer const&);
    SdpSerializer();

public:
    // NOLINTBEGIN
    // symbol:
    // ?DeserializeRidDescription@SdpSerializer@webrtc@@QEBA?AV?$RTCErrorOr@URidDescription@cricket@@@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class webrtc::RTCErrorOr<struct cricket::RidDescription> DeserializeRidDescription(std::string_view) const;

    // symbol:
    // ?DeserializeSimulcastDescription@SdpSerializer@webrtc@@QEBA?AV?$RTCErrorOr@VSimulcastDescription@cricket@@@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class webrtc::RTCErrorOr<class cricket::SimulcastDescription> DeserializeSimulcastDescription(std::string_view
    ) const;

    // symbol:
    // ?SerializeRidDescription@SdpSerializer@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBURidDescription@cricket@@@Z
    MCAPI std::string SerializeRidDescription(struct cricket::RidDescription const&) const;

    // symbol:
    // ?SerializeSimulcastDescription@SdpSerializer@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSimulcastDescription@cricket@@@Z
    MCAPI std::string SerializeSimulcastDescription(class cricket::SimulcastDescription const&) const;

    // NOLINTEND
};

}; // namespace webrtc
