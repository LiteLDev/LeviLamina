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
        // prevent constructor by default
        UpgradeState& operator=(UpgradeState const&);
        UpgradeState(UpgradeState const&);
        UpgradeState();

    public:
        // NOLINTBEGIN
        MCAPI ~UpgradeState();

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
    MCAPI explicit CerealUpgraderBase(struct cereal::ReflectionCtx const&);

    MCAPI void
        bindCallback(std::function<void(entt::meta_any&, entt::meta_any&)>, std::vector<std::string>, std::vector<std::string>);

    MCAPI struct cereal::ReflectionCtx const& ctx() const;

    MCAPI void ignore(std::vector<std::string>);

    MCAPI void move(std::vector<std::string>, std::vector<std::string>);

    MCAPI void performUpgrade(entt::meta_any&, entt::meta_any, class Puv::Logger&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void copy(
        entt::meta_any&,
        entt::meta_any&,
        struct Puv::internal::CerealUpgraderBase::UpgradeState&,
        entt::meta_type const&,
        uint,
        entt::meta_type const&,
        uint
    ) const;

    MCAPI void
    copyAssociative(entt::meta_associative_container, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&)
        const;

    MCAPI bool
    copyEnum(entt::meta_any&, entt::meta_any&, class cereal::SerializerEnumMapping const*, class cereal::SerializerEnumMapping const*, struct Puv::internal::CerealUpgraderBase::UpgradeState&)
        const;

    MCAPI void
    copyNotEnum(entt::meta_any&, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&) const;

    MCAPI void
    copyNotEnumImpl(entt::meta_any&, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&) const;

    MCAPI void
    copySequence(entt::meta_sequence_container, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&)
        const;

    MCAPI bool isReflected(entt::meta_type const&) const;

    MCAPI int
    iterate(entt::meta_type const&, entt::meta_any&, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&)
        const;

    MCAPI void
    unwrapOrCopy(entt::meta_any&, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&) const;

    MCAPI static std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>
    buildPath(std::vector<struct Puv::internal::PathElement> const&, struct cereal::ReflectionCtx const&);

    MCAPI static entt::meta_any
    constructOrLog(struct cereal::ReflectionCtx const&, entt::meta_type const&, struct Puv::internal::CerealUpgraderBase::UpgradeState&);

    // NOLINTEND
};

}; // namespace Puv::internal
