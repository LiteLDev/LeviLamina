#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace QuerySetIdentifier {
// NOLINTBEGIN
// symbol: ?getDefaultCollection@QuerySetIdentifier@@YA?AV?$span@$$CBVHashedString@@$0?0@gsl@@XZ
MCAPI gsl::span<class HashedString const> getDefaultCollection();

// symbol: ?getTagsCollection@QuerySetIdentifier@@YA?AV?$span@$$CBVHashedString@@$0?0@gsl@@XZ
MCAPI gsl::span<class HashedString const> getTagsCollection();
// NOLINTEND

}; // namespace QuerySetIdentifier
