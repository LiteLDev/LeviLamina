#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core::ZipUtils { class ZipProgress; }
// clang-format on

namespace Core::ZipUtils {

struct ZipProgressList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkff54df;
    ::ll::UntypedStorage<8, 80> mUnkdebe11;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipProgressList& operator=(ZipProgressList const&);
    ZipProgressList(ZipProgressList const&);
    ZipProgressList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C uint64 _getSum(::std::function<uint(::std::shared_ptr<::Core::ZipUtils::ZipProgress>)> getNumCallback);

    MCNAPI_C ::std::shared_ptr<::Core::ZipUtils::ZipProgress> createProgress();
    // NOLINTEND
};

} // namespace Core::ZipUtils
