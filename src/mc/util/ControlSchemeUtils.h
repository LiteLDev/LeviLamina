#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/controlscheme/Scheme.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class EntityContext;
class Player;
struct ControlSchemeComponent;
struct ServerCameraAllowedControlSchemesComponent;
struct ServerCameraDefaultControlSchemesComponent;
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
// clang-format on

namespace ControlSchemeUtils {
// functions
// NOLINTBEGIN
MCNAPI bool clearControlScheme(
    ::Player&                                           player,
    ::ServerCameraDefaultControlSchemesComponent const* defaultSchemesComponent,
    ::std::string const&                                preset
);

MCNAPI ::std::vector<::ControlScheme::Scheme> const getAllowedSchemesForCamera(::std::string_view cameraName);

MCNAPI ::std::string getControlSchemeName(::ControlScheme::Scheme scheme);

MCNAPI ::ControlScheme::Scheme getDefaultControlScheme(
    ::std::string_view                                          cameraName,
    ::std::vector<::SharedTypes::v1_21_90::CameraPreset> const& presets,
    ::std::vector<::ControlScheme::Scheme> const&               allowedControlSchemes
);

MCNAPI ::std::string_view getRootInheritedCamera(
    ::std::string_view                                          cameraName,
    ::std::vector<::SharedTypes::v1_21_90::CameraPreset> const& presets
);

MCNAPI void populateControlSchemeServerComponents(
    ::ServerCameraAllowedControlSchemesComponent&               allowedSchemesComponent,
    ::ServerCameraDefaultControlSchemesComponent&               defaultSchemesComponent,
    ::std::string_view                                          presetName,
    ::std::vector<::SharedTypes::v1_21_90::CameraPreset> const& cameraPresets
);

MCNAPI ::ControlScheme::Scheme resolveControlSchemeOnCameraSetCommand(
    ::EntityContext const&          levelEntity,
    ::std::string const&            cameraPresetName,
    ::ControlSchemeComponent const& schemeComponent,
    ::Player&                       player
);

MCNAPI void setBaseGameVersion(::BaseGameVersion const& version);

MCNAPI bool setControlScheme(
    ::Player&                                           player,
    ::ControlScheme::Scheme                             mControlScheme,
    ::ServerCameraAllowedControlSchemesComponent const* allowedSchemesComponent,
    ::std::string const&                                preset
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::BaseGameVersion& baseGameVersion();
// NOLINTEND

} // namespace ControlSchemeUtils
