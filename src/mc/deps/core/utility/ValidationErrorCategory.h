#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

class ValidationErrorCategory {

public:
    // prevent constructor by default
    ValidationErrorCategory& operator=(ValidationErrorCategory const&) = delete;
    ValidationErrorCategory(ValidationErrorCategory const&)            = delete;
    ValidationErrorCategory()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?name\@ValidationErrorCategory\@ResourceUri\@Util\@\@UEBAPEBDXZ
     */
    virtual char const* name() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?message\@ValidationErrorCategory\@ResourceUri\@Util\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual std::string message(int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?default_error_condition\@error_category\@std\@\@UEBA?AVerror_condition\@2\@H\@Z
     */
    virtual class std::error_condition default_error_condition(int) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?equivalent\@error_category\@std\@\@UEBA_NHAEBVerror_condition\@2\@\@Z
     */
    virtual bool equivalent(int, class std::error_condition const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?equivalent\@error_category\@std\@\@UEBA_NAEBVerror_code\@2\@H\@Z
     */
    virtual bool equivalent(class std::error_code const&, int) const; // NOLINT
    /**
     * @symbol ?get\@ValidationErrorCategory\@ResourceUri\@Util\@\@SAAEBVerror_category\@std\@\@XZ
     */
    MCAPI static class std::error_category const& get(); // NOLINT
};

}; // namespace Util::ResourceUri
