#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

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

    MCAPI static struct PackIdVersion fromString(std::string const& inputStr);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class mce::UUID const& id, class SemVersion const& version, ::PackType packType);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
