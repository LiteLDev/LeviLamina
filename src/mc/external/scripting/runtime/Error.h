#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Error {
public:
    // prevent constructor by default
    Error(Error const&);
    Error();

public:
    // NOLINTBEGIN
    MCAPI explicit Error(std::string const& message_);

    MCAPI Error(struct Scripting::Error&&);

    MCAPI Error(std::string const& name_, std::string const& message_);

    MCAPI struct Scripting::Error& operator=(struct Scripting::Error&&);

    MCAPI struct Scripting::Error& operator=(struct Scripting::Error const&);

    MCAPI std::string toString() const;

    MCAPI ~Error();

    // NOLINTEND
};

}; // namespace Scripting
