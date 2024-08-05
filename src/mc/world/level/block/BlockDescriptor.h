#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/v1_20_50/BlockDescriptor.h"
#include "mc/util/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDescriptor {
public:
    // BlockDescriptor inner types declare
    // clang-format off
    class ResolveHelper;
    struct State;
    // clang-format on

    // BlockDescriptor inner types define
    enum class CompareType {};

    class ResolveHelper {
    public:
        // prevent constructor by default
        ResolveHelper& operator=(ResolveHelper const&);
        ResolveHelper(ResolveHelper const&);
        ResolveHelper();

    public:
        // NOLINTBEGIN
        MCAPI void resolve(bool);

        // NOLINTEND
    };

    struct State {
    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();

    public:
        // NOLINTBEGIN
        MCAPI State(class HashedString, std::string const&);

        MCAPI State(class HashedString, int);

        MCAPI State(class HashedString, struct Puv::v1_20_50::BlockDescriptor::Compound);

        MCAPI ~State();

        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    MCAPI BlockDescriptor();

    MCAPI BlockDescriptor(class BlockDescriptor&& rhs);

    MCAPI BlockDescriptor(class BlockDescriptor const& rhs);

    MCAPI explicit BlockDescriptor(class HashedString const& fullName);

    MCAPI explicit BlockDescriptor(struct Puv::v1_20_50::BlockDescriptor);

    MCAPI BlockDescriptor(std::string const& name, std::vector<struct BlockDescriptor::State>&& states);

    MCAPI class Block const& getBlockOrUnknownBlock() const;

    MCAPI ::BlockDescriptor::CompareType const& getCompareType() const;

    MCAPI std::string const& getFullName() const;

    MCAPI std::vector<struct BlockDescriptor::State> const& getStates() const;

    MCAPI std::string const& getTagExpression() const;

    MCAPI bool isValid() const;

    MCAPI bool matches(class Block const& block) const;

    MCAPI bool matches(class BlockDescriptor const&) const;

    MCAPI void operator=(class BlockDescriptor&& rhs);

    MCAPI void operator=(class BlockDescriptor const& rhs);

    MCAPI bool operator==(class BlockDescriptor const& rhs) const;

    MCAPI void setContentLogOnError(bool) const;

    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;

    MCAPI class Block const* tryGetBlock() const;

    MCAPI class Block const* tryGetBlockNoLogging() const;

    MCAPI ~BlockDescriptor();

    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const& blockDescriptors, class Block const& block);

    MCAPI static bool anyMatch(
        std::vector<class BlockDescriptor> const& blockDescriptors,
        class BlockDescriptor const&              otherBlockDescriptor
    );

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const& tag);

    MCAPI static class BlockDescriptor
    fromTagExpression(std::string const& tagExpression, ::MolangVersion molangVersion);

    MCAPI static char const JSON_NAME_FIELD[];

    MCAPI static char const JSON_STATES_FIELD[];

    MCAPI static char const JSON_TAGS_FIELD[];

    // NOLINTEND
};
