#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
    // prevent constructor by default
    UUID& operator=(UUID const&);
    UUID(UUID const&);
    UUID();

public:
    // NOLINTBEGIN
    MCAPI std::string asString() const;

    MCAPI bool isEmpty() const;

    MCAPI bool operator<(class mce::UUID const& rhs) const;

    MCAPI static bool canParse(std::string const& in);

    MCAPI static class mce::UUID fromString(std::string const& in);

    MCAPI static class mce::UUID EMPTY;

    MCAPI static uint64 STRING_LENGTH;

    // NOLINTEND
};

}; // namespace mce
