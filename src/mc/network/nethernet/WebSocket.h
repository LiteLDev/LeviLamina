#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET;
// clang-format on

namespace NetherNet {

class WebSocket {
public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&);
    WebSocket(WebSocket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WebSocket@NetherNet@@UEAA@XZ
    virtual ~WebSocket();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: ?default_error_condition@error_category@std@@UEBA?AVerror_condition@2@H@Z
    virtual std::error_condition default_error_condition(int) const;

    // vIndex: 9, symbol: ?equivalent@error_category@std@@UEBA_NHAEBVerror_condition@2@@Z
    virtual bool equivalent(int, std::error_condition const&) const;

    // vIndex: 10, symbol: ?equivalent@error_category@std@@UEBA_NAEBVerror_code@2@H@Z
    virtual bool equivalent(std::error_code const&, int) const;

    // symbol: ?OnClose@WebSocket@NetherNet@@MEAAXI@Z
    MCVAPI void OnClose(uint);

    // symbol: ?OnReceiveBinaryMessage@WebSocket@NetherNet@@MEAAXPEBE_K@Z
    MCVAPI void OnReceiveBinaryMessage(uchar const*, uint64);

    // symbol:
    // ?OnReceiveMessage@WebSocket@NetherNet@@MEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void OnReceiveMessage(std::string const&);

    // symbol: ??0WebSocket@NetherNet@@QEAA@XZ
    MCAPI WebSocket();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?Connect@WebSocket@NetherNet@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@4@$$QEAV?$function@$$A6AXVerror_code@std@@@Z@4@@Z
    MCAPI void
    Connect(std::string const&, std::vector<std::pair<std::string, std::string>> const&, std::function<void(std::error_code)>&&);

    // symbol: ?Disconnect@WebSocket@NetherNet@@IEAAXXZ
    MCAPI void Disconnect();

    // symbol: ?IsConnected@WebSocket@NetherNet@@IEBA_NXZ
    MCAPI bool IsConnected() const;

    // symbol:
    // ?Send@WebSocket@NetherNet@@IEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXVerror_code@std@@@Z@4@@Z
    MCAPI void Send(std::string const&, std::function<void(std::error_code)>&&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AllocateSocket@WebSocket@NetherNet@@AEAAPEAUHC_WEBSOCKET@@XZ
    MCAPI struct HC_WEBSOCKET* AllocateSocket();

    // symbol: ?DeallocateSocket@WebSocket@NetherNet@@CAJPEAUHC_WEBSOCKET@@@Z
    MCAPI static long DeallocateSocket(struct HC_WEBSOCKET*);

    // symbol: ?DeallocateSocketAsync@WebSocket@NetherNet@@CAXPEAUHC_WEBSOCKET@@@Z
    MCAPI static void DeallocateSocketAsync(struct HC_WEBSOCKET*);

    // NOLINTEND
};

}; // namespace NetherNet
