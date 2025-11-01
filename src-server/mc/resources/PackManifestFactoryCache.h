#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackManifestFactoryCache {
public:
    // PackManifestFactoryCache inner types declare
    // clang-format off
    struct Stats;
    // clang-format on
    
    // PackManifestFactoryCache inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf18636;
        ::ll::UntypedStorage<8, 8> mUnk4330db;
        ::ll::UntypedStorage<1, 1> mUnkdc0f09;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkd6e44b;
    ::ll::UntypedStorage<8, 120> mUnk892348;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManifestFactoryCache& operator=(PackManifestFactoryCache const&);
    PackManifestFactoryCache(PackManifestFactoryCache const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackManifestFactoryCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

};
