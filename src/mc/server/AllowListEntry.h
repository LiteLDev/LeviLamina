#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AllowListEntry : public ::IJsonSerializable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>   mUuid;
    ::ll::TypedStorage<8, 32, ::std::string> mXuid;
    ::ll::TypedStorage<1, 1, bool>           mIgnoresPlayerLimit;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Json::Value serialize() const /*override*/;

    virtual void deserialize(::Json::Value const& root) /*override*/;

    virtual ~AllowListEntry() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Json::Value $serialize() const;

    MCNAPI void $deserialize(::Json::Value const& root);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
