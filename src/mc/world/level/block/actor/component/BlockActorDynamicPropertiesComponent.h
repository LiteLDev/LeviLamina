#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/block/actor/BlockActorVersion.h"
#include "mc/world/level/block/actor/component/IBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class BlockActorDynamicPropertiesComponent : public ::IBlockActorComponent {
public:
    // BlockActorDynamicPropertiesComponent inner types define
    enum class SetResult : int {
        Success              = 0,
        StorageLimitExceeded = 1,
        StorageNotFound      = 2,
    };

    using SetCallbackFn = ::std::function<
        void(::std::string const&, uint, ::std::variant<double, float, bool, ::std::string, ::Vec3> const*)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint,
            ::std::variant<double, float, bool, ::std::string, ::Vec3>,
            ::std::less<uint>,
            ::std::vector<uint>,
            ::std::vector<::std::variant<double, float, bool, ::std::string, ::Vec3>>>>
                                     mDataMap;
    ::ll::TypedStorage<8, 8, uint64> mStorageBytes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::CompoundTag& parentTag) const /*override*/;

    virtual void load(::CompoundTag const& parentTag, ::BlockActorVersion version) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadInception(::CompoundTag const& parentTag);

    MCAPI ::BlockActorDynamicPropertiesComponent::SetResult _set(
        ::std::string const&                                              key,
        uint                                                              keyHash,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
        ::std::function<
            void(::std::string const&, uint, ::std::variant<double, float, bool, ::std::string, ::Vec3> const*)>
            callback
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> DYNAMIC_PROPERTIES_TAG();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $save(::CompoundTag& parentTag) const;

    MCAPI void $load(::CompoundTag const& parentTag, ::BlockActorVersion version);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
