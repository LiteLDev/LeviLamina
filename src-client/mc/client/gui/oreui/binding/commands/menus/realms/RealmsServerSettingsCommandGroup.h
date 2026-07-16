#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsServerSettingsManager; }
// clang-format on

namespace OreUI {

class RealmsServerSettingsCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsServerSettingsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServerSettingsManager>>
                                                                           mRealmsServerSettingsManager;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                mTaskGroup;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64>> mFetchRealmsServerMode;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, ::Realms::RealmsServerMode>>
                                                                                mSetRealmsServerMode;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, int>> mSetRealmsServerMaxPlayerCount;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, int>> mSetRealmsServerRenderDist;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int64, int>> mSetRealmsServerSimDist;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsServerSettingsCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsServerSettingsCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
