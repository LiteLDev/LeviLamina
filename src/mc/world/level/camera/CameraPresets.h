#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class ReadOnlyBinaryStream;
class ResourcePackManager;
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
namespace cereal { struct ReflectionCtx; }
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
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CameraList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    MCNAPI void _discardInvalidPresets();

    MCNAPI void _parseAndLoadCameraList(
        ::std::string const&           fileData,
        ::MolangVersion                molangVersion,
        ::std::string_view             filename,
        ::cereal::ReflectionCtx const& ctx
    );

    MCNAPI void _parseAndLoadCameraPreset(
        ::std::string const&           fileData,
        ::MolangVersion                molangVersion,
        ::cereal::ReflectionCtx const& ctx
    );

    MCNAPI void _storeCameraList(::CameraPresets::CameraList&& list);

    MCNAPI ::std::vector<::std::string> buildCameraPresetList() const;

    MCNAPI ::std::optional<uint> getCameraPresetIndex(::std::string const& presetName) const;

    MCNAPI void loadPresets(::ResourcePackManager& resourcePackManager, ::Experiments const& experiments);

    MCNAPI ::CameraPresets& operator=(::CameraPresets&&);

    MCNAPI ~CameraPresets();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _setupBindings(::cereal::ReflectionCtx& ctx);

    MCNAPI static bool isAllowedEaseTarget(::std::string const& easeTarget);

    MCNAPI static bool isVanillaCamera(::std::string const& cameraName);

    MCNAPI static ::Bedrock::Result<::CameraPresets> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
