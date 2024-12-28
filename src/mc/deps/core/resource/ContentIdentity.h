#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

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
    MCAPI ContentIdentity();

    MCAPI ContentIdentity(::ContentIdentity const&);

    MCAPI ContentIdentity(::ContentIdentity&&);

    MCAPI explicit ContentIdentity(::mce::UUID const& uuid);

    MCAPI ::std::string asString() const;

    MCAPI ::mce::UUID const& getAsUUID() const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(::ContentIdentity const& rhs) const;

    MCAPI ::ContentIdentity& operator=(::ContentIdentity&&);

    MCAPI ::ContentIdentity& operator=(::ContentIdentity const&);

    MCAPI bool operator==(::ContentIdentity const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ContentIdentity fromString(::std::string const& uuidString);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ContentIdentity& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ContentIdentity const&);

    MCAPI void* $ctor(::ContentIdentity&&);

    MCAPI void* $ctor(::mce::UUID const& uuid);
    // NOLINTEND
};
