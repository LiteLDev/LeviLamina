#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
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
    // vIndex: 1
    virtual void serialize(::Json::Value& root) /*override*/;

    // vIndex: 2
    virtual void deserialize(::Json::Value& root) /*override*/;

    // vIndex: 0
    virtual ~AllowListEntry() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $serialize(::Json::Value& root);

    MCAPI void $deserialize(::Json::Value& root);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
