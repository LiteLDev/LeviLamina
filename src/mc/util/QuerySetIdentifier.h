#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace QuerySetIdentifier {
// NOLINTBEGIN
MCAPI gsl::span<class HashedString const> getDefaultCollection();

MCAPI gsl::span<class HashedString const> getTagsCollection();
// NOLINTEND

}; // namespace QuerySetIdentifier
