#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace VanillaSurfaceBuilders {

class NetherSurfaceBuilder {

public:
    // prevent constructor by default
    NetherSurfaceBuilder& operator=(NetherSurfaceBuilder const&) = delete;
    NetherSurfaceBuilder(NetherSurfaceBuilder const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?init\@NetherSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@NetherSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const; // NOLINT
    /**
     * @symbol ??0NetherSurfaceBuilder\@VanillaSurfaceBuilders\@\@QEAA\@XZ
     */
    MCAPI NetherSurfaceBuilder(); // NOLINT
};

}; // namespace VanillaSurfaceBuilders
