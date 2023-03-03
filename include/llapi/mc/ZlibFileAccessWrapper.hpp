/**
 * @file  ZlibFileAccessWrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ZlibFileAccessWrapper.
 *
 */
class ZlibFileAccessWrapper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZLIBFILEACCESSWRAPPER
public:
    class ZlibFileAccessWrapper& operator=(class ZlibFileAccessWrapper const &) = delete;
    ZlibFileAccessWrapper(class ZlibFileAccessWrapper const &) = delete;
    ZlibFileAccessWrapper() = delete;
#endif

public:
    /**
     * @symbol  ??0ZlibFileAccessWrapper\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ZlibFileAccessWrapper(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>>);
    /**
     * @symbol  ?getZipFunctions\@ZlibFileAccessWrapper\@\@QEBAPEAUzlib_filefunc64_32_def_s\@\@XZ
     */
    MCAPI struct zlib_filefunc64_32_def_s * getZipFunctions() const;
    /**
     * @symbol  ??1ZlibFileAccessWrapper\@\@QEAA\@XZ
     */
    MCAPI ~ZlibFileAccessWrapper();

};