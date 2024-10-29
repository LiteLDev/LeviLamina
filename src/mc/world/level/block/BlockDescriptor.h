#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/v1_20_50/BlockDescriptor.h"
#include "mc/molang/MolangVersion.h"

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
        MCAPI void resolve(bool logInvalidBlocks);

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
        MCAPI State(class HashedString name, std::string const& stringState);

        MCAPI State(class HashedString name, int intState);

        MCAPI State(class HashedString name, struct Puv::v1_20_50::BlockDescriptor::Compound state);

        MCAPI ~State();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class HashedString name, struct Puv::v1_20_50::BlockDescriptor::Compound state);

        MCAPI void* ctor$(class HashedString name, int intState);

        MCAPI void* ctor$(class HashedString name, std::string const& stringState);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    MCAPI BlockDescriptor();

    MCAPI BlockDescriptor(class BlockDescriptor&& rhs);

    MCAPI BlockDescriptor(class BlockDescriptor const& rhs);

    MCAPI explicit BlockDescriptor(class HashedString const& fullName);

    MCAPI explicit BlockDescriptor(struct Puv::v1_20_50::BlockDescriptor desc);

    MCAPI BlockDescriptor(std::string const& name, std::vector<struct BlockDescriptor::State>&& states);

    MCAPI class Block const& getBlockOrUnknownBlock() const;

    MCAPI ::BlockDescriptor::CompareType const& getCompareType() const;

    MCAPI std::string const& getFullName() const;

    MCAPI std::vector<struct BlockDescriptor::State> const& getStates() const;

    MCAPI std::string const& getTagExpression() const;

    MCAPI bool isValid() const;

    MCAPI bool matches(class Block const& block) const;

    MCAPI bool matches(class BlockDescriptor const& otherDescriptor) const;

    MCAPI void operator=(class BlockDescriptor&& rhs);

    MCAPI void operator=(class BlockDescriptor const& rhs);

    MCAPI bool operator==(class BlockDescriptor const& rhs) const;

    MCAPI void setContentLogOnError(bool value) const;

    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;

    MCAPI class Block const* tryGetBlock() const;

    MCAPI class Block const* tryGetBlockNoLogging() const;

    MCAPI ~BlockDescriptor();

    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const& blockDescriptors, class Block const& block);

    MCAPI static bool anyMatch(
        std::vector<class BlockDescriptor> const& blockDescriptors,
        class BlockDescriptor const&              otherBlockDescriptor
    );

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const& tag);

    MCAPI static class BlockDescriptor
    fromTagExpression(std::string const& tagExpression, ::MolangVersion molangVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Puv::v1_20_50::BlockDescriptor desc);

    MCAPI void* ctor$(class BlockDescriptor const& rhs);

    MCAPI void* ctor$(std::string const& name, std::vector<struct BlockDescriptor::State>&& states);

    MCAPI void* ctor$(class BlockDescriptor&& rhs);

    MCAPI void* ctor$();

    MCAPI void* ctor$(class HashedString const& fullName);

    MCAPI void dtor$();

    MCAPI static auto JSON_NAME_FIELD() -> char const (&)[];

    MCAPI static auto JSON_STATES_FIELD() -> char const (&)[];

    MCAPI static auto JSON_TAGS_FIELD() -> char const (&)[];

    // NOLINTEND
};
