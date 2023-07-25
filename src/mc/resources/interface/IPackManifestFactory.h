#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPackManifestFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IPACKMANIFESTFACTORY
public:
    IPackManifestFactory& operator=(IPackManifestFactory const&) = delete;
    IPackManifestFactory(IPackManifestFactory const&)            = delete;
    IPackManifestFactory()                                       = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPACKMANIFESTFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPackManifestFactory();
#endif
};
