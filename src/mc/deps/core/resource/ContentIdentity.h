#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

class ContentIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
    ::ll::TypedStorage<1, 1, bool>         mValid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::string asString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ContentIdentity& EMPTY();
    // NOLINTEND
};

namespace std {
template <>
struct hash<::ContentIdentity> {
    size_t operator()(::ContentIdentity const& id) const noexcept { return hash<::mce::UUID>{}(id.mUUID.get()); }
};
} // namespace std
