#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GameplayModelBase.h"
#include "mc/client/gui/oreui/input/InputMethod.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class InputGameplayModel : public ::OreUI::Experimental::GameplayModelBase<::OreUI::InputGameplayModel> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OreUI::InputMethod> mCurrentInputType;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>   mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    InputGameplayModel& operator=(InputGameplayModel const&);
    InputGameplayModel(InputGameplayModel const&);
    InputGameplayModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND
};

} // namespace OreUI
