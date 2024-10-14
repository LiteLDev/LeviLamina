#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
// clang-format on

namespace CodeBuilder {

struct ErrorMessage {
public:
    // prevent constructor by default
    ErrorMessage& operator=(ErrorMessage const&);
    ErrorMessage(ErrorMessage const&);
    ErrorMessage();

public:
    // NOLINTBEGIN
    MCAPI ErrorMessage(std::string const& requestId, struct MCRESULT result);

    MCAPI ErrorMessage(std::string const& requestId, struct MCRESULT result, std::string const& message);

    MCAPI ~ErrorMessage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
