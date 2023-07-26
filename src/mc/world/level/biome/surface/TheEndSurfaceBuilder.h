#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace VanillaSurfaceBuilders {

class TheEndSurfaceBuilder {

public:
    // prevent constructor by default
    TheEndSurfaceBuilder& operator=(TheEndSurfaceBuilder const&) = delete;
    TheEndSurfaceBuilder(TheEndSurfaceBuilder const&)            = delete;
    TheEndSurfaceBuilder()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?init\@TheEndSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@TheEndSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const; // NOLINT
};

}; // namespace VanillaSurfaceBuilders
