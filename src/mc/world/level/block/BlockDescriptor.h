#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/threading/SpinLockImpl.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
class CompoundTag;
class ExpressionNode;
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDescriptor {
public:
    // BlockDescriptor inner types declare
    // clang-format off
    class ResolveHelper;
    class ResolvedState;
    struct State;
    // clang-format on

    // BlockDescriptor inner types define
    enum class CompareType : int {
        AnyTag    = 0,
        BlockName = 1,
        States    = 2,
        Unknown   = 3,
    };

    class ResolveHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockDescriptor&> mBlockDescriptor;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolveHelper& operator=(ResolveHelper const&);
        ResolveHelper(ResolveHelper const&);
        ResolveHelper();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void resolve(bool logInvalidBlocks);
        // NOLINTEND
    };

    class ResolvedState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockState const*>> mBlockState;
        ::ll::TypedStorage<4, 4, int>                                  mValue;
        // NOLINTEND
    };

    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString>                                   mName;
        ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::BlockDescriptor::Compound> mState;
        // NOLINTEND

    public:
        // prevent constructor by default
        State();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI State(::HashedString name, ::SharedTypes::Legacy::BlockDescriptor::Compound state);

        MCNAPI State(::HashedString name, ::std::string const& stringState);

        MCNAPI ~State();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::HashedString name, ::SharedTypes::Legacy::BlockDescriptor::Compound state);

        MCNAPI void* $ctor(::HashedString name, ::std::string const& stringState);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using CompoundProxy = ::SharedTypes::Legacy::BlockDescriptor::Compound;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockDescriptor::ResolveHelper>                 mResolveHelper;
    ::ll::TypedStorage<8, 48, ::HashedString>                                  mBlockName;
    ::ll::TypedStorage<1, 1, bool>                                             mIsComplexAlias;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ExpressionNode>>             mTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor::State>>         mRawStates;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor::ResolvedState>> mResolvedStates;
    ::ll::TypedStorage<4, 4, ::BlockDescriptor::CompareType>                   mCompareType;
    ::ll::TypedStorage<1, 1, bool>                                             mContentLogOnError;
    ::ll::TypedStorage<8, 8, ::Block const*>                                   mBlock;
    ::ll::TypedStorage<1, 1, bool>                                             mValid;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDeferred;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                  mLock;
    // NOLINTEND

public:
    static bool anyMatch(::std::vector<::BlockDescriptor> const& blockDescriptors, ::Block const& block) {
        return std::ranges::any_of(blockDescriptors, [&block](auto&& des) { return des.matches(block); });
    }

public:
    // prevent constructor by default
    BlockDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor desc);

    MCAPI explicit BlockDescriptor(::HashedString const& fullName);

    MCAPI BlockDescriptor(::BlockDescriptor&& rhs);

    MCAPI BlockDescriptor(::BlockDescriptor const& rhs);

    MCNAPI BlockDescriptor(::std::string const& name, ::std::vector<::BlockDescriptor::State>&& states);

    MCNAPI bool _anyTagsMatch(::Block const& block) const;

    MCNAPI bool _statesMatch(::Block const& block) const;

    MCAPI ::Block const& getBlockOrUnknownBlock() const;

    MCNAPI ::BlockDescriptor::CompareType const& getCompareType() const;

    MCNAPI ::std::string const& getFullName() const;

    MCNAPI bool isValid() const;

    MCAPI bool matches(::Block const& block) const;

    MCNAPI bool matches(::BlockDescriptor const& otherDescriptor) const;

    MCNAPI void operator=(::BlockDescriptor&& rhs);

    MCNAPI void operator=(::BlockDescriptor const& rhs);

    MCNAPI ::std::unique_ptr<::CompoundTag> toCompoundTag() const;

    MCAPI ::Block const* tryGetBlock() const;

    MCNAPI ::Block const* tryGetBlockNoLogging() const;

    MCAPI ~BlockDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::BlockDescriptor fromCompoundTag(::CompoundTag const& tag);

    MCNAPI static ::BlockDescriptor
    fromTagExpression(::std::string const& tagExpression, ::MolangVersion molangVersion);

    MCNAPI static ::SharedTypes::Legacy::BlockDescriptor toSharedTypes(::BlockDescriptor const& instance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> JSON_NAME_FIELD();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> JSON_STATES_FIELD();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> JSON_TAGS_FIELD();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor desc);

    MCAPI void* $ctor(::HashedString const& fullName);

    MCAPI void* $ctor(::BlockDescriptor&& rhs);

    MCAPI void* $ctor(::BlockDescriptor const& rhs);

    MCNAPI void* $ctor(::std::string const& name, ::std::vector<::BlockDescriptor::State>&& states);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
