#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace Puv { struct Logger; }
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
        // symbol: ??1UpgradeState@CerealUpgraderBase@internal@Puv@@QEAA@XZ
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
    // symbol: ??0CerealUpgraderBase@internal@Puv@@QEAA@AEBUReflectionCtx@cereal@@@Z
    MCAPI explicit CerealUpgraderBase(struct cereal::ReflectionCtx const&);

    // symbol: ?after@CerealUpgraderBase@internal@Puv@@QEAAXV?$function@$$A6AXAEAVmeta_any@entt@@0@Z@std@@@Z
    MCAPI void after(std::function<void(entt::meta_any&, entt::meta_any&)>);

    // symbol:
    // ?callback@CerealUpgraderBase@internal@Puv@@QEAAXV?$function@$$A6AXAEAVmeta_any@entt@@0@Z@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@1@Z
    MCAPI void
        callback(std::function<void(entt::meta_any&, entt::meta_any&)>, std::vector<std::string>, std::vector<std::string>);

    // symbol: ?ctx@CerealUpgraderBase@internal@Puv@@QEBAAEBUReflectionCtx@cereal@@XZ
    MCAPI struct cereal::ReflectionCtx const& ctx() const;

    // symbol:
    // ?ignore@CerealUpgraderBase@internal@Puv@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void ignore(std::vector<std::string>);

    // symbol:
    // ?move@CerealUpgraderBase@internal@Puv@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@0@Z
    MCAPI void move(std::vector<std::string>, std::vector<std::string>);

    // symbol: ?performUpgrade@CerealUpgraderBase@internal@Puv@@QEBAXAEAVmeta_any@entt@@V45@AEAULogger@3@@Z
    MCAPI void performUpgrade(entt::meta_any&, entt::meta_any, struct Puv::Logger&) const;

    // symbol: ??1CerealUpgraderBase@internal@Puv@@QEAA@XZ
    MCAPI ~CerealUpgraderBase();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?copy@CerealUpgraderBase@internal@Puv@@AEBAXAEAVmeta_any@entt@@0AEAUUpgradeState@123@AEBVmeta_type@5@I2I@Z
    MCAPI void copy(
        entt::meta_any&,
        entt::meta_any&,
        struct Puv::internal::CerealUpgraderBase::UpgradeState&,
        entt::meta_type const&,
        uint,
        entt::meta_type const&,
        uint
    ) const;

    // symbol:
    // ?copyAssociative@CerealUpgraderBase@internal@Puv@@AEBAXVmeta_associative_container@entt@@AEAVmeta_any@5@AEAUUpgradeState@123@@Z
    MCAPI void
    copyAssociative(entt::meta_associative_container, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&)
        const;

    // symbol:
    // ?copyEnum@CerealUpgraderBase@internal@Puv@@AEBA_NAEAVmeta_any@entt@@0PEBVSerializerEnumMapping@cereal@@1AEAUUpgradeState@123@@Z
    MCAPI bool
    copyEnum(entt::meta_any&, entt::meta_any&, class cereal::SerializerEnumMapping const*, class cereal::SerializerEnumMapping const*, struct Puv::internal::CerealUpgraderBase::UpgradeState&)
        const;

    // symbol: ?copyNotEnum@CerealUpgraderBase@internal@Puv@@AEBAXAEAVmeta_any@entt@@0AEAUUpgradeState@123@@Z
    MCAPI void
    copyNotEnum(entt::meta_any&, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&) const;

    // symbol: ?copyNotEnumImpl@CerealUpgraderBase@internal@Puv@@AEBAXAEAVmeta_any@entt@@0AEAUUpgradeState@123@@Z
    MCAPI void
    copyNotEnumImpl(entt::meta_any&, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&) const;

    // symbol:
    // ?copySequence@CerealUpgraderBase@internal@Puv@@AEBAXVmeta_sequence_container@entt@@AEAVmeta_any@5@AEAUUpgradeState@123@@Z
    MCAPI void
    copySequence(entt::meta_sequence_container, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&)
        const;

    // symbol: ?isReflected@CerealUpgraderBase@internal@Puv@@AEBA_NAEBVmeta_type@entt@@@Z
    MCAPI bool isReflected(entt::meta_type const&) const;

    // symbol:
    // ?iterate@CerealUpgraderBase@internal@Puv@@AEBA_NAEBVmeta_type@entt@@AEAVmeta_any@5@1AEAUUpgradeState@123@@Z
    MCAPI bool
    iterate(entt::meta_type const&, entt::meta_any&, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&)
        const;

    // symbol: ?unwrapOrCopy@CerealUpgraderBase@internal@Puv@@AEBAXAEAVmeta_any@entt@@0AEAUUpgradeState@123@@Z
    MCAPI void
    unwrapOrCopy(entt::meta_any&, entt::meta_any&, struct Puv::internal::CerealUpgraderBase::UpgradeState&) const;

    // symbol:
    // ?buildPath@CerealUpgraderBase@internal@Puv@@CA?AV?$vector@U?$pair@W4ContextType@SerializerContext@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@W4ContextType@SerializerContext@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@AEBV?$vector@UPathElement@internal@Puv@@V?$allocator@UPathElement@internal@Puv@@@std@@@5@AEBUReflectionCtx@cereal@@@Z
    MCAPI static std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>
    buildPath(std::vector<struct Puv::internal::PathElement> const&, struct cereal::ReflectionCtx const&);

    // symbol:
    // ?constructOrLog@CerealUpgraderBase@internal@Puv@@CA?AVmeta_any@entt@@AEBUReflectionCtx@cereal@@AEBVmeta_type@5@AEAUUpgradeState@123@@Z
    MCAPI static entt::meta_any
    constructOrLog(struct cereal::ReflectionCtx const&, entt::meta_type const&, struct Puv::internal::CerealUpgraderBase::UpgradeState&);

    // NOLINTEND
};

}; // namespace Puv::internal
