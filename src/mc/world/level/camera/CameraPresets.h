#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Experiments;
class ReadOnlyBinaryStream;
class ResourcePackManager;
struct CameraPreset;
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
        MCAPI ~CameraList();
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
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraPreset>>              mPresets;
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraPresets::CameraList>> mLists;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _discardInvalidPresets();

    MCAPI void _parseAndLoadCameraList(
        ::std::string const&           fileData,
        ::MolangVersion                molangVersion,
        ::std::string_view             filename,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI void _parseAndLoadCameraPreset(
        ::std::string const&           fileData,
        ::MolangVersion                molangVersion,
        ::std::string_view             filename,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI void _storeCameraList(::CameraPresets::CameraList&& list);

    MCAPI ::std::vector<::std::string> buildCameraPresetList() const;

    MCAPI ::std::optional<uint> getCameraPresetIndex(::std::string const& presetName) const;

    MCFOLD ::std::vector<::CameraPreset> const& getPresets() const;

    MCFOLD bool isEmpty() const;

    MCAPI void loadPresets(::ResourcePackManager& resourcePackManager, ::Experiments const&);

    MCAPI ::CameraPresets& operator=(::CameraPresets const&);

    MCAPI ::CameraPresets& operator=(::CameraPresets&&);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraPresets();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setupBindings(::cereal::ReflectionCtx& ctx);

    MCAPI static bool isAllowedEaseTarget(::std::string const& easeTarget);

    MCAPI static bool isVanillaCamera(::std::string const& cameraName);

    MCAPI static ::Bedrock::Result<::CameraPresets> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
