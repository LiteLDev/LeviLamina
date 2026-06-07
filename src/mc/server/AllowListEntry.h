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
    ::ll::TypedStorage<8, 32, ::std::string> mPsnId;
    ::ll::TypedStorage<8, 32, ::std::string> mNsaId;
    ::ll::TypedStorage<1, 1, bool>           mIgnoresPlayerLimit;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListEntry& operator=(AllowListEntry const&);
    AllowListEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Json::Value serialize() const /*override*/;

    virtual void deserialize(::Json::Value const& root) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllowListEntry(::AllowListEntry const&);

    MCNAPI AllowListEntry(
        ::std::string name,
        ::mce::UUID   uuid,
        ::std::string xuid,
        ::std::string psnId,
        ::std::string nsaId,
        bool          ignorePLayerLimit
    );

    MCNAPI ::AllowListEntry& operator=(::AllowListEntry&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AllowListEntry const&);

    MCNAPI void* $ctor(
        ::std::string name,
        ::mce::UUID   uuid,
        ::std::string xuid,
        ::std::string psnId,
        ::std::string nsaId,
        bool          ignorePLayerLimit
    );
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
