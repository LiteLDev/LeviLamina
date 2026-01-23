#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace CerealHelpers {

class FileReferenceLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka30d41;
    ::ll::UntypedStorage<4, 4>  mUnk38ae0a;
    ::ll::UntypedStorage<8, 24> mUnke5bdfd;
    ::ll::UntypedStorage<8, 24> mUnk3b5ac6;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoader& operator=(FileReferenceLoader const&);
    FileReferenceLoader(FileReferenceLoader const&);
    FileReferenceLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Core::Result _getFileDataFileSystem(::Core::Path const& path, ::std::string& outFileData);

    MCNAPI_C ::Core::Result _getFileDataResourcePack(::Core::Path const& path, ::std::string& outFileData);

    MCNAPI_C ::std::vector<::std::string> getErrors();

    MCNAPI_C ::Core::Result getFileData(::Core::Path const& path, ::std::string& outFileData);

    MCNAPI_C ::Core::Path getPath(::Core::Path const& relativePath);

    MCNAPI_C bool isAllowedToUsePath(::Core::Path const& path);

    MCNAPI_C ~FileReferenceLoader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace CerealHelpers
