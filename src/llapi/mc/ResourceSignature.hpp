/**
 * @file  ResourceSignature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceSignature.
 *
 */
class ResourceSignature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCESIGNATURE
public:
    class ResourceSignature& operator=(class ResourceSignature const &) = delete;
    ResourceSignature(class ResourceSignature const &) = delete;
    ResourceSignature() = delete;
#endif

public:
    /**
     * @symbol  ?areKnownFilesValid\@ResourceSignature\@\@QEAA_NAEBVPackAccessStrategy\@\@\@Z
     */
    MCAPI bool areKnownFilesValid(class PackAccessStrategy const &);
    /**
     * @symbol  ??1ResourceSignature\@\@QEAA\@XZ
     */
    MCAPI ~ResourceSignature();
    /**
     * @symbol  ?SIGNATURE_FILENAME\@ResourceSignature\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const SIGNATURE_FILENAME;

//private:
    /**
     * @symbol  ?_areKnownFilesValid\@ResourceSignature\@\@AEAA_NAEBVPackAccessStrategy\@\@_N\@Z
     */
    MCAPI bool _areKnownFilesValid(class PackAccessStrategy const &, bool);
    /**
     * @symbol  ?_checkSignedFiles\@ResourceSignature\@\@AEBA_NAEBVPackAccessStrategy\@\@\@Z
     */
    MCAPI bool _checkSignedFiles(class PackAccessStrategy const &) const;
    /**
     * @symbol  ?_loadSignaturesFile\@ResourceSignature\@\@AEAAXAEBVPath\@Core\@\@AEBVPackAccessStrategy\@\@\@Z
     */
    MCAPI void _loadSignaturesFile(class Core::Path const &, class PackAccessStrategy const &);

private:

};