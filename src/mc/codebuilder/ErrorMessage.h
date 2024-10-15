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
    MCAPI void* ctor$(std::string const& requestId, struct MCRESULT result);

    MCAPI void* ctor$(std::string const& requestId, struct MCRESULT result, std::string const& message);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
