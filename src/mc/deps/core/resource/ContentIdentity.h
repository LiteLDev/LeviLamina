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
    MCAPI ContentIdentity();

    MCAPI ContentIdentity(::ContentIdentity&&);

    MCAPI ContentIdentity(::ContentIdentity const&);

    MCAPI explicit ContentIdentity(::mce::UUID const& uuid);

    MCFOLD ::std::string asString() const;

    MCFOLD ::mce::UUID const& getAsUUID() const;

    MCFOLD bool isValid() const;

    MCAPI bool operator!=(::ContentIdentity const& rhs) const;

    MCFOLD ::ContentIdentity& operator=(::ContentIdentity&& rhs);

    MCFOLD ::ContentIdentity& operator=(::ContentIdentity const& rhs);

    MCFOLD bool operator==(::ContentIdentity const& rhs) const;

#ifdef LL_PLAT_C
    MCAPI void setUUID(::mce::UUID const& uuid);
#endif
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

    MCFOLD void* $ctor(::ContentIdentity&&);

    MCFOLD void* $ctor(::ContentIdentity const&);

    MCAPI void* $ctor(::mce::UUID const& uuid);
    // NOLINTEND
};
