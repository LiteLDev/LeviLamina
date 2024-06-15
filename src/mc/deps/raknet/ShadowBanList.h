#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ShadowBanList {
public:
    // prevent constructor by default
    ShadowBanList& operator=(ShadowBanList const&);
    ShadowBanList(ShadowBanList const&);
    ShadowBanList();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ShadowBanList@RakNet@@QEAA@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@V?$duration@_JU?$ratio@$00$00@std@@@chrono@3@1@Z
    MCAPI ShadowBanList(std::function<void(std::string const&)>, std::chrono::seconds, std::chrono::seconds);

    // symbol: ?addBan@ShadowBanList@RakNet@@QEAAGAEBUSystemAddress@2@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
    MCAPI ushort addBan(struct RakNet::SystemAddress const&, std::chrono::seconds);

    // NOLINTEND
};

}; // namespace RakNet
