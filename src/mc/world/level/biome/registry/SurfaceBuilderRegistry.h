#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class ISurfaceBuilder;
// clang-format on

class SurfaceBuilderRegistry {
public:
    // SurfaceBuilderRegistry inner types declare
    // clang-format off
    struct Element;
    // clang-format on

    // SurfaceBuilderRegistry inner types define
    struct Element {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk17f918;
        ::ll::UntypedStorage<8, 8> mUnk74cdca;
        // NOLINTEND

    public:
        // prevent constructor by default
        Element& operator=(Element const&);
        Element(Element const&);
        Element();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk649ac6;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceBuilderRegistry& operator=(SurfaceBuilderRegistry const&);
    SurfaceBuilderRegistry(SurfaceBuilderRegistry const&);
    SurfaceBuilderRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ISurfaceBuilder* getBestBuilder(::Biome& biome) const;
    // NOLINTEND
};
