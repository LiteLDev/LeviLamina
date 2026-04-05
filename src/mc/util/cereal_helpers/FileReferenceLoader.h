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
    ::ll::UntypedStorage<8, 24> mUnk32e7cb;
    ::ll::UntypedStorage<8, 24> mUnk2c5584;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoader& operator=(FileReferenceLoader const&);
    FileReferenceLoader(FileReferenceLoader const&);
    FileReferenceLoader();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Core::Result _getFileDataFileSystem(::Core::Path const& path, ::std::string& outFileData);

    MCNAPI ::Core::Result _getFileDataResourcePack(::Core::Path const& path, ::std::string& outFileData);

    MCNAPI ::std::vector<::std::string> getErrors();

    MCNAPI ::Core::Result getFileData(::Core::Path const& path, ::std::string& outFileData);

    MCNAPI ::Core::Path getPath(::Core::Path const& relativePath);

    MCNAPI bool isAllowedToUsePath(::Core::Path const& path);

    MCNAPI ~FileReferenceLoader();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace CerealHelpers
