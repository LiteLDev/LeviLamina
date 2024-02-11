#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ConstraintDescription {
public:
    // prevent constructor by default
    ConstraintDescription();

public:
    // NOLINTBEGIN
    // symbol: ??0ConstraintDescription@internal@cereal@@QEAA@$$QEAU012@@Z
    MCAPI ConstraintDescription(struct cereal::internal::ConstraintDescription&&);

    // symbol: ??0ConstraintDescription@internal@cereal@@QEAA@AEBU012@@Z
    MCAPI ConstraintDescription(struct cereal::internal::ConstraintDescription const&);

    // symbol: ?merge@ConstraintDescription@internal@cereal@@QEAAXAEBU123@@Z
    MCAPI void merge(struct cereal::internal::ConstraintDescription const&);

    // symbol: ??BConstraintDescription@internal@cereal@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // symbol: ??4ConstraintDescription@internal@cereal@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct cereal::internal::ConstraintDescription& operator=(struct cereal::internal::ConstraintDescription&&);

    // symbol: ??4ConstraintDescription@internal@cereal@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct cereal::internal::ConstraintDescription&
    operator=(struct cereal::internal::ConstraintDescription const&);

    // symbol: ??1ConstraintDescription@internal@cereal@@QEAA@XZ
    MCAPI ~ConstraintDescription();

    // NOLINTEND
};

}; // namespace cereal::internal
