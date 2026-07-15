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
    ::ll::UntypedStorage<8, 32> mUnked1b8f;
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
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Result<
        void,
        ::std::variant<
            ::Bedrock::DeviceIdErrorType::FileWriteError,
            ::Bedrock::DeviceIdErrorType::NoCacheFound,
            ::Bedrock::DeviceIdErrorType::CacheOpenFailed,
            ::Bedrock::DeviceIdErrorType::ValidationFail>> writeToCacheFolder(::Core::Path const& pathToCacheFolder);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::Result<
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
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& _cacheRecordFileName();
    // NOLINTEND
};

} // namespace Bedrock
