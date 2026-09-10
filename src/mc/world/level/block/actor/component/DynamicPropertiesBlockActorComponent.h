#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/block/actor/BlockActorVersion.h"
#include "mc/world/level/block/actor/component/IBlockActorComponent.h"
#include "mc/world/persistence/lean_dynamic_property/String.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class DynamicPropertiesBlockActorComponent : public ::IBlockActorComponent {
public:
    // DynamicPropertiesBlockActorComponent inner types define
    enum class SetResult : int {
        Success              = 0,
        StorageLimitExceeded = 1,
        StorageNotFound      = 2,
    };

    using SetCallbackFn = ::std::function<void(
        ::std::string const&,
        uint,
        ::std::string const&,
        uint,
        ::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3> const*
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint,
            ::brstd::flat_map<
                uint,
                ::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3>,
                ::std::less<uint>,
                ::std::vector<uint>,
                ::std::vector<::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3>>>,
            ::std::less<uint>,
            ::std::vector<uint>,
            ::std::vector<::brstd::flat_map<
                uint,
                ::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3>,
                ::std::less<uint>,
                ::std::vector<uint>,
                ::std::vector<::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3>>>>>>
        mDataMap;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<uint, uint64, ::std::less<uint>, ::std::vector<uint>, ::std::vector<uint64>>>
        mStorageBytes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::CompoundTag& parentTag) const /*override*/;

    virtual void load(::CompoundTag const& parentTag, ::BlockActorVersion version) /*override*/;

    virtual ~DynamicPropertiesBlockActorComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadInception(::CompoundTag const& parentTag);

    MCAPI ::std::optional<::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3>>
    get(::std::string const& bucket, ::std::string const& key) const;

    MCAPI uint64 getByteCount(::std::string const& bucket) const;

    MCAPI ::DynamicPropertiesBlockActorComponent::SetResult remove(
        ::std::string const& bucket,
        ::std::string const& key,
        ::std::function<void(
            ::std::string const&,
            uint,
            ::std::string const&,
            uint,
            ::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3> const*
        )>                   callback
    );

    MCAPI ::DynamicPropertiesBlockActorComponent::SetResult
    set(::std::string const&                                                              bucket,
        ::std::string const&                                                              key,
        ::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3> const& value,
        ::std::function<void(
            ::std::string const&,
            uint,
            ::std::string const&,
            uint,
            ::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3> const*
        )>                                                                                callback);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> DYNAMIC_PROPERTIES_TAG();

    MCAPI static ::brstd::
        flat_map<uint, ::std::string, ::std::less<uint>, ::std::vector<uint>, ::std::vector<::std::string>>&
        mBucketDictionary();

    MCAPI static ::Bedrock::Threading::Mutex& mDictionaryMutex();

    MCAPI static ::brstd::
        flat_map<uint, ::std::string, ::std::less<uint>, ::std::vector<uint>, ::std::vector<::std::string>>&
        mVariableDictionary();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
