#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class FurnaceQuery : public ::OreUI::QueryBase<::OreUI::FurnaceQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mLitProgress;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mBurnProgress;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
