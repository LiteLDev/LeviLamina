#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct PackIdVersion {
public:
    // prevent constructor by default
    PackIdVersion& operator=(PackIdVersion const&);
    PackIdVersion(PackIdVersion const&);

public:
    // NOLINTBEGIN
    MCAPI PackIdVersion();

    MCAPI PackIdVersion(class mce::UUID const& id, class SemVersion const& version, ::PackType packType);

    MCAPI std::string asString() const;

    MCAPI bool operator!=(struct PackIdVersion const& rhs) const;

    MCAPI bool operator<(struct PackIdVersion const& rhs) const;

    MCAPI bool operator==(struct PackIdVersion const& rhs) const;

    MCAPI bool satisfies(struct PackIdVersion const& rhs) const;

    MCAPI ~PackIdVersion();

    MCAPI static struct PackIdVersion fromString(std::string const&);

    // NOLINTEND
};
