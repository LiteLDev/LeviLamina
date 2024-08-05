#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        MCAPI struct InternalComponentRegistry::ComponentInfo&
        operator=(struct InternalComponentRegistry::ComponentInfo&&);

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
    // vIndex: 0
    virtual ~InternalComponentRegistry() = default;

    // vIndex: 1
    virtual void registerComponents();

    MCAPI void addComponentSaveData(class Actor const& owner, class CompoundTag& tag);

    MCAPI void
    initializeComponents(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper) const;

    MCAPI static std::string const INTERNAL_COMPONENTS;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void
    _initializeComponents(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper) const;

    MCAPI static class CompoundTag const*
    _getComponentScope(class CompoundTag const& tag, std::string const& componentName);

    MCAPI static class CompoundTag&
    _getOrCreateComponentScope(class CompoundTag& tag, std::string const& componentName);

    // NOLINTEND
};
