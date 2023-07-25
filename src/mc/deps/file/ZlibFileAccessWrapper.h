#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class ZlibFileAccessWrapper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZLIBFILEACCESSWRAPPER
public:
    ZlibFileAccessWrapper& operator=(ZlibFileAccessWrapper const&) = delete;
    ZlibFileAccessWrapper(ZlibFileAccessWrapper const&)            = delete;
    ZlibFileAccessWrapper()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ??0ZlibFileAccessWrapper\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ZlibFileAccessWrapper(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>>);
    /**
     * @symbol ??1ZlibFileAccessWrapper\@\@QEAA\@XZ
     */
    MCAPI ~ZlibFileAccessWrapper();
};
