#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
// clang-format on

class CameraPresets {
public:
    // CameraPresets inner types declare
    // clang-format off
    struct CameraList;
    // clang-format on

    // CameraPresets inner types define
    struct CameraList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>       mName;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> mPresetIndices;
        // NOLINTEND

    public:
        // prevent constructor by default
        CameraList& operator=(CameraList const&);
        CameraList();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI CameraList(::CameraPresets::CameraList const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::CameraPresets::CameraList const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_90::CameraPreset>> mPresets;
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraPresets::CameraList>>           mLists;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresets& operator=(CameraPresets const&);
    CameraPresets(CameraPresets const&);
    CameraPresets();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void loadPresets(
        ::ResourcePackManager&                             resourcePackManager,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing
    );

    MCNAPI ::CameraPresets& operator=(::CameraPresets&&);

    MCNAPI ~CameraPresets();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isAllowedEaseTarget(::std::string const& easeTarget);

    MCNAPI static bool isVanillaCamera(::std::string const& cameraName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
