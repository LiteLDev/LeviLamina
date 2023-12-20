#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class FacadeErrorCategory {
public:
    // prevent constructor by default
    FacadeErrorCategory& operator=(FacadeErrorCategory const&);
    FacadeErrorCategory(FacadeErrorCategory const&);
    FacadeErrorCategory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FacadeErrorCategory@NetherNet@@UEAA@XZ
    virtual ~FacadeErrorCategory() = default;

    // vIndex: 1, symbol: ?name@FacadeErrorCategory@NetherNet@@UEBAPEBDXZ
    virtual char const* name() const;

    // vIndex: 2, symbol:
    // ?message@FacadeErrorCategory@NetherNet@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual std::string message(int) const;

    // vIndex: 3, symbol: ?default_error_condition@error_category@std@@UEBA?AVerror_condition@2@H@Z
    virtual std::error_condition default_error_condition(int) const;

    // vIndex: 4, symbol: ?equivalent@error_category@std@@UEBA_NHAEBVerror_condition@2@@Z
    virtual bool equivalent(int, std::error_condition const&) const;

    // vIndex: 5, symbol: ?equivalent@error_category@std@@UEBA_NAEBVerror_code@2@H@Z
    virtual bool equivalent(std::error_code const&, int) const;

    // NOLINTEND
};

}; // namespace NetherNet
