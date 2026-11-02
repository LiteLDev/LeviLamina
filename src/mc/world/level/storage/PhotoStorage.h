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
    MCNAPI explicit PhotoStorage(::Core::Path const& baseDir);

#ifdef LL_PLAT_C
    MCNAPI bool _addValidFile(::Core::Path path);

    MCNAPI bool _isValidFile(::Core::Path file);

    MCNAPI void getLoosePhotos(::Player& owner, ::std::vector<::Core::PathBuffer<::std::string>>& result);

    MCNAPI ::Core::PathBuffer<::std::string> getPath(::PhotoStorageContainer const& container);

    MCNAPI void
    getPhoto(::PhotoStorageContainer const& container, ::std::string const& photoName, ::std::string& resultData);

    MCNAPI ::Core::PathBuffer<::std::string> getPhotoPath(::Actor const& owner) const;

    MCNAPI ::Core::PathBuffer<::std::string> getPhotoPathRelative(::Actor& owner);

    MCNAPI bool isValidPhoto(::PhotoStorageContainer const& container, ::std::string const& photoName);

    MCNAPI void setValidLoosePhoto(::PhotoStorageContainer const& container, ::std::string const& photoName);

    MCNAPI void storePhoto(
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> storePhotoFront(
        ::Player&                      owner,
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );
#endif

    MCNAPI ~PhotoStorage();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& BOOKS_DIR();

    MCNAPI static ::std::string const& MANIFEST_NAME();

    MCNAPI static ::std::string const& PHOTOITEM_DIR();

    MCNAPI static ::std::string const& PHOTO_DIR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const& baseDir);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
