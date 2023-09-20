/**
 * @file  IPackManifestFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IPackManifestFactory.
 *
 */
class IPackManifestFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IPACKMANIFESTFACTORY
public:
    class IPackManifestFactory& operator=(class IPackManifestFactory const &) = delete;
    IPackManifestFactory(class IPackManifestFactory const &) = delete;
    IPackManifestFactory() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?create\@PackManifestFactory\@\@UEAA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@AEAVPackAccessStrategy\@\@AEBVResourceLocation\@\@AEAVPackReport\@\@PEAVSubpackInfoCollection\@\@\@Z
     */
    virtual std::unique_ptr<class PackManifest> create(class PackAccessStrategy &, class ResourceLocation const &, class PackReport &, class SubpackInfoCollection *) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPACKMANIFESTFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPackManifestFactory();
#endif

};
