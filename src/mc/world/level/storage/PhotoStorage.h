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

    MCAPI_C bool _addValidFile(::Core::Path path);

    MCAPI_C bool _isValidFile(::Core::Path file);

    MCAPI_C bool _readFile(::Core::Path path, ::std::string& resultData);

    MCAPI void _readManifest();

    MCAPI_C bool _writeFile(::Core::Path path, ::std::string const& photoData);

    MCAPI_C void _writeManifest();

    MCAPI_C void getLoosePhotos(::Player& owner, ::std::vector<::Core::PathBuffer<::std::string>>& result);

    MCAPI_C ::Core::PathBuffer<::std::string> getPath(::PhotoStorageContainer const& container);

    MCAPI_C void
    getPhoto(::PhotoStorageContainer const& container, ::std::string const& photoName, ::std::string& resultData);

    MCAPI_C ::Core::PathBuffer<::std::string> getPhotoPath(::Actor const& owner) const;

    MCAPI_C void setValidLoosePhoto(::PhotoStorageContainer const& container, ::std::string const& photoName);

    MCAPI_C void storePhoto(
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );

    MCAPI_C ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> storePhotoFront(
        ::Player&                      owner,
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );

    MCAPI ~PhotoStorage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::Core::PathBuffer<::std::string> getScreenshotFilename();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BOOKS_DIR();

    MCAPI static ::std::string const& MANIFEST_NAME();

    MCAPI static ::std::string const& PHOTOITEM_DIR();

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
    MCAPI void $dtor();
    // NOLINTEND
};
