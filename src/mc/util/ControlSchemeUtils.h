#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/controlscheme/Scheme.h"

// auto generated forward declare list
// clang-format off
struct ServerCameraAllowedControlSchemesComponent;
struct ServerCameraDefaultControlSchemesComponent;
namespace SharedTypes::v1_21_80 { struct CameraPreset; }
// clang-format on

namespace ControlSchemeUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::ControlScheme::Scheme> const getAllowedSchemesForCamera(::std::string_view cameraName);

MCNAPI ::ControlScheme::Scheme getDefaultControlScheme(
    ::std::string_view                                          cameraName,
    ::std::vector<::SharedTypes::v1_21_80::CameraPreset> const& presets,
    ::std::vector<::ControlScheme::Scheme> const&               allowedControlSchemes
);

MCNAPI void populateControlSchemeServerComponents(
    ::ServerCameraAllowedControlSchemesComponent&               allowedSchemesComponent,
    ::ServerCameraDefaultControlSchemesComponent&               defaultSchemesComponent,
    ::std::string_view                                          presetName,
    ::std::vector<::SharedTypes::v1_21_80::CameraPreset> const& cameraPresets
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::unordered_map<::std::string_view, ::std::vector<::ControlScheme::Scheme>> const&
DEFAULT_ALLOWED_SCHEMES_FOR_CAMERA();

MCNAPI ::std::unordered_set<::std::string_view> const& MC_CAMERAS();
// NOLINTEND

} // namespace ControlSchemeUtils
