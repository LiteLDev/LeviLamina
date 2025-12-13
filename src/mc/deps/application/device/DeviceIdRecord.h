#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DeviceIdErrorType { struct CacheOpenFailed; }
namespace Bedrock::DeviceIdErrorType { struct FileWriteError; }
namespace Bedrock::DeviceIdErrorType { struct NoCacheFound; }
namespace Bedrock::DeviceIdErrorType { struct ValidationFail; }
namespace Core { class FileSystem; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class DeviceIdRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbbff58;
    ::ll::UntypedStorage<1, 1>  mUnk6df0be;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdRecord& operator=(DeviceIdRecord const&);
    DeviceIdRecord(DeviceIdRecord const&);
    DeviceIdRecord();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit DeviceIdRecord(::std::string const& deviceId);

    MCNAPI_C ::Bedrock::DeviceIdRecord& operator=(::Bedrock::DeviceIdRecord&& other);

    MCNAPI_C ::Bedrock::Result<
        void,
        ::std::variant<
            ::Bedrock::DeviceIdErrorType::FileWriteError,
            ::Bedrock::DeviceIdErrorType::NoCacheFound,
            ::Bedrock::DeviceIdErrorType::CacheOpenFailed,
            ::Bedrock::DeviceIdErrorType::ValidationFail>>
    writeToCacheFile(::Core::Path const& pathToCacheFile);

    MCNAPI_C ~DeviceIdRecord();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool _isValid(::std::string const& md5Hash, ::std::string const& guid);

    MCNAPI_C static ::std::string generateHash(::std::string const& str);

    MCNAPI_C static ::Bedrock::Result<
        void,
        ::std::variant<
            ::Bedrock::DeviceIdErrorType::FileWriteError,
            ::Bedrock::DeviceIdErrorType::NoCacheFound,
            ::Bedrock::DeviceIdErrorType::CacheOpenFailed,
            ::Bedrock::DeviceIdErrorType::ValidationFail>>
    readFromCacheFile(
        ::Core::FileSystem&        fileSystem,
        ::Core::Path const&        pathToCacheFile,
        ::Bedrock::DeviceIdRecord& outRecord
    );

    MCNAPI_C static ::Bedrock::Result<
        void,
        ::std::variant<
            ::Bedrock::DeviceIdErrorType::FileWriteError,
            ::Bedrock::DeviceIdErrorType::NoCacheFound,
            ::Bedrock::DeviceIdErrorType::CacheOpenFailed,
            ::Bedrock::DeviceIdErrorType::ValidationFail>>
    readFromCacheFolder(
        ::Core::FileSystem&        fileSystem,
        ::Core::Path const&        pathToCacheFolder,
        ::Bedrock::DeviceIdRecord& outRecord
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static char const*& _cacheRecordFileName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string const& deviceId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
