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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IPACKMANIFESTFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IPackManifestFactory();
#endif
    // NOLINTEND
};
