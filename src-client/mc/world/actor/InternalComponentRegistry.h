#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class HashedString;
// clang-format on

class InternalComponentRegistry {
public:
    // InternalComponentRegistry inner types declare
    // clang-format off
    struct ComponentInfo;
    // clang-format on

    // InternalComponentRegistry inner types define
    struct ComponentInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<void(::CompoundTag const&, ::CompoundTag&)>>
                                                                                         mLegacyDataConversionFunc;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Actor&, ::CompoundTag const&)>> mCreateAndLoadComponentFunc;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Actor const&, ::CompoundTag&)>> mSaveComponentFunc;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentInfo& operator=(ComponentInfo const&);
        ComponentInfo(ComponentInfo const&);
        ComponentInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::InternalComponentRegistry::ComponentInfo& operator=(::InternalComponentRegistry::ComponentInfo&&);

        MCAPI ~ComponentInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo>>
        mRegistry;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InternalComponentRegistry() = default;

    // vIndex: 1
    virtual void registerComponents();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _initializeComponents(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) const;

    MCAPI void initializeComponents(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CompoundTag& _getOrCreateComponentScope(::CompoundTag& tag, ::std::string const& componentName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& INTERNAL_COMPONENTS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerComponents();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
