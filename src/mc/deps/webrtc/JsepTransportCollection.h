#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class JsepTransport; }
// clang-format on

namespace webrtc {

class JsepTransportCollection {
public:
    // prevent constructor by default
    JsepTransportCollection& operator=(JsepTransportCollection const&);
    JsepTransportCollection(JsepTransportCollection const&);
    JsepTransportCollection();

public:
    // NOLINTBEGIN
    // symbol:
    // ?ActiveTransports@JsepTransportCollection@webrtc@@QEAA?AV?$vector@PEAVJsepTransport@cricket@@V?$allocator@PEAVJsepTransport@cricket@@@std@@@std@@XZ
    MCAPI std::vector<class cricket::JsepTransport*> ActiveTransports();

    // symbol: ?CommitTransports@JsepTransportCollection@webrtc@@QEAAXXZ
    MCAPI void CommitTransports();

    // symbol: ?DestroyAllTransports@JsepTransportCollection@webrtc@@QEAAXXZ
    MCAPI void DestroyAllTransports();

    // symbol:
    // ?GetTransportByName@JsepTransportCollection@webrtc@@QEAAPEAVJsepTransport@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::JsepTransport* GetTransportByName(std::string const&);

    // symbol:
    // ?GetTransportByName@JsepTransportCollection@webrtc@@QEBAPEBVJsepTransport@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::JsepTransport const* GetTransportByName(std::string const&) const;

    // symbol:
    // ?GetTransportForMid@JsepTransportCollection@webrtc@@QEAAPEAVJsepTransport@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::JsepTransport* GetTransportForMid(std::string const&);

    // symbol:
    // ?GetTransportForMid@JsepTransportCollection@webrtc@@QEBAPEBVJsepTransport@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cricket::JsepTransport const* GetTransportForMid(std::string const&) const;

    // symbol:
    // ?GetTransportForMid@JsepTransportCollection@webrtc@@QEBAPEBVJsepTransport@cricket@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class cricket::JsepTransport const* GetTransportForMid(std::string_view) const;

    // symbol:
    // ??0JsepTransportCollection@webrtc@@QEAA@V?$function@$$A6A_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVJsepTransport@cricket@@@Z@std@@V?$function@$$A6AXXZ@3@@Z
    MCAPI
    JsepTransportCollection(std::function<bool(std::string const&, class cricket::JsepTransport*)>, std::function<void(void)>);

    // symbol:
    // ?RegisterTransport@JsepTransportCollection@webrtc@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VJsepTransport@cricket@@U?$default_delete@VJsepTransport@cricket@@@std@@@4@@Z
    MCAPI void RegisterTransport(std::string const&, std::unique_ptr<class cricket::JsepTransport>);

    // symbol:
    // ?RemoveTransportForMid@JsepTransportCollection@webrtc@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void RemoveTransportForMid(std::string const&);

    // symbol: ?RollbackTransports@JsepTransportCollection@webrtc@@QEAA_NXZ
    MCAPI bool RollbackTransports();

    // symbol:
    // ?SetTransportForMid@JsepTransportCollection@webrtc@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVJsepTransport@cricket@@@Z
    MCAPI bool SetTransportForMid(std::string const&, class cricket::JsepTransport*);

    // symbol:
    // ?Transports@JsepTransportCollection@webrtc@@QEAA?AV?$vector@PEAVJsepTransport@cricket@@V?$allocator@PEAVJsepTransport@cricket@@@std@@@std@@XZ
    MCAPI std::vector<class cricket::JsepTransport*> Transports();

    // symbol: ??1JsepTransportCollection@webrtc@@QEAA@XZ
    MCAPI ~JsepTransportCollection();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DestroyUnusedTransports@JsepTransportCollection@webrtc@@AEAAXXZ
    MCAPI void DestroyUnusedTransports();

    // symbol: ?MaybeDestroyJsepTransport@JsepTransportCollection@webrtc@@AEAAXPEAVJsepTransport@cricket@@@Z
    MCAPI void MaybeDestroyJsepTransport(class cricket::JsepTransport*);

    // symbol: ?TransportInUse@JsepTransportCollection@webrtc@@AEBA_NPEAVJsepTransport@cricket@@@Z
    MCAPI bool TransportInUse(class cricket::JsepTransport*) const;

    // symbol: ?TransportNeededForRollback@JsepTransportCollection@webrtc@@AEBA_NPEAVJsepTransport@cricket@@@Z
    MCAPI bool TransportNeededForRollback(class cricket::JsepTransport*) const;

    // NOLINTEND
};

}; // namespace webrtc
