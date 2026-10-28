#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class TelemetryManager; }
// clang-format on

namespace OreUI {

class DynamicComponentTelemetryCommandGroup
: public ::OreUI::CommandGroupBase<::OreUI::DynamicComponentTelemetryCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::TelemetryManager&>            mTelemetryManager;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mRecordDynamicComponentOpened;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mRecordDynamicComponentClosed;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::std::string, int, ::std::optional<int>, ::std::optional<int>>>
        mRecordDynamicElementHoveredOrFocused;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::std::string, int, ::std::optional<int>, ::std::optional<int>>>
        mRecordDynamicElementPressed;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::std::string, int, ::std::optional<int>, ::std::optional<int>>>
                                                                                   mRecordDynamicElementInView;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mRecordDynamicElementOutOfView;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, float, float>>  mRecordScrollDepth;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicComponentTelemetryCommandGroup& operator=(DynamicComponentTelemetryCommandGroup const&);
    DynamicComponentTelemetryCommandGroup(DynamicComponentTelemetryCommandGroup const&);
    DynamicComponentTelemetryCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DynamicComponentTelemetryCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
