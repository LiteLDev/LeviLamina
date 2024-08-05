#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class OreFeature : public ::IFeature {
public:
    // OreFeature inner types declare
    // clang-format off
    class ReplaceRulesAccelerator;
    // clang-format on

    // OreFeature inner types define
    class ReplaceRulesAccelerator {
    public:
        // prevent constructor by default
        ReplaceRulesAccelerator& operator=(ReplaceRulesAccelerator const&);
        ReplaceRulesAccelerator(ReplaceRulesAccelerator const&);
        ReplaceRulesAccelerator();

    public:
        // NOLINTBEGIN
        MCAPI void setRules(std::vector<struct ReplaceRule> const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OreFeature& operator=(OreFeature const&);
    OreFeature(OreFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OreFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    MCAPI OreFeature();

    MCAPI OreFeature(int count, std::vector<struct ReplaceRule>&&);

    // NOLINTEND
};
