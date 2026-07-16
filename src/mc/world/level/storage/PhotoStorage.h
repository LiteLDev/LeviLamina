#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
struct PhotoStorageContainer;
namespace Core { class Path; }
// clang-format on

class PhotoStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mBaseDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mBookDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mPhotoDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mPhotoItemDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>   mManifestDir;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mChecksums;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PhotoStorage(::Core::Path const& baseDir);

#ifdef LL_PLAT_C
    MCAPI void getLoosePhotos(::Player& owner, ::std::vector<::Core::PathBuffer<::std::string>>& result);

    MCAPI ::Core::PathBuffer<::std::string> getPath(::PhotoStorageContainer const& container);

    MCAPI void
    getPhoto(::PhotoStorageContainer const& container, ::std::string const& photoName, ::std::string& resultData);

    MCAPI ::Core::PathBuffer<::std::string> getPhotoPath(::Actor const& owner) const;

    MCAPI ::Core::PathBuffer<::std::string> getPhotoPathRelative(::Actor& owner);

    MCAPI bool isValidPhoto(::PhotoStorageContainer const& container, ::std::string const& photoName);

    MCAPI void setValidLoosePhoto(::PhotoStorageContainer const& container, ::std::string const& photoName);

    MCAPI void storePhoto(
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );

    MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> storePhotoFront(
        ::Player&                      owner,
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );
#endif

#ifdef LL_PLAT_S
    MCAPI ~PhotoStorage();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& PHOTO_DIR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& baseDir);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
