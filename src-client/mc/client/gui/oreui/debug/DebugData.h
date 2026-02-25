#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/util/UserDefinedFeatureFlags.h"
#include "mc/client/gui/oreui/debug/FrameDebugData.h"
#include "mc/client/gui/oreui/debug/PerformanceStats.h"
#include "mc/client/gui/oreui/debug/Snapshots.h"
#include "mc/client/gui/oreui/debug/ViewDebugSettings.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace OreUI {

struct DebugData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::OreUI::Snapshots>              mSnapshots;
    ::ll::TypedStorage<8, 40, ::OreUI::FrameDebugData>          mFrameDebugData;
    ::ll::TypedStorage<1, 4, ::OreUI::ViewDebugSettings>        mViewSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mDevServerOverrideUrl;
    ::ll::TypedStorage<8, 96, ::OreUI::UserDefinedFeatureFlags> mUserFlags;
    ::ll::TypedStorage<8, 56, ::OreUI::PerformanceStats>        mPerformanceStats;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebugData() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
