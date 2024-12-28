#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
namespace Puv::internal { struct PathElement; }
namespace cereal { class SerializerEnumMapping; }
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
        MCAPI ~UpgradeState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    MCAPI explicit CerealUpgraderBase(::cereal::ReflectionCtx const& ctx);

    MCAPI void bindCallback(
        ::std::function<void(::entt::meta_any&, ::entt::meta_any&)> cb,
        ::std::vector<::std::string>                                source,
        ::std::vector<::std::string>                                destination
    );

    MCAPI void copy(
        ::entt::meta_any&                                  inputAny_,
        ::entt::meta_any&                                  outputAny_,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state,
        ::entt::meta_type const&                           srcType,
        uint                                               srcId,
        ::entt::meta_type const&                           dstType,
        uint                                               dstId
    ) const;

    MCAPI void copyAssociative(
        ::entt::meta_associative_container                 contFrom,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI bool copyEnum(
        ::entt::meta_any&                                  source,
        ::entt::meta_any&                                  target,
        ::cereal::SerializerEnumMapping const*             sourceMapping,
        ::cereal::SerializerEnumMapping const*             targetMapping,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI void copyNotEnum(
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI void copyNotEnumImpl(
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI void copySequence(
        ::entt::meta_sequence_container                    contFrom,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI ::cereal::ReflectionCtx const& ctx() const;

    MCAPI void ignore(::std::vector<::std::string> source);

    MCAPI int iterate(
        ::entt::meta_type const&                           type,
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI void move(::std::vector<::std::string> source, ::std::vector<::std::string> destination);

    MCAPI void performUpgrade(::entt::meta_any& source, ::entt::meta_any destination, ::Puv::Logger& log) const;

    MCAPI void unwrapOrCopy(
        ::entt::meta_any&                                  inputAny,
        ::entt::meta_any&                                  outputAny,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI ~CerealUpgraderBase();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::pair<::cereal::SerializerContext::ContextType, ::std::string>>
    buildPath(::std::vector<::Puv::internal::PathElement> const& path, ::cereal::ReflectionCtx const& ctx);

    MCAPI static ::entt::meta_any constructOrLog(
        ::cereal::ReflectionCtx const&                     ctx,
        ::entt::meta_type const&                           t,
        ::Puv::internal::CerealUpgraderBase::UpgradeState& state
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
