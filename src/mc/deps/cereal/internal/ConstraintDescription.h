#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ConstraintDescription {
public:
    // prevent constructor by default
    ConstraintDescription();

public:
    // NOLINTBEGIN
    MCAPI ConstraintDescription(struct cereal::internal::ConstraintDescription&&);

    MCAPI ConstraintDescription(struct cereal::internal::ConstraintDescription const&);

    MCAPI void merge(struct cereal::internal::ConstraintDescription const&);

    MCAPI explicit operator bool() const;

    MCAPI struct cereal::internal::ConstraintDescription& operator=(struct cereal::internal::ConstraintDescription&&);

    MCAPI struct cereal::internal::ConstraintDescription&
    operator=(struct cereal::internal::ConstraintDescription const&);

    MCAPI ~ConstraintDescription();

    // NOLINTEND
};

}; // namespace cereal::internal
