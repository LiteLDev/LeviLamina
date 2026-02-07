#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/SubpackInfoCollection.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettingsFactory;
// clang-format on

struct PackSettingsInfo {
public:
    // PackSettingsInfo inner types define
    using PackSettingsFinishedCallback = ::std::function<void(::PackSettingsInfo const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackManifest>>                   mPackManifest;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                     mWorldId;
    ::ll::TypedStorage<8, 40, ::std::optional<::Core::PathBuffer<::std::string>>> mWorldPath;
    ::ll::TypedStorage<8, 8, ::PackSettingsFactory*>                              mPackSettingFactory;
    ::ll::TypedStorage<8, 24, ::SubpackInfoCollection>                            mSubpackInfoCollection;
    ::ll::TypedStorage<4, 4, int>                                                 mSubpackIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(::PackSettingsInfo const&)>>   mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsInfo& operator=(PackSettingsInfo const&);
    PackSettingsInfo(PackSettingsInfo const&);
    PackSettingsInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackSettingsInfo(::PackSettingsInfo&&);

    MCAPI PackSettingsInfo(
        ::std::unique_ptr<::PackManifest>                       packManifest,
        ::std::optional<::std::string>                          worldId,
        ::std::optional<::Core::PathBuffer<::std::string>>      worldPath,
        ::PackSettingsFactory*                                  packSettingsFactory,
        ::SubpackInfoCollection const&                          subpackInfo,
        int                                                     subpackIndex,
        ::std::function<void(::PackSettingsInfo const&)> const& callback
    );

    MCAPI ~PackSettingsInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackSettingsInfo&&);

    MCAPI void* $ctor(
        ::std::unique_ptr<::PackManifest>                       packManifest,
        ::std::optional<::std::string>                          worldId,
        ::std::optional<::Core::PathBuffer<::std::string>>      worldPath,
        ::PackSettingsFactory*                                  packSettingsFactory,
        ::SubpackInfoCollection const&                          subpackInfo,
        int                                                     subpackIndex,
        ::std::function<void(::PackSettingsInfo const&)> const& callback
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
