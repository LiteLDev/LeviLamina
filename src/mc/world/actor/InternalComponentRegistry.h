#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Actor;

class InternalComponentRegistry {
public:
    // InternalComponentRegistry inner types declare
    // clang-format off
    struct ComponentInfo;
    // clang-format on

    // InternalComponentRegistry inner types define
    struct ComponentInfo {
    public:
        // prevent constructor by default
        ComponentInfo& operator=(ComponentInfo const&);
        ComponentInfo(ComponentInfo const&);
        ComponentInfo();

    public:
        // NOLINTBEGIN
        // symbol: ??4ComponentInfo@InternalComponentRegistry@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct InternalComponentRegistry::ComponentInfo&
        operator=(struct InternalComponentRegistry::ComponentInfo&&);

        // symbol: ??1ComponentInfo@InternalComponentRegistry@@QEAA@XZ
        MCAPI ~ComponentInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    InternalComponentRegistry& operator=(InternalComponentRegistry const&);
    InternalComponentRegistry(InternalComponentRegistry const&);
    InternalComponentRegistry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InternalComponentRegistry@@UEAA@XZ
    virtual ~InternalComponentRegistry() = default;

    // vIndex: 1, symbol: ?registerComponents@InternalComponentRegistry@@UEAAXXZ
    virtual void registerComponents();

    // symbol: ?addComponentSaveData@InternalComponentRegistry@@QEAAXAEBVActor@@AEAVCompoundTag@@@Z
    MCAPI void addComponentSaveData(class Actor const& owner, class CompoundTag& tag);

    // symbol: ?initializeComponents@InternalComponentRegistry@@QEBAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    initializeComponents(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper) const;

    // symbol:
    // ?INTERNAL_COMPONENTS@InternalComponentRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const INTERNAL_COMPONENTS;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_initializeComponents@InternalComponentRegistry@@IEBAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    _initializeComponents(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper) const;

    // symbol:
    // ?_getComponentScope@InternalComponentRegistry@@KAPEBVCompoundTag@@AEBV2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class CompoundTag const*
    _getComponentScope(class CompoundTag const& tag, std::string const& componentName);

    // symbol:
    // ?_getOrCreateComponentScope@InternalComponentRegistry@@KAAEAVCompoundTag@@AEAV2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class CompoundTag&
    _getOrCreateComponentScope(class CompoundTag& tag, std::string const& componentName);

    // NOLINTEND
};
