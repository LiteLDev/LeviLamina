#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class PackSource {

public:
    // prevent constructor by default
    PackSource& operator=(PackSource const&) = delete;
    PackSource(PackSource const&)            = delete;
    PackSource()                             = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSOURCE
    /**
     * @symbol ?getPackOrigin\@PackSource\@\@UEBA?AW4PackOrigin\@\@XZ
     */
    MCVAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @symbol ?getPackType\@PackSource\@\@UEBA?AW4PackType\@\@XZ
     */
    MCVAPI enum class PackType getPackType() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PackSource();
#endif
    /**
     * @symbol ?fetchPack\@PackSource\@\@QEAAPEAVPack\@\@AEBUPackIdVersion\@\@\@Z
     */
    MCAPI class Pack* fetchPack(struct PackIdVersion const&);
    /**
     * @symbol
     * ?resolveUpgradeDependencies\@PackSource\@\@QEAAXAEAVPack\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
    resolveUpgradeDependencies(class Pack&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);
    // NOLINTEND
};
