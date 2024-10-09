#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/SimpleWeightedEntry.h"

class PoolAliasBinding {
public:
    // PoolAliasBinding inner types declare
    // clang-format off
    class PoolAliasLookup;
    // clang-format on

    // PoolAliasBinding inner types define
    class PoolAliasLookup {
    public:
        // prevent constructor by default
        PoolAliasLookup& operator=(PoolAliasLookup const&);
        PoolAliasLookup(PoolAliasLookup const&);
        PoolAliasLookup();

    public:
        // NOLINTBEGIN
        MCAPI std::string_view getOrDefault(std::string_view alias, std::string_view defaultValue) const;

        MCAPI void insert(std::string const& id, std::string const& poolName);

        MCAPI ~PoolAliasLookup();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PoolAliasBinding& operator=(PoolAliasBinding const&);
    PoolAliasBinding(PoolAliasBinding const&);
    PoolAliasBinding();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void
    appendResolvedAliases(class IRandom&, class PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const = 0;

    // vIndex: 1
    virtual void forAllTargets(std::function<void(std::string const&, std::string const&)> const& fn) const = 0;

    // vIndex: 2
    virtual ~PoolAliasBinding() = default;

    MCAPI static std::shared_ptr<class PoolAliasBinding> direct(std::string&& id, std::string&& target);

    MCAPI static std::shared_ptr<class PoolAliasBinding>
    random(std::string&& id, std::vector<struct Core::SimpleWeightedEntry<std::string>>&& targets);

    MCAPI static std::shared_ptr<class PoolAliasBinding> randomGroup(
        std::vector<struct Core::SimpleWeightedEntry<std::vector<std::shared_ptr<class PoolAliasBinding>>>>&& targets
    );

    MCAPI static void registerTargetsAsPools(
        class JigsawStructureRegistry&                              registry,
        struct StructureTemplateRegistrationContext&                context,
        std::string_view                                            fallback,
        std::vector<std::shared_ptr<class PoolAliasBinding>> const& aliasBindings
    );

    MCAPI static class PoolAliasBinding::PoolAliasLookup resolvePoolAliases(
        std::vector<std::shared_ptr<class PoolAliasBinding>> const& aliases,
        class BlockPos const&                                       structureStartPosition,
        int64                                                       levelSeed
    );

    // NOLINTEND
};
