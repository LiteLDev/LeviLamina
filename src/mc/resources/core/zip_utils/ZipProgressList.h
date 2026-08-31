#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
namespace Core::ZipUtils { class ZipProgress; }
// clang-format on

namespace Core::ZipUtils {

struct ZipProgressList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Core::ZipUtils::ZipProgress>>> mZipProgress;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mProgressLock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI uint64 _getSum(::std::function<uint(::std::shared_ptr<::Core::ZipUtils::ZipProgress>)> getNumCallback);

    MCAPI ::std::shared_ptr<::Core::ZipUtils::ZipProgress> createProgress();
#endif
    // NOLINTEND
};

} // namespace Core::ZipUtils
