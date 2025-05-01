#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct PathElement; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::internal {

class CerealUpgraderBase {
public:
    // CerealUpgraderBase inner types declare
    // clang-format off
    struct UpgradeState;
    // clang-format on

    // CerealUpgraderBase inner types define
    struct UpgradeState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 192> mUnk942593;
        ::ll::UntypedStorage<8, 24>  mUnkab64ec;
        ::ll::UntypedStorage<8, 24>  mUnk49841b;
        ::ll::UntypedStorage<8, 8>   mUnk2d8f4a;
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
    ::ll::UntypedStorage<8, 24> mUnk52983c;
    ::ll::UntypedStorage<8, 64> mUnk9e85db;
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
        ::std::vector<::std::string>                                source,
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

    MCNAPI void ignore(::std::vector<::std::string> source);

    MCNAPI bool isSupported(::entt::meta_type const& t) const;

    MCNAPI int iterate(
        ::entt::meta_type const&                           type,
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCNAPI void move(::std::vector<::std::string> source, ::std::vector<::std::string> destination);

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
    buildPath(::std::vector<::Puv::internal::PathElement> const& path);

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
