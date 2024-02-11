#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class ZlibFileAccessWrapper {
public:
    // prevent constructor by default
    ZlibFileAccessWrapper& operator=(ZlibFileAccessWrapper const&);
    ZlibFileAccessWrapper(ZlibFileAccessWrapper const&);
    ZlibFileAccessWrapper();

public:
    // NOLINTBEGIN
    // symbol: ??0ZlibFileAccessWrapper@@QEAA@V?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@@Z
    MCAPI explicit ZlibFileAccessWrapper(Bedrock::NotNullNonOwnerPtr<class IFileAccess> fileAccess);

    // symbol: ?getZipFunctions@ZlibFileAccessWrapper@@QEBAPEAUzlib_filefunc64_32_def_s@@XZ
    MCAPI struct zlib_filefunc64_32_def_s* getZipFunctions() const;

    // symbol: ??1ZlibFileAccessWrapper@@QEAA@XZ
    MCAPI ~ZlibFileAccessWrapper();

    // NOLINTEND
};
