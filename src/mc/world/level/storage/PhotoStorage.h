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
    ::ll::UntypedStorage<8, 32> mUnk90e915;
    ::ll::UntypedStorage<8, 32> mUnk735fe6;
    ::ll::UntypedStorage<8, 32> mUnkba338e;
    ::ll::UntypedStorage<8, 32> mUnke545fe;
    ::ll::UntypedStorage<8, 32> mUnka43046;
    ::ll::UntypedStorage<8, 64> mUnk34296d;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoStorage& operator=(PhotoStorage const&);
    PhotoStorage(PhotoStorage const&);
    PhotoStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PhotoStorage(::Core::Path const& baseDir);

    MCNAPI_C bool _addValidFile(::Core::Path path);

    MCNAPI_C bool _isValidFile(::Core::Path file);

    MCNAPI_C bool _readFile(::Core::Path path, ::std::string& resultData);

    MCNAPI void _readManifest();

    MCNAPI_C bool _writeFile(::Core::Path path, ::std::string const& photoData);

    MCNAPI_C void _writeManifest();

    MCNAPI_C void getLoosePhotos(::Player& owner, ::std::vector<::Core::PathBuffer<::std::string>>& result);

    MCNAPI_C ::Core::PathBuffer<::std::string> getPath(::PhotoStorageContainer const& container);

    MCNAPI_C void
    getPhoto(::PhotoStorageContainer const& container, ::std::string const& photoName, ::std::string& resultData);

    MCNAPI_C ::Core::PathBuffer<::std::string> getPhotoPath(::Actor const& owner) const;

    MCNAPI_C void setValidLoosePhoto(::PhotoStorageContainer const& container, ::std::string const& photoName);

    MCNAPI_C void storePhoto(
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );

    MCNAPI_C ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> storePhotoFront(
        ::Player&                      owner,
        ::PhotoStorageContainer const& container,
        ::std::string const&           photoName,
        ::std::string const&           photoData
    );

    MCNAPI ~PhotoStorage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Core::PathBuffer<::std::string> getScreenshotFilename();
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
