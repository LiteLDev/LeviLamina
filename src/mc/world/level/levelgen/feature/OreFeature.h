#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/levelgen/feature/ReplaceRule.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class OreFeature : public ::IFeature {
public:
    int                      mCount;
    float                    mCountf;
    float                    mCountfInv;
    float                    mDiscardChanceOnAirExposure;
    std::vector<ReplaceRule> mReplaceRules;

    // Bedrock::Threading::InstancedThreadLocal<OreFeature::Helper, std::allocator<OreFeature::Helper>>;
    char mHelper[0xE0 - 48];

public:
    // OreFeature inner types declare
    // clang-format off
    class ReplaceRulesAccelerator;
    // clang-format on

    // OreFeature inner types define
    class ReplaceRulesAccelerator {
    public:
        std::vector<std::pair<Block const*, std::vector<BlockLegacy const*>>> mRules;

    public:
        // prevent constructor by default
        ReplaceRulesAccelerator& operator=(ReplaceRulesAccelerator const&);
        ReplaceRulesAccelerator(ReplaceRulesAccelerator const&);
        ReplaceRulesAccelerator();

    public:
        // NOLINTBEGIN
        MCAPI void setRules(std::vector<struct ReplaceRule> const& replaceRules);

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

    MCAPI OreFeature(int count, std::vector<struct ReplaceRule>&& replaceRules);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos> place$(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // NOLINTEND
};
