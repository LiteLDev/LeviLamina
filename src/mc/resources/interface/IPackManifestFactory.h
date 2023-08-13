#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPackManifestFactory {

public:
    // prevent constructor by default
    IPackManifestFactory& operator=(IPackManifestFactory const&) = delete;
    IPackManifestFactory(IPackManifestFactory const&)            = delete;
    IPackManifestFactory()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?create\@PackManifestFactory\@\@UEAA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@AEAVPackAccessStrategy\@\@AEBVResourceLocation\@\@AEAVPackReport\@\@PEAVSubpackInfoCollection\@\@\@Z
     */
    virtual std::unique_ptr<class PackManifest>
    create(class PackAccessStrategy&, class ResourceLocation const&, class PackReport&, class SubpackInfoCollection*) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPACKMANIFESTFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPackManifestFactory();
#endif
    // NOLINTEND
};
