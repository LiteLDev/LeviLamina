#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace World {

struct OwnedWorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mLocalId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mMarketplaceId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mThumbnailPath;
    ::ll::TypedStorage<1, 1, bool>                               mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                               mIsInstalled;
    ::ll::TypedStorage<1, 1, bool>                               mIsPremium;
    ::ll::TypedStorage<8, 32, ::std::string>                     mCreator;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateData(OwnedWorldTemplateData const&);
    OwnedWorldTemplateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getCreator() const;

    MCAPI ::World::OwnedWorldTemplateData& operator=(::World::OwnedWorldTemplateData const&);

    MCAPI ~OwnedWorldTemplateData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> DEFAULT_UNKNOWN_ID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
