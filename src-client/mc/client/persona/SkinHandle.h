#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/platform/UUID.h"

class SkinHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>       mPackId;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mContentIdentity;
    ::ll::TypedStorage<4, 4, int>                mSkinIndex;
    ::ll::TypedStorage<8, 32, ::std::string>     mSkinName;
    ::ll::TypedStorage<8, 32, ::std::string>     mCapeId;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinHandle& operator=(SkinHandle const&);
    SkinHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkinHandle(::SkinHandle const&);

    MCNAPI SkinHandle(::mce::UUID const& packId, ::std::string const& skinName);

    MCNAPI SkinHandle(::mce::UUID const& packId, int skinIndex, ::std::string const& skinName);

    MCNAPI void initializeFromSerializedSkinName(::std::string const& serializedSkinName, bool reportFailure);

    MCNAPI ::SkinHandle& operator=(::SkinHandle&&);

    MCNAPI bool operator==(::SkinHandle const& rhs) const;

    MCNAPI ::std::string serialize() const;

    MCNAPI ~SkinHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SkinHandle const&);

    MCNAPI void* $ctor(::mce::UUID const& packId, ::std::string const& skinName);

    MCNAPI void* $ctor(::mce::UUID const& packId, int skinIndex, ::std::string const& skinName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
