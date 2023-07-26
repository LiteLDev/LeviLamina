#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace Puv {

class VersionParser {

public:
    // prevent constructor by default
    VersionParser& operator=(VersionParser const&) = delete;
    VersionParser(VersionParser const&)            = delete;
    VersionParser()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?supportsVersion\@VersionParser\@Puv\@\@UEBA_NAEBVSemVersion\@\@\@Z
     */
    virtual bool supportsVersion(class SemVersion const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PUV_VERSIONPARSER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VersionParser(); // NOLINT
#endif
    /**
     * @symbol ??0VersionParser\@Puv\@\@QEAA\@V?$initializer_list\@U?$pair\@VSemVersion\@\@V1\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI VersionParser(class std::initializer_list<struct std::pair<class SemVersion, class SemVersion>>); // NOLINT
    /**
     * @symbol ?maxSupportedVersion\@VersionParser\@Puv\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion maxSupportedVersion() const; // NOLINT
};

}; // namespace Puv
