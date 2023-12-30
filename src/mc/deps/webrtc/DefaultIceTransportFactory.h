#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceTransportInterface; }
namespace webrtc { struct IceTransportInit; }
// clang-format on

namespace webrtc {

class DefaultIceTransportFactory {
public:
    // prevent constructor by default
    DefaultIceTransportFactory& operator=(DefaultIceTransportFactory const&);
    DefaultIceTransportFactory(DefaultIceTransportFactory const&);
    DefaultIceTransportFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DefaultIceTransportFactory@webrtc@@UEAA@XZ
    virtual ~DefaultIceTransportFactory() = default;

    // vIndex: 1, symbol:
    // ?CreateIceTransport@DefaultIceTransportFactory@webrtc@@UEAA?AV?$scoped_refptr@VIceTransportInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HUIceTransportInit@2@@Z
    virtual class rtc::scoped_refptr<class webrtc::IceTransportInterface>
    CreateIceTransport(std::string const&, int, struct webrtc::IceTransportInit);

    // NOLINTEND
};

}; // namespace webrtc
