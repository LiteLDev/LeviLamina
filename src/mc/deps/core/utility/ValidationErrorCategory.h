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
    // vIndex: 0
    virtual ~ValidationErrorCategory() = default;

    // vIndex: 1
    virtual char const* name() const;

    // vIndex: 2
    virtual std::string message(int _Errval) const;

    // vIndex: 3
    virtual std::error_condition default_error_condition(int) const;

    // vIndex: 4
    virtual bool equivalent(int, std::error_condition const&) const;

    // vIndex: 5
    virtual bool equivalent(std::error_code const&, int) const;

    MCAPI static std::error_category const& get();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::error_condition default_error_condition$(int) const;

    MCAPI bool equivalent$(int, std::error_condition const&) const;

    MCAPI bool equivalent$(std::error_code const&, int) const;

    MCAPI std::string message$(int _Errval) const;

    MCAPI char const* name$() const;

    // NOLINTEND
};

}; // namespace Util::ResourceUri
