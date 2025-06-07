#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
namespace Puv::internal { struct PathElement; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::internal {

class CerealUpgraderBase {
public:
    // CerealUpgraderBase inner types declare
    // clang-format off
    struct AlterationNode;
    struct UpgradeState;
    // clang-format on

    // CerealUpgraderBase inner types define
    struct AlterationNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64>  mUnk11d476;
        ::ll::UntypedStorage<8, 288> mUnk406fb7;
        // NOLINTEND

    public:
        // prevent constructor by default
        AlterationNode& operator=(AlterationNode const&);
        AlterationNode(AlterationNode const&);
        AlterationNode();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AlterationNode();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void fill(
            ::Puv::internal::CerealUpgraderBase::AlterationNode&                                   node,
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>> it,
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>> end,
            ::std::variant<
                ::std::monostate,
                ::std::pair<
                    ::std::function<void(::entt::meta_any&, ::entt::meta_any&)>,
                    ::Bedrock::small_vector<::Puv::internal::PathElement, 1>>> alt
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct UpgradeState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 192> mUnk942593;
        ::ll::UntypedStorage<8, 208> mUnk8da444;
        ::ll::UntypedStorage<8, 208> mUnk95c670;
        ::ll::UntypedStorage<8, 8>   mUnk2d8f4a;
        ::ll::UntypedStorage<8, 8>   mUnkd5b21e;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpgradeState& operator=(UpgradeState const&);
        UpgradeState(UpgradeState const&);
        UpgradeState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UpgradeState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk52983c;
    ::ll::UntypedStorage<8, 352> mUnk1e0ccd;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealUpgraderBase& operator=(CerealUpgraderBase const&);
    CerealUpgraderBase(CerealUpgraderBase const&);
    CerealUpgraderBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CerealUpgraderBase(::cereal::ReflectionCtx const& ctx);

    MCNAPI void bindCallback(
        ::std::function<void(::entt::meta_any&, ::entt::meta_any&)> cb,
        ::std::vector<::std::string> const&                         source,
        ::std::vector<::std::string>                                destination
    );

    MCNAPI void copy(
        ::entt::meta_any&                                  inputAny_,
        ::entt::meta_any&                                  outputAny_,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI void copyAssociative(
        ::entt::meta_associative_container                 contFrom,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI bool copyEnum(
        ::entt::meta_any&                                  source,
        ::entt::meta_any&                                  target,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI void copyNotEnum(
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI void copyNotEnumImpl(
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI void copySequence(
        ::entt::meta_sequence_container                    contFrom,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI bool isSupported(::entt::meta_type const& t) const;

    MCNAPI int iterate(
        ::entt::meta_type const&                           type,
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI void move(::std::vector<::std::string> const& source, ::std::vector<::std::string> destination);

    MCNAPI void performUpgrade(::entt::meta_any& source, ::entt::meta_any destination, ::Puv::Logger& log) const;

    MCNAPI void unwrapOrCopy(
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI ~CerealUpgraderBase();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>>
    buildPath(::Bedrock::small_vector<::Puv::internal::PathElement, 1> const& path);

    MCNAPI static ::entt::meta_any
    constructOrLog(::entt::meta_type const& t, ::Puv::internal::CerealUpgraderBase::UpgradeState& state);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
