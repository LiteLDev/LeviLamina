#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/SerializerContext.h"

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
        // prevent constructor by default
        UpgradeState& operator=(UpgradeState const&);
        UpgradeState(UpgradeState const&);
        UpgradeState();

    public:
        // NOLINTBEGIN
        MCAPI ~UpgradeState();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CerealUpgraderBase& operator=(CerealUpgraderBase const&);
    CerealUpgraderBase(CerealUpgraderBase const&);
    CerealUpgraderBase();

public:
    // NOLINTBEGIN
    MCAPI ~CerealUpgraderBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI explicit CerealUpgraderBase(struct cereal::ReflectionCtx const& ctx);

    MCAPI void bindCallback(
        std::function<void(entt::meta_any&, entt::meta_any&)> cb,
        std::vector<std::string>                              source,
        std::vector<std::string>                              destination
    );

    MCAPI struct cereal::ReflectionCtx const& ctx() const;

    MCAPI void ignore(std::vector<std::string> source);

    MCAPI void move(std::vector<std::string> source, std::vector<std::string> destination);

    MCAPI void performUpgrade(entt::meta_any& source, entt::meta_any destination, class Puv::Logger& log) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void copy(
        entt::meta_any&                                         inputAny_,
        entt::meta_any&                                         outputAny_,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state,
        entt::meta_type const&                                  srcType,
        uint                                                    srcId,
        entt::meta_type const&                                  dstType,
        uint                                                    dstId
    ) const;

    MCAPI void copyAssociative(
        entt::meta_associative_container                        contFrom,
        entt::meta_any&                                         outputAny,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI bool copyEnum(
        entt::meta_any&                                         source,
        entt::meta_any&                                         target,
        class cereal::SerializerEnumMapping const*              sourceMapping,
        class cereal::SerializerEnumMapping const*              targetMapping,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI void copyNotEnum(
        entt::meta_any&                                         inputAny,
        entt::meta_any&                                         outputAny,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI void copyNotEnumImpl(
        entt::meta_any&                                         inputAny,
        entt::meta_any&                                         outputAny,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI void copySequence(
        entt::meta_sequence_container                           contFrom,
        entt::meta_any&                                         outputAny,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI bool isReflected(entt::meta_type const& t) const;

    MCAPI int iterate(
        entt::meta_type const&                                  type,
        entt::meta_any&                                         inputAny,
        entt::meta_any&                                         outputAny,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI void unwrapOrCopy(
        entt::meta_any&                                         inputAny,
        entt::meta_any&                                         outputAny,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state
    ) const;

    MCAPI static std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>
    buildPath(std::vector<struct Puv::internal::PathElement> const& path, struct cereal::ReflectionCtx const& ctx);

    MCAPI static entt::meta_any constructOrLog(
        struct cereal::ReflectionCtx const&                     ctx,
        entt::meta_type const&                                  t,
        struct Puv::internal::CerealUpgraderBase::UpgradeState& state
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct cereal::ReflectionCtx const& ctx);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::internal
