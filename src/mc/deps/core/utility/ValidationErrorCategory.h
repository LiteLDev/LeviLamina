#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

class ValidationErrorCategory {
public:
    // prevent constructor by default
    ValidationErrorCategory& operator=(ValidationErrorCategory const&);
    ValidationErrorCategory(ValidationErrorCategory const&);
    ValidationErrorCategory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ValidationErrorCategory@ResourceUri@Util@@UEAA@XZ
    virtual ~ValidationErrorCategory() = default;

    // vIndex: 1, symbol: ?name@ValidationErrorCategory@ResourceUri@Util@@UEBAPEBDXZ
    virtual char const* name() const;

    // vIndex: 2, symbol:
    // ?message@ValidationErrorCategory@ResourceUri@Util@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual std::string message(int) const;

    // vIndex: 3, symbol: ?default_error_condition@error_category@std@@UEBA?AVerror_condition@2@H@Z
    virtual std::error_condition default_error_condition(int) const;

    // vIndex: 4, symbol: ?equivalent@error_category@std@@UEBA_NHAEBVerror_condition@2@@Z
    virtual bool equivalent(int, std::error_condition const&) const;

    // vIndex: 5, symbol: ?equivalent@error_category@std@@UEBA_NAEBVerror_code@2@H@Z
    virtual bool equivalent(std::error_code const&, int) const;

    // symbol: ?get@ValidationErrorCategory@ResourceUri@Util@@SAAEBVerror_category@std@@XZ
    MCAPI static std::error_category const& get();

    // NOLINTEND
};

}; // namespace Util::ResourceUri
