#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Network {

class WebRTCClientErrorCategory {
public:
    // prevent constructor by default
    WebRTCClientErrorCategory& operator=(WebRTCClientErrorCategory const&);
    WebRTCClientErrorCategory(WebRTCClientErrorCategory const&);
    WebRTCClientErrorCategory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?name@WebRTCClientErrorCategory@Network@@UEBAPEBDXZ
    virtual char const* name() const;

    // vIndex: 2, symbol:
    // ?message@WebRTCClientErrorCategory@Network@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual std::string message(int) const;

    // vIndex: 3, symbol: ?default_error_condition@error_category@std@@UEBA?AVerror_condition@2@H@Z
    virtual std::error_condition default_error_condition(int) const;

    // vIndex: 4, symbol: ?equivalent@error_category@std@@UEBA_NHAEBVerror_condition@2@@Z
    virtual bool equivalent(int, std::error_condition const&) const;

    // vIndex: 5, symbol: ?equivalent@error_category@std@@UEBA_NAEBVerror_code@2@H@Z
    virtual bool equivalent(std::error_code const&, int) const;

    // NOLINTEND
};

}; // namespace Network
