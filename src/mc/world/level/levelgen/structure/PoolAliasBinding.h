#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/SimpleWeightedEntry.h"

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
        MCAPI std::string_view getOrDefault(std::string_view, std::string_view) const;

        MCAPI void insert(std::string const&, std::string const&);

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
    virtual void appendResolvedAliases(class IRandom&, class PoolAliasBinding::PoolAliasLookup&) const = 0;

    // vIndex: 1
    virtual void forAllTargets(std::function<void(std::string const&, std::string const&)> const&) const = 0;

    // vIndex: 2
    virtual ~PoolAliasBinding() = default;

    MCAPI static std::shared_ptr<class PoolAliasBinding> direct(std::string&&, std::string&&);

    MCAPI static std::shared_ptr<class PoolAliasBinding>
    random(std::string&&, std::vector<struct Core::SimpleWeightedEntry<std::string>>&&);

    MCAPI static std::shared_ptr<class PoolAliasBinding>
    randomGroup(std::vector<struct Core::SimpleWeightedEntry<std::vector<std::shared_ptr<class PoolAliasBinding>>>>&&);

    MCAPI static void
    registerTargetsAsPools(class JigsawStructureRegistry&, struct StructureTemplateRegistrationContext&, std::string_view, std::vector<std::shared_ptr<class PoolAliasBinding>> const&);

    MCAPI static class PoolAliasBinding::PoolAliasLookup
    resolvePoolAliases(std::vector<std::shared_ptr<class PoolAliasBinding>> const&, class BlockPos const&, int64);

    // NOLINTEND
};
