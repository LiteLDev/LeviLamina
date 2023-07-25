#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

class VersionParser {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUV_VERSIONPARSER
public:
    VersionParser& operator=(VersionParser const&) = delete;
    VersionParser(VersionParser const&)            = delete;
    VersionParser()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?supportsVersion\@VersionParser\@Puv\@\@UEBA_NAEBVSemVersion\@\@\@Z
     */
    virtual bool supportsVersion(class SemVersion const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PUV_VERSIONPARSER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VersionParser();
#endif
    /**
     * @symbol ??0VersionParser\@Puv\@\@QEAA\@V?$initializer_list\@U?$pair\@VSemVersion\@\@V1\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI VersionParser(class std::initializer_list<struct std::pair<class SemVersion, class SemVersion>>);
    /**
     * @symbol ?maxSupportedVersion\@VersionParser\@Puv\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion maxSupportedVersion() const;
};

}; // namespace Puv
